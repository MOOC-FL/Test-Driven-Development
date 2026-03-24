#### Test doubles
- If the `SUT (system under test)` is not a pure function and it's hard to test together with the real objects, its dependencies can be replaced with test doubles. The dependencies can be provided as method or constructor arguments (aka dependency injection).
- There are five main categories of test doubles:
    1. **Dummy** is a placeholder to make the code compile, but doesn't affect the SUT.
    2. **Stub** returns data to the SUT e.g. using hard-coded method return values.
    3. **Spy** records how the SUT calls the spy, so that the test can afterwards assert on the recorded data.
    4. **Mock** contains pre-recorded expectations on how the SUT should call it, and will itself automatically verify the expectations. Requires a mocking framework.
    5. **Fake** is a simplified implementation of a dependency, not appropriate for production use, e.g. persistence layer based on a hashmap.
> Only mock types you own.







