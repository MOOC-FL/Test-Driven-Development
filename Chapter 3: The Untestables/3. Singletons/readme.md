#### Singletons
- Singleton is an anti-pattern. It is the object-oriented equivalent of a global variable. Instead, just create one.
#### Singletons Pattern
- In object-oriented programming, the singleton pattern is a software design pattern that restricts the instantiation of a class to a singular instance. It is one of the well-known "Gang of Four" design patterns, which describe how to solve recurring problems in object-oriented software. The pattern is useful when exactly one object is needed to coordinate actions across a system.
- More specifically, the singleton pattern allows classes to:
1. Ensure they only have one instance
2. Provide easy access to that instance
3. Control their instantiation (for example, hiding the constructors of a class)
> The term comes from the mathematical concept of a singleton.

#### Common uses
- Singletons are often preferred to global variables because they do not pollute the global namespace (or their containing namespace). Additionally, they permit lazy allocation and initialization, whereas global variables in many languages will always consume resources.
- The singleton pattern can also be used as a basis for other design patterns, such as the `abstract factory`, `factory method`, `builder` and `prototype` patterns. `Facade` objects are also often singletons because only one facade object is required.
- **Logging** is a common real-world use case for singletons, because all objects that wish to log messages require a uniform point of access and conceptually write to a single source.
