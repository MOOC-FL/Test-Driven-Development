#### Test doubles
- If the `SUT (system under test)` is not a pure function and it's hard to test together with the real objects, its dependencies can be replaced with test doubles. The dependencies can be provided as method or constructor arguments (aka dependency injection).
- There are five main categories of test doubles:
    1. **Dummy** is a placeholder to make the code compile, but doesn't affect the SUT.
    2. **Stub** returns data to the SUT e.g. using hard-coded method return values.
    3. **Spy** records how the SUT calls the spy, so that the test can afterwards assert on the recorded data.
    4. **Mock** contains pre-recorded expectations on how the SUT should call it, and will itself automatically verify the expectations. Requires a mocking framework.
    5. **Fake** is a simplified implementation of a dependency, not appropriate for production use, e.g. persistence layer based on a hashmap.
> Only mock types you own.
Here is the information organized into a table:

| Category | Description | Key Characteristics | Verification Style |
| :--- | :--- | :--- | :--- |
| **Dummy** | A placeholder used to make the code compile, but does not affect the System Under Test (SUT). | - Minimal implementation (often `null` or a simple no-op).<br>- Never actually used during the test.<br>- Satisfies parameter requirements without contributing to behavior. | None |
| **Stub** | Provides predetermined data to the SUT, typically through hard-coded method return values. | - Returns canned responses.<br>- Does not record how it was called.<br>- Focuses on providing input to the SUT. | State verification (SUT's state after using the stub) |
| **Spy** | Records how the SUT interacts with it, allowing the test to perform assertions on the recorded data afterward. | - Captures method calls, arguments, and call counts.<br>- Verification happens after the test executes.<br>- Provides visibility into SUT behavior. | Behavior verification (assertions on recorded interactions) |
| **Mock** | Contains pre-recorded expectations about how the SUT should call it, and automatically verifies those expectations. | - Expectations are set before the test runs.<br>- Self-verifying (fails automatically if expectations aren't met).<br>- Typically requires a mocking framework (e.g., Mockito, Jest). | Behavior verification (expectations verified by the mock itself) |
| **Fake** | A simplified, working implementation of a dependency that is not suitable for production use. | - Provides actual behavior, not just canned responses.<br>- Example: an in-memory database using a `HashMap` instead of a real database.<br>- Lightweight and fast for testing. | State verification (SUT interacts with a real—but simplified—implementation) |


#### Key Distinction: Mocks vs. Spies

| Aspect | Mock | Spy |
| :--- | :--- | :--- |
| **Expectations** | Set before the test (expect-call-verify) | Set after the test (call-record-verify) |
| **Verification** | Automatic (fails immediately if expectations not met) | Manual (test explicitly asserts on recorded data) |
| **Framework** | Requires a mocking framework | Can be implemented manually or with framework support |


#### Important Principle

> **"Only mock types you own."**

This guidance means:
- **You own** = types you control (your own interfaces, classes, abstractions)
- **You don't own** = third-party libraries, system APIs, external services

**Why?**
- Mocking external types creates tight coupling to implementation details you don't control
- When the external library changes, your mocks may become invalid or misleading
- Better to create your own thin wrapper/adapter around external dependencies, then mock your own abstraction








