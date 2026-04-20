#### test && commit || revert (TCR)
- TCR is this crazy idea that every time that the tests pass, the code is committed automatically, and if the tests fail, the changes are reverted automatically.

> Try it and see what comes out of it. If nothing else, it can be a good exercise.

<img src="https://github.com/MOOC-FL/Media/blob/main/Test%20Driven%20Development/tdr.webp" alt="">
 </img>

- As part of Limbo on the Cheap, we invented a new programming workflow. I introduced “test && commit”, where every time the tests run correctly the code is committed. Oddmund Strømme, the first programmer I’ve found as obsessed with symmetry as I am, suggested that if the tests failed the code should be reverted. I hated the idea so I had to try it.
- The full command then is “test && commit || revert”. If the tests fail, then the code goes back to the state where the tests last passed.

- I’m not arguing for “test && commit || revert” nor even describing its trade-offs. I’m saying it seems like it shouldn’t work at all, it does, and I hope you try it (if you’re the sort of person who just tries new programming workflows).

#### But,but
- I thought “test && commit || revert” wouldn’t work. How could you make progress if the tests always have to work? Don’t you make mistakes sometimes? What if you write a bunch of code and it just gets wiped out? Won’t you get frustrated?

- The surprising answers are yes, you can actually write code this way. Yes, you make mistakes but actually it’s kind of nice to have incorrect code instantly deleted (counteracts Sunk Cost Fallacy). If you don’t want a bunch of code wiped out then don’t write a bunch of code between greens. Yes it can be frustrating to see code disappear but you almost always find a better, surer, more incremental way of doing the same thing.

#### Increments
- Limbo scales technical collaboration by propagating tiny changes instantly. TDD won’t work in Limbo because each of a hundred thousand programmers can’t saddle all the other programmers with even one failed test. If thousands of tests are failing, then nobody knows what’s going on. The tests all have to pass before changes can propagate.

> “Test && commit || revert” keeps all tests green. At the same time you can’t solve big problems in one small step, so what are the steps you take when using “test && commit || revert”?

- [ ] Add test and pass. The goal here is to shorten the time between idea and some kind of test passing in some kind of way. Even writing part of the test is fine. Cheating is encouraged, as long as you don’t stop there.
- [ ] Better passing. Once you have a test passing, replace the fake implementation with a real implementation, a little at a time if necessary.
- [ ] Make hard changes easy. Rather than change four places in the code, introduce a helper function (a little at a time, natch) so you can change one place.
> Violating any of these strategies results in the changes being instantly reverted, so you don’t have to worry about enforcing small diffs.

#### Try it
I don’t suggest you try “test && commit || revert” because it’s better than what you do now. I suggest you try it because:

- [ ] it`s Cheap
- [ ] You’re bound to learn something.

Pick a little project, even Fibonacci, and start developing. See how small you can make your changes. Some of those will still fail. See how to make those changes even smaller. Pay attention to the little bits of workflow you use frequently. See what you can apply to your “real” work.


  
