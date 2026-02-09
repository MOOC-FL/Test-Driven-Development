#### Three laws of TDD
| **Category** | **Details** |
|--------------|-------------|
| **Law 1** | You are **not allowed to write any production code** unless it is to make a **failing unit test pass**. |
| **Law 2** | You are **not allowed to write more of a unit test** than is sufficient to fail—compilation failures count as failures. |
| **Law 3** | You are **not allowed to write more production code** than is sufficient to pass the **one failing unit test**. |
| **Process Flow** | 1. Write a small unit test (stop as soon as it fails).<br>2. Write minimal production code to make it pass.<br>3. Repeat. |
| **Key Mindset** | Always keep the system **executable**—time between test runs is **seconds to minutes**, never long. |
| **Common Initial Reaction** | “This is stupid!” / “It will slow me down.” / “It breaks my flow.” |
| **Actual Benefits** | - Code **always works** (within the last minute).<br>- **Reduces debugging time** dramatically—revert to last working state instead.<br>- **Builds a large test suite** over time (thousands/year).<br>- Enables **fearless refactoring** and cleaner design.<br>- Tests become **living documentation & design examples**.<br>- **Forces decoupling** and testable architecture by design.<br>- No “big bang” integration risks. |
| **Contrast with Traditional Coding** | Traditional: Write lots of code → integrate → debug.<br>TDD: Write test → write code → test → refactor (continuous cycle). |
| **Long-Term Impact** | Code stays **soft (malleable)**, well-documented via tests, and highly maintainable. |
| **Author’s Experience** | After 30 years of programming, adopting TDD was a profound shift—now cannot imagine coding without it. |
