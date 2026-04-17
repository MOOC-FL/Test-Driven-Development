#### Fixing bugs test-first
- [ ] An excellent time and place for improving legacy code's test coverage is when there is a bug to fix.
- [ ] First write a test which reproduces the bug,
- [ ]  and then fix it.
> Having a test which reproduces the bug makes it easier to fix it, and once the test is in place, you can be sure that the same bug will not reappear.

##### In the larger scope,
- this slowly improves the codebase as a whole.
-  Bugs tend to cluster together,
-   so by writing tests for them and refactoring those areas of the code, it reduces the risk of other bugs in the same area.

> Also when adding new features, it's best to do it test-first.
-  can write the new code as an isolated component using TDD, and then change the legacy code to just delegate to the new code.
-   Little by little you grow oases of safe areas that are easy to work with, and those will be in the areas of the codebase which change most often.
