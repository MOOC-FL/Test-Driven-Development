#### Singleton vs. Other Creational Patterns

####  Quick Comparison Table

| Feature | Singleton | Factory Method | Abstract Factory | Builder | Prototype |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Primary Goal** | One instance only | Create related objects | Create families of objects | Build complex objects step-by-step | Clone existing objects |
| **Number of Instances** | 1 per JVM | Multiple | Multiple | 1 (the built object) | Multiple (clones) |
| **Constructor Visibility** | Private | Protected/public | Protected/public | Public/private | Public/private |
| **Client Knows Concrete Class?** | No | No | No | No | No (uses clone) |
| **Parameter Flexibility** | None/fixed | Flexible per factory | Flexible per factory | High (step-by-step) | N/A (copies existing) |
| **Object Complexity** | Simple | Medium | Medium | High (complex construction) | Medium (copyable) |
| **Runtime Selection** | N/A | Yes | Yes | Yes | Yes |

#### 1️ Singleton vs. Factory Pattern

#### **When to use which?**

| Scenario | Use Singleton | Use Factory |
| :--- | :--- | :--- |
| Need exactly **one instance** globally | ✅ | ❌ |
| Need to **create multiple similar objects** | ❌ | ✅ |
| Want to **hide creation logic** from client | ✅ | ✅ |
| Need **parameterized object creation** | ❌ | ✅ |
| **Configuration manager**, **Logger**, **Cache** | ✅ | ❌ |
| **Database connection pool**, **Thread pool** | ❌ (use Object Pool) | ✅ |

#### **Code Example Comparison**

```java
// SINGLETON - One instance only
public class ConfigManager {
    private static volatile ConfigManager instance;
    private Properties properties;
    
    private ConfigManager() {
        // load config once
        properties = new Properties();
        properties.load("config.properties");
    }
    
    public static ConfigManager getInstance() {
        if (instance == null) {
            synchronized (ConfigManager.class) {
                if (instance == null) {
                    instance = new ConfigManager();
                }
            }
        }
        return instance;
    }
    
    public String getProperty(String key) {
        return properties.getProperty(key);
    }
}

// FACTORY - Creates many objects
public class DatabaseConnectionFactory {
    public static Connection getConnection(String dbType, String host, String port) {
        if ("MySQL".equalsIgnoreCase(dbType)) {
            return new MySQLConnection(host, port);
        } else if ("PostgreSQL".equalsIgnoreCase(dbType)) {
            return new PostgresConnection(host, port);
        } else if ("Oracle".equalsIgnoreCase(dbType)) {
            return new OracleConnection(host, port);
        }
        throw new IllegalArgumentException("Unknown database type");
    }
}

// Client code
public class Client {
    public static void main(String[] args) {
        // Singleton usage
        ConfigManager config = ConfigManager.getInstance();
        String dbUrl = config.getProperty("database.url");
        
        // Factory usage - creates multiple different connections
        Connection mysql = DatabaseConnectionFactory.getConnection("MySQL", "localhost", "3306");
        Connection postgres = DatabaseConnectionFactory.getConnection("PostgreSQL", "localhost", "5432");
    }
}
```

#### 2️⃣ Singleton vs. Builder Pattern

#### **When to use which?**

| Scenario | Use Singleton | Use Builder |
| :--- | :--- | :--- |
| Need **immutable single instance** | ✅ | ❌ |
| Need to **create complex objects with many parameters** | ❌ | ✅ |
| Object construction has **optional/mandatory fields** | ❌ | ✅ |
| Need **fluent interface** for readability | ❌ | ✅ |
| **Application configuration** (single, global) | ✅ | ❌ |
| **Complex DTO/Entity creation** (User, Order, Product) | ❌ | ✅ |

#### **Code Example Comparison**

```java
// SINGLETON - Global configuration holder
public class AppConfig {
    private static AppConfig instance;
    private String appName;
    private int maxConnections;
    private boolean debugMode;
    
    private AppConfig() {
        // Default values
        this.appName = "MyApp";
        this.maxConnections = 10;
        this.debugMode = false;
    }
    
    public static AppConfig getInstance() {
        if (instance == null) {
            instance = new AppConfig();
        }
        return instance;
    }
    
    // Setters for configuration (careful with thread-safety)
    public void setAppName(String appName) { this.appName = appName; }
    public void setMaxConnections(int max) { this.maxConnections = max; }
}

// BUILDER - Complex object creation
public class User {
    private final String username;      // mandatory
    private final String email;         // mandatory
    private final String firstName;     // optional
    private final String lastName;      // optional
    private final int age;              // optional
    private final List<String> roles;   // optional
    
    private User(UserBuilder builder) {
        this.username = builder.username;
        this.email = builder.email;
        this.firstName = builder.firstName;
        this.lastName = builder.lastName;
        this.age = builder.age;
        this.roles = builder.roles;
    }
    
    public static class UserBuilder {
        private final String username;
        private final String email;
        private String firstName;
        private String lastName;
        private int age = 0;
        private List<String> roles = new ArrayList<>();
        
        public UserBuilder(String username, String email) {
            this.username = username;
            this.email = email;
        }
        
        public UserBuilder firstName(String firstName) {
            this.firstName = firstName;
            return this;
        }
        
        public UserBuilder lastName(String lastName) {
            this.lastName = lastName;
            return this;
        }
        
        public UserBuilder age(int age) {
            this.age = age;
            return this;
        }
        
        public UserBuilder addRole(String role) {
            this.roles.add(role);
            return this;
        }
        
        public User build() {
            return new User(this);
        }
    }
}

// Client code
public class Client {
    public static void main(String[] args) {
        // Singleton - global config
        AppConfig config = AppConfig.getInstance();
        config.setAppName("MyEnterpriseApp");
        
        // Builder - creates specific users
        User admin = new User.UserBuilder("admin", "admin@example.com")
            .firstName("John")
            .lastName("Doe")
            .age(30)
            .addRole("ADMIN")
            .addRole("USER")
            .build();
            
        User guest = new User.UserBuilder("guest", "guest@example.com")
            .firstName("Guest")
            .build();
    }
}
```

