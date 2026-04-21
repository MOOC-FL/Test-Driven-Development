#### Code Coverage
- A study from 2014 found that 58% of catastrophic failures were caused by "trivial mistakes or can be exposed by statement coverage testing." With TDD you'll get such coverage out of the box, but in non-TDD'ed codebases you can't trust that everything has been covered.
- `Code coverage tools` can be useful in finding untested areas, but not all of them can tell whether the code is well tested.
    1. **Line/statement coverage** says whether a line was executed by a test. (You could have 100% line coverage even if the tests have zero assertions)
    2. **Branch/edge/condition coverage** also makes a distinction between partially executed lines. For example in `a = b() && c(), if b()` returns false then `c() `is never executed. Line coverage would say the line was 100% covered, but branch coverage would say it was 50% covered. (You could have 100% branch coverage even if the tests have zero assertions.)
    3. **Mutation coverage** introduces bugs into your code and alarms if no test noticed them. It'll actually test your tests. For a code like `a = b() && c()`, it could try mutations `a = b() || c(), a = b() == c(), a = b() != c(), a = !b() && c(), a = true && c()`, `a = false && c()` and so on.
       >  There can be some false warnings, so going through the coverage report takes more time, but refactoring the code to avoid the false warnings can sometimes improve code quality.
       - Even when the mutation coverage tool is smart about which tests to run for each mutation, it's typically an order of magnitude slower than running the tests normally: if the tests normally run in 1 second, measuring mutation coverage might take 1 minute.
       - When writing tests for legacy code, code coverage can be helpful. See which lines are not covered and for each conditional, write test cases that cause the code to take both branches.





 


