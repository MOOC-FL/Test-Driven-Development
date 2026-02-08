#### Canon TDD
- What follows is NOT how you should do TDD. Take responsibility for the quality of your work however you choose, as long as you actually take responsibility.
- What follows is my response to “TDD suckz dude because <something that isn’t TDD>”, a frequent example being, “…because I hate writing all the tests before I write any code.” If you’re going to critique something, critique the actual thing.
1. Write a list of the test scenarios you want to cover
2. Turn exactly one item on the list into an actual, concrete, runnable test
3. Change the code to make the test (& all previous tests) pass (adding items to the list as you discover them)
4. Optionally refactor to improve the implementation design
5. Until the list is empty, go back to #2

- In my recent round of TDD clarifications, one surprising experience is that folks out there don’t agree on the definition of TDD. I made it as clear as possible in my book. I thought it was clear. Nope. My bad.
- If you’re doing something different than the following workflow & it works for you, congratulations! It’s not Canon TDD, but who cares? There’s no gold star for following these steps exactly.
- If you plan on critiquing TDD & you’re not critiquing the following workflow, then you’re critiquing a strawman. That’s my point in spending some of the precious remaining seconds of my life writing this—forestalling strawmen. I’m not telling you how to program. I’m not charging for gold stars.
- I try to be positive & constructive as a habit. By necessity this post is going to be concise & negative. “People get this wrong. Here’s the actual thing.” I don’t mean to critique someone’s workflow, but sharpen their understanding of Canon TDD.

#### Overview
- Test-driven development is a programming workflow. A programmer needs to change the behavior of a system (which may be empty just now). TDD is intended to help the programmer create a new state of the system where:
1. Everything that used to work still works.
2. The new behavior works as expected.
3. The system is ready for the next change.
4. The programmer & their colleagues feel confident in the above points.
#### Interface/Implementation Split
- The first misunderstanding is that folks seem to lump all design together. There are two flavors:
  - How a particular piece of behavior is invoked.
  - How the system implements that behavior.
- (When I was in school we called these logical & physical design & were told never to mix the two but nobody ever explained how. I had to figure that out later.)

#### The Steps











