### What is TDD ?
- The philosophy of this course material is that if something has been written online, there is no need to repeat it here. Instead, we just link to it. The recommended reading links contain additional information which makes the summaries in this course material more understandable. The inline links, on the other hand, just explain terms and provide sources.
- A study from 2017 found that only 12% of developers who claimed to do TDD, did actually follow it. Since there is such semantic diffusion about TDD, let's start with a definition:
  1. Write a list of the test scenarios you want to cover
  2. Turn exactly one item on the list into an actual, concrete, runnable test
  3. Change the code to make the test (& all previous tests) pass (adding items to the list as you discover them)
  4. Optionally refactor to improve the implementation design
  5. Until the list is empty, go back to #2
#### Three laws of TDD
- TDD can also be defined in terms of these three rules:
1. You shall not write any production code, unless required by a failing unit test.
2. You shall not write more of a unit test, than is required to fail (assertion failure/program crash/compile error).
3. You shall not write more production code, than is sufficient to make the one failing unit test pass.
#### Red, Green, Refactor
- Another way to describe TDD is the following cycle of three phases. Every few minutes, in order:
 1. RED:
      -  Write a failing test. Predict (mentally or out loud) how the test should fail. Run the test. See it fail. If it failed in an unexpected way, check your assumptions. Improve the failure's readability.
 2. GREEN:
      - Make the test pass. ASAP. Commit any sins necessary. Hard-coded values. If statements. **Fake it until you make it**.
 3. REFRACTOR:
      - Improve the design of the code, without changing its behavior. Atone for your sins. Remove duplication. Improve names. Minimal code which passes the current tests. Make it look as if you knew all along what you were doing.
> Repeat until there are no more tests to write or until bored.





