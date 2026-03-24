
| Component | Description | Key Characteristics |
| :--- | :--- | :--- |
| **Test Case** | The smallest part of a test that encodes a simple path through the software under test. | - Written by the programmer.<br>- Prepares input data and environmental state.<br>- Invokes the software under test.<br>- Verifies expected results. |
| **Assertions** | The mechanism used within a test case to validate expected results. | - Typically provided by the framework.<br>- A framework may also allow for custom assertions. |
| **Test Suite** | A collection of related test cases that share a common framework. | - Allows for reuse of environment setup and cleanup code.<br>- A test runner may execute cases in any order (programmers should not depend on top-to-bottom execution). |
| **Test Fixture** | The environment (or test context) provided for each test case in a suite. | - Configures a known, good runtime environment.<br>- Uses functions to setup state before each test case and cleanup state after each test case.<br>- The test runner executes setup/cleanup functions around each case. |
| **Test Runner** | A program that runs tests and reports the results. | - Often part of the framework.<br>- Can produce human-readable, plain-text output (common default).<br>- May also produce structured output (e.g., JUnit XML) for use by continuous integration systems like Jenkins or Bamboo. |
