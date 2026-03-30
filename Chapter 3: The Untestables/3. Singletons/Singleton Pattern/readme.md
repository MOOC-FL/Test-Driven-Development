#### Singleton Pattern
- Singleton pattern enables an application to create the one and only one instance of a Java class per JVM, in all possible scenarios.
> The singleton pattern has been debated long enough in the Java community regarding possible approaches to make any class singleton. Still, you will find people not satisfied with any solution you give.
##### 1. Singleton using Eager Initialization
- This is a solution where an instance of a class is created much before it is actually required. It is mostly done on system startup.
- **In an eager initialization singleton pattern, the singleton instance is created irrespective of whether any other class actually asked for its instance or not.**
-  This is done usually using a static variable as these get initialized at the application startup, always.

