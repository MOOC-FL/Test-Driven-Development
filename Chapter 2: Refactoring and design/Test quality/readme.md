#### Test quality
- [ ] Tests should be sensitive to behavior changes and insensitive to structure changes.
- [ ] Each test should test only one thing.
- [ ] Each bug should cause only one test to fail.
- [ ] From the pattern of failing tests, it should be possible to guess in which function or line the problem is.
- [ ] If some code can be commented out and no test fails, the code should be dead.
- [ ] In five seconds you will have forgotten over half of your working memory. Make the tests so fast that you won't forget what you were thinking.

<p align="center">
  <img src="https://github.com/MOOC-FL/Media/blob/main/Test%20Driven%20Development/working-memory-decay.png" alt="">
</p>

> How quickly working memory decays when you think of something else.

##### Test smells
> Like there are many code smells, there are also test smells. Here are a couple to look out for:

- **Many asserts per test:** Normally tests are structured in the Arrange-Act-Assert/Given-When-Then/Hoare Triple format. But if they are instead *Arrange-Act-Assert-Act-Assert-Act*...,that usually indicates that a test is lacking focus and testing many different things (making the test's purpose harder to decipher),
  > or that it's testing how the system does things instead of testing what the system does (making refactoring harder).
    -  Depending on the testing framework, earlier test failures may also mask later test failures, making it harder to know why the test failed. Instead, write many small, focused tests.
-  **Complex test setup:** If the arrange part of a test is long, requiring the careful arrangement of many collaborators to get the system into the desired initial state for the test, it may indicate design problems in the code. Lots of constructor arguments is a similar smell (which is why dependency injection frameworks are best avoided - they make it too easy to add dependencies). Instead, try to think of a design which eliminates some of the dependencies.


