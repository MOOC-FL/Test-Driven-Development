#### How to make any code testable
- In general there are two options, the first one being simpler:
Here is the content organized into a table, with an explanation of each technique for handling untestable code:

| Technique | Description | Before | After | Key Implementation Notes |
| :--- | :--- | :--- | :--- | :--- |
| **1. Parameter Injection** | Pass the untestable dependency into the function as a parameter, allowing the caller (or test) to supply a controlled version. | `fn():`<br>&nbsp;&nbsp;`...`<br>&nbsp;&nbsp;`☠️☠️☠️`<br>&nbsp;&nbsp;`...` | `fn(something):`<br>&nbsp;&nbsp;`...`<br>&nbsp;&nbsp;`something`<br>&nbsp;&nbsp;`...` | The untestable element becomes an explicit input. In tests, you can pass a value object, stub, or mock instead of the real dependency. |
| **2. Extract and Override** | Extract the untestable code into a separate method, then override that method in a test subclass to replace the behavior. | `fn():`<br>&nbsp;&nbsp;`...`<br>&nbsp;&nbsp;`☠️☠️☠️`<br>&nbsp;&nbsp;`...` | `fn():`<br>&nbsp;&nbsp;`...`<br>&nbsp;&nbsp;`something()`<br>&nbsp;&nbsp;`...`<br><br>`something():`<br>&nbsp;&nbsp;`☠️☠️☠️` | - Relies on inheritance (object-oriented languages).<br>- Tests subclass the original class and override `something()` to return a test double or controlled value.<br>- In **functional languages**, the same principle applies by extracting to a function and passing that function as a parameter (higher-order function) or using dynamic binding. |


Both techniques aim to solve the same problem: **isolating untestable code** (e.g., code that depends on external services, random number generators, system time, file I/O, or global state) so that the surrounding logic can be tested in isolation.

#### Technique 1: Parameter Injection
- **How it works**: Instead of hard-coding the untestable behavior inside the function, you make it an explicit parameter. The function becomes a pure function with respect to that input—it simply uses whatever is passed in.
- **Testability benefit**: In production, you pass the real dependency (e.g., an API client, `Math.random`, `new Date()`). In tests, you pass a predictable substitute (e.g., a fixed value, a stub, or a mock) so you can verify behavior deterministically.
- **Trade-off**: This can make the function signature longer, especially if many dependencies exist. However, it maximizes clarity and avoids hidden dependencies.

#### Technique 2: Extract and Override
- **How it works**: The untestable code is isolated into its own method. The original method calls this new method. In tests, you create a subclass that overrides the extracted method to return a controllable value or a test double.
- **Testability benefit**: The production code's public interface remains unchanged. The override happens only in the test context, preserving the original API.
- **Trade-off**: Requires inheritance, which may not be suitable in all designs (e.g., final classes, functional paradigms). In functional languages, passing the extracted function as a parameter achieves the same goal with higher-order functions, combining the clarity of parameter injection with the flexibility of late binding.

#### When to Use Which
- **Parameter Injection** is often preferred for new code or when you want to make dependencies explicit and improve overall design (Dependency Injection principle).
- **Extract and Override** is useful when you need to test legacy code quickly without modifying the public API, or when adding parameters would cause widespread changes across many callers.
> Tests can then replace the untestable thing with a value object or a test double.

* In a functional language without inheritance, you could extract the untestable code to a function and pass in the function as a parameter, or use dynamic binding.
 