#### 3️⃣ Singleton vs. Prototype Pattern

#### **When to use which?**

| Scenario | Use Singleton | Use Prototype |
| :--- | :--- | :--- |
| Need **only one instance** globally | ✅ | ❌ |
| Need **many similar but independent copies** | ❌ | ✅ |
| Object creation is **expensive** (DB calls, network) | ✅ (create once) | ✅ (clone instead of new) |
| Need **deep copy vs shallow copy** control | N/A | ✅ |
| **Cache**, **Connection pool manager** | ✅ | ❌ |
| **Report templates**, **Game characters**, **Cell cloning** | ❌ | ✅ |

#### **Code Example Comparison**

```java
// SINGLETON - Expensive resource created once
public class DatabaseConnectionPool {
    private static DatabaseConnectionPool instance;
    private List<Connection> connections;
    
    private DatabaseConnectionPool() {
        // Expensive operation: create 10 connections
        connections = new ArrayList<>();
        for (int i = 0; i < 10; i++) {
            connections.add(createNewConnection());
        }
    }
    
    public static DatabaseConnectionPool getInstance() {
        if (instance == null) {
            instance = new DatabaseConnectionPool();
        }
        return instance;
    }
    
    public Connection getConnection() {
        // return available connection from pool
    }
}

// PROTOTYPE - Clone expensive objects
public class Report implements Cloneable {
    private String title;
    private List<String> sections;
    private byte[] largeData;  // expensive to load
    
    public Report(String title) {
        this.title = title;
        this.sections = new ArrayList<>();
        // Expensive operation: load from database
        this.largeData = loadLargeDataFromDB();
    }
    
    @Override
    public Report clone() {
        try {
            Report cloned = (Report) super.clone();
            // Deep copy for mutable fields
            cloned.sections = new ArrayList<>(this.sections);
            cloned.largeData = this.largeData.clone();
            return cloned;
        } catch (CloneNotSupportedException e) {
            return null;
        }
    }
    
    // Alternative: Copy constructor
    public Report(Report source) {
        this.title = source.title;
        this.sections = new ArrayList<>(source.sections);
        this.largeData = source.largeData.clone();
    }
}

// PROTOTYPE REGISTRY - Manage prototypes
public class ReportRegistry {
    private Map<String, Report> prototypes = new HashMap<>();
    
    public ReportRegistry() {
        // Load once, clone many times
        prototypes.put("sales", new Report("Sales Report"));
        prototypes.put("inventory", new Report("Inventory Report"));
    }
    
    public Report getReport(String type) {
        return prototypes.get(type).clone();
    }
}

// Client code
public class Client {
    public static void main(String[] args) {
        // Singleton - one connection pool for entire app
        DatabaseConnectionPool pool = DatabaseConnectionPool.getInstance();
        
        // Prototype - create 100 reports without DB overhead
        ReportRegistry registry = new ReportRegistry();
        List<Report> reports = new ArrayList<>();
        for (int i = 0; i < 100; i++) {
            reports.add(registry.getReport("sales"));  // Clone instead of new
        }
    }
}
```

####  Decision Tree: Which Pattern to Use?

```
START: Need to create objects?
│
├─ YES → Do you need exactly ONE instance globally?
│        │
│        ├─ YES → Use SINGLETON
│        │
│        └─ NO → Is object creation expensive AND need many similar objects?
│                 │
│                 ├─ YES → Use PROTOTYPE
│                 │
│                 └─ NO → Is the object complex (many parameters)?
│                          │
│                          ├─ YES → Use BUILDER
│                          │
│                          └─ NO → Do you need to hide creation logic?
│                                   │
│                                   ├─ YES → Use FACTORY
│                                   │
│                                   └─ NO → Use constructor directly
│
└─ NO → Don't use creational pattern
```

####  Real-World Example: Combining Patterns

Sometimes patterns **work together**. Here's a practical example:

```java
// Singleton + Factory + Builder together
public class ApplicationContext {
    private static ApplicationContext instance;
    private Map<String, Object> beans = new HashMap<>();
    
    private ApplicationContext() {
        // Initialize beans
        beans.put("userFactory", new UserFactory());
        beans.put("config", new ConfigBuilder()
            .withAppName("MyApp")
            .withMaxUsers(1000)
            .build());
    }
    
    public static ApplicationContext getInstance() {
        if (instance == null) {
            instance = new ApplicationContext();
        }
        return instance;
    }
    
    public Object getBean(String name) {
        return beans.get(name);
    }
}

// Client code - using all patterns
public class Main {
    public static void main(String[] args) {
        // Singleton provides global access
        ApplicationContext context = ApplicationContext.getInstance();
        
        // Factory creates users
        UserFactory factory = (UserFactory) context.getBean("userFactory");
        User user = factory.createUser("john", "john@example.com");
        
        // Builder creates complex config
        Config config = (Config) context.getBean("config");
    }
}
```


| Pattern | Best For | Avoid When |
| :--- | :--- | :--- |
| **Singleton** | Loggers, Config, Caches, Connection pools | You need multiple instances or testability |
| **Factory** | Creating related objects without exposing logic | Object creation is trivial (just `new`) |
| **Builder** | Objects with 4+ parameters, optional fields | Simple objects (2-3 parameters) |
| **Prototype** | Expensive creation, runtime object copying | Objects with circular references or complex deep copies |

