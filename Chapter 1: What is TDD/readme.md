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
> If the current design makes it difficult to make a new test pass, consider commenting out the new test and refactoring first. "Make the change easy (warning: this may be hard), then make the easy change."

#### Why run a test, when you know it'll fail?
- A key part of the red phase is to run the new test and see it fail. That's where the name of the phase comes from; test runners show failing tests typically in red.
- A second before running the test, you should predict how the test will fail. If the test fails differently from how you expected, you should stop for a moment and think. Is the code working differently from how you thought? Is the test not actually testing the thing it was meant to test? Likewise, if the test passed when you expected it to fail. Is the feature already implemented? Does the test have a bug, and it'll never fail?
- This is also a good opportunity to improve the readability of the failure message. That will make investigating future test failures easier.
- The red phase is an answer to the age-old internet debate of "but who will test the tests?" Good tests fail when the production code has a problem. Running a test before the production code has been implemented is the least you can do to ensure the test's correctness.
#### Triangulation
- "As the tests get more specific, the code gets more generic." 
- In the green phase, it's important to not write any more code than is required to pass the test. This means at first using hard-coded return values and naive implementations. If we added behavior without first specifying it with a test, then we would be adding unspecified behavior.
- It is called triangulation when we write tests to expose the deficiencies of still naive production code. By making those tests pass, the production code approaches a completely tested solution which will handle all edge cases.

#### Test list
- To stay focused on the current test and phase, it's helpful to maintain a test list (on paper, a text file or as TODO comments in tests).

- Whenever you come up with an idea for a new test (e.g. a new feature or an edge case that needs to be covered), add it to your test list. Likewise for things that need refactoring. Then when you are done with the current feature, you can go through the list and handle them.
#### What it looks like
- [ ] No more code is added than is required to pass the tests. At first the implementation is trivial.
- [ ] The code is refactored early and often.
- [ ] If the current design makes passing the next test hard, the test is commented out and the code is first refactored toward a better design.
- [ ] As more tests are added to cover specific edge cases, the code grows toward a generic algorithm which handles them all.

#### Direct and indirect effects of TDD
- Direct effects, if just following the three laws of TDD:
1. Guarantees code coverage
2. Amplifies the pain caused by bad code
- Indirect effects, if the programmer is skilled enough:
1. Enables changing the code without breaking it
2. Improves the quality of the code
#### What tests to write?
- Ask yourself: What is the next most important thing, which the system does not yet do?
- Stop thinking about HOW your software works. Instead, specify WHAT your software does from the point of view of its user.
- When writing the first test, it helps to start small and simplify the problem: Where to start writing a sudoku solver? Solving a 1×1 sudoku.
#### Test names should be sentences
- The test names should be sentences which describe what the system should do - its behavior. Think of them as a specification of what your software does.

- Thought exercise: All production and test code has disappeared. The only thing remaining is the test names. Can someone reimplement the system, so that it will do pretty much the same things as before?

- Corollary: All test names have disappeared. Can someone read the test code and understand what behavior it is specifying, so that they can write a test name which says pretty much the same as it said before?

- When a test fails, look at the name of the test - the behavior that it defines. There are three possibilities:

1. The system has a bug. Fix the implementation.
2. The behavior is still needed, but the test needs updating. Change the test. Think of how to decouple the test from unrelated behaviors, to have fewer unwanted test failures.
3. The behavior is no more needed. Delete the test.

#### Is TDD testing?
- The tests written as part of TDD do help ensure a level of basic correctness in the software, but it's still a development technique - that's what the last D in TDD stands for. The role of the tests in TDD is to support building the software, whereas the role of tests in software testing is to break the software. Think of scaffolding instead of a wrecking ball.

- TDD's tests can be thought of as a specification of the system's behavior, or as small examples of how the code works. In the software development life cycle, the TDD mindset focuses more on requirements and design than on verification, though the verification side is also important to support refactoring and adding new features.

