
### Gang of Four (GoF) Patterns
These are the classic 23 patterns from the book *"Design Patterns: Elements of Reusable Object-Oriented Software."*

| Category | Pattern | Description |
| :--- | :--- | :--- |
| **Creational** | Abstract Factory | Creates families of related objects without specifying concrete classes. |
| | Builder | Constructs complex objects step by step. |
| | Factory Method | Defines an interface for creating an object, but lets subclasses decide which class to instantiate. |
| | Prototype | Creates new objects by cloning an existing instance. |
| | Singleton | Ensures a class has only one instance and provides a global point of access to it. |
| **Structural** | Adapter | Allows incompatible interfaces to work together (a wrapper). |
| | Bridge | Separates an abstraction from its implementation so they can vary independently. |
| | Composite | Composes objects into tree structures to represent part-whole hierarchies. |
| | Decorator | Adds responsibilities to objects dynamically (wrappers). |
| | Facade | Provides a simplified interface to a complex subsystem. |
| | Flyweight | Minimizes memory usage by sharing as much data as possible with similar objects. |
| | Proxy | Provides a surrogate or placeholder for another object to control access to it. |
| **Behavioral** | Chain of Responsibility | Passes a request along a chain of handlers. |
| | Command | Encapsulates a request as an object, allowing parameterization and queuing. |
| | Interpreter | Defines a grammatical representation for a language and an interpreter. |
| | Iterator | Provides a way to access elements of a collection sequentially. |
| | Mediator | Defines an object that encapsulates how a set of objects interact. |
| | Memento | Captures and externalizes an object's internal state without violating encapsulation. |
| | Observer | Defines a one-to-many dependency so that when one object changes state, all dependents are notified. |
| | State | Allows an object to alter its behavior when its internal state changes. |
| | Strategy | Defines a family of algorithms and makes them interchangeable. |
| | Template Method | Defines the skeleton of an algorithm, deferring some steps to subclasses. |
| | Visitor | Represents an operation to be performed on elements of an object structure. |

---

### Concurrency Patterns
These patterns handle multi-threading, asynchronous processing, and resource management in concurrent environments.

| Pattern | Description |
| :--- | :--- |
| **Active Object** | Decouples method execution from method invocation to enhance concurrency. |
| **Balking** | Executes an action only if an object is in a certain state; otherwise, it returns immediately. |
| **Binding Properties** | Combines observer pattern with data binding to synchronize properties. |
| **Double-checked locking** | Reduces the overhead of acquiring a lock by testing the locking criterion first. |
| **Event-based asynchronous** | Addresses asynchronous operations using events. |
| **Guarded suspension** | Manages operations that require a lock to be in a specific state before executing. |
| **Join** | Provides synchronization mechanisms similar to the `join()` method in threads. |
| **Lock** | Ensures mutual exclusion in a concurrent system. |
| **Monitor** | A synchronization construct that allows threads to have mutual exclusion and condition waits. |
| **Proactor** | Demultiplexes and dispatches completion events for asynchronous operations. |
| **Reactor** | Demultiplexes and dispatches service requests based on synchronous events. |
| **Read–write lock** | Allows concurrent read access but exclusive write access. |
| **Scheduler** | Explicitly controls the order of thread execution. |
| **Scheduled-task pattern** | Schedules tasks to be performed at specific times or intervals. |
| **Semaphore** | Controls access to a common resource via a counter. |
| **Thread pool** | Manages a pool of reusable threads to reduce overhead. |
| **Thread-local storage** | Stores variables locally to a thread to avoid sharing. |

---

### Architectural Patterns
These patterns define the fundamental structure and organization of software systems.

| Pattern | Description |
| :--- | :--- |
| **Front Controller** | Centralizes request handling (common in web frameworks). |
| **Interceptor** | Intercepts calls to add cross-cutting concerns (e.g., logging). |
| **MVC / MVP / MVVM** | Separates user interface into Model, View, and Controller/Presenter/ViewModel. |
| **ADR** | Active Document Representation (similar to REST). |
| **ECB** | Entity-Control-Boundary (a variation of MVC). |
| **n-tier** | Separates functionality into distinct layers (presentation, business, data). |
| **Specification** | Encapsulates business rules in combinable objects. |
| **Publish–subscribe** | Messaging pattern where senders (publishers) do not send messages directly to receivers. |
| **Naked objects** | Builds UIs directly from domain object definitions. |
| **Service locator** | Abstracts the acquisition of services (an alternative to Dependency Injection). |
| **Active record** | Wraps a database row in an object, embedding data access logic. |
| **Identity map** | Ensures each object is loaded once by keeping a map of loaded objects. |
| **Data access object (DAO)** | Abstracts and encapsulates all access to the data source. |
| **Data transfer object (DTO)** | Carries data between processes to reduce method calls. |
| **Inversion of control (IoC)** | Framework controls the flow of the program and calls custom code. |
| **Model 2** | A variation of MVC for web applications (Servlet/JSP architecture). |
| **Broker** | Coordinates communication between distributed components. |

---

### Other Patterns & Principles
These include idioms, principles, and patterns from other classic sources (like *Patterns of Enterprise Application Architecture* and *POSA*).

| Pattern / Principle | Description |
| :--- | :--- |
| **Blackboard** | AI pattern where specialized subsystems collaborate to solve a complex problem. |
| **Business delegate** | Reduces coupling between presentation and business tiers. |
| **Composite entity** | Represents a graph of objects in an entity EJB. |
| **Composition over inheritance** | Principle favoring object composition over class inheritance. |
| **Dependency injection** | A form of IoC where objects receive their dependencies externally. |
| **Guard clause** | Uses early returns to simplify error handling. |
| **Intercepting filter** | Pre/post-processes requests (common in web applications). |
| **Lazy loading** | Defers initialization of an object until it is needed. |
| **Mock object** | Simulates real objects for testing purposes. |
| **Null object** | Provides a do-nothing object to avoid null references. |
| **Object pool** | Reuses expensive objects to improve performance. |
| **Servant** | Provides common functionality for a group of classes. |
| **Twin** | Allows multiple inheritance simulation in languages that don't support it. |
| **Type tunnel** | Circumvents the type system to pass data (e.g., using a generic map). |
| **Method chaining** | Returns the current object to allow multiple method calls in a single statement (fluent interface). |
| **Delegation** | A class passes a request to another class to handle it. |

---

### Notable People & Communities

| Category | Name | Contribution |
| :--- | :--- | :--- |
| **Key People** | **Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides** | The "Gang of Four" (GoF) authors. |
| | **Christopher Alexander** | Inspired software patterns with his work on architectural patterns ( *A Pattern Language* ). |
| | **Grady Booch** | Unified Modeling Language (UML) and object-oriented design. |
| | **Kent Beck** | Extreme Programming (XP), Test-Driven Development (TDD), JUnit. |
| | **Ward Cunningham** | Wiki inventor, pioneered the *Portland Pattern Repository*. |
| | **Martin Fowler** | Author of *Refactoring* and *Patterns of Enterprise Application Architecture*. |
| | **Robert C. Martin (Uncle Bob)** | SOLID principles, Clean Code. |
| | **Douglas Schmidt** | Concurrency and distributed patterns (ACE framework). |
| | **Linda Rising** | Author of *The Pattern Almanac* and patterns community leader. |
| **Communities** | **The Hillside Group** | Non-profit organization promoting pattern use. |
| | **Portland Pattern Repository** | The first wiki, dedicated to pattern discovery. |
