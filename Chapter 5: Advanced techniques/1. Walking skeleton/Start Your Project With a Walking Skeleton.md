#### Start Your Project With a Walking Skeleton
- In order to reduce risk on large software development projects, you need to figure out all the big unknowns as early as possible. The best way to do this is to have a real end-to-end test with no stubs against a system that’s deployed in production.
- You could do this by building a so-called **Walking Skeleton** , a term coined by Alistair Cockburn.
> He defined it as a tiny implementation of the system that performs a small end-to-end function.
- It need not use the final architecture, but it should link together the main architectural components.
- The architecture and the functionality can then evolve in parallel. A similar concept called “Tracer Bullets” was introduced in The Pragmatic Programmer.
> A Walking Skeleton is a tiny implementation of the system that performs a small end-to-end function. It need not use the final architecture, but it should link together the main architectural components. The architecture and the functionality can then evolve in parallel.

-  If the system needs to talk to one or more datastores then the walking skeleton should perform a simple query against each of them, as well as simple requests against any external or internal service.
-   If it needs to output something to the screen, insert an item to a queue or create a file, you need to exercise these in the simplest possible way.
-    As part of building it, you should write your deployment and build scripts, set up the project, including its tests, and make sure all the **automations** are in place — such as `Continuous Integration`,` monitoring`, and `exception handling`.
-  the focus is the infrastructure, not the features. Only after you have your walking skeleton should you write your first automated acceptance tests.
-  This is only the skeleton of the application, but the parts are connected and the skeleton does walk in the sense that it exercises all the system’s parts as you currently understand them. Because of this partial understanding, you must make the walking skeleton minimal. But it’s not a prototype and not a proof of concept — it’s production code, so you should definitely write tests as you work on it.

#### High Risk First
- 
