#### Singleton Pattern
- Singleton pattern enables an application to create the one and only one instance of a Java class per JVM, in all possible scenarios.
> The singleton pattern has been debated long enough in the Java community regarding possible approaches to make any class singleton. Still, you will find people not satisfied with any solution you give.
##### 1. Singleton using Eager Initialization
- This is a solution where an instance of a class is created much before it is actually required. It is mostly done on system startup.
- **In an eager initialization singleton pattern, the singleton instance is created irrespective of whether any other class actually asked for its instance or not.**
-  This is done usually using a `static` variable as these get initialized at the application startup, always.
```java
public class EagerSingleton {

	private static volatile EagerSingleton instance = new EagerSingleton();

	// private constructor
	private EagerSingleton() {
	}

	public static EagerSingleton getInstance() {
	return instance;
	}
}
```
> The above method works fine, but it has one drawback. The instance is created irrespective of it is required in runtime or not. If the instance is not a big object and you can live with it being unused, this is the best approach.


##### 1. Singleton using Lazy Initialization
