#### Small, safe steps
- To do a refactoring with far-reaching consequences, you have two options:
   - **One big change:** Carefully analyze the whole codebase to figure out every place that must be changed, and then change all those places at the same time. It may take hours to read the codebase and you could still miss some side-effect. When tests break after your changes, the problem could be anywhere in the codebase.
   - **Many small changes:**  Plan a series of changes, each of which can be proven through local reasoning to not change behavior. Start the refactoring from one place and propagate it in tiny increments by making mechanical changes which require very little thinking. There could be 10 or 100 times more steps, but each of them takes just a couple seconds. When tests break after your changes, the problem should be near the line you changed 5 seconds ago.
- Many small changes is faster than one big change.
- When you refactor, don't change behavior. When you change behavior, don't refactor. Maintain three points of contact like a mountain climber. 

#### Refactoring hell
- If it's been more than a few minutes since the tests last passed, `git reset --hard` and try again using smaller steps.
- (Your IDE's local history may also show when all tests last passed, so you can revert to that point in time.)

