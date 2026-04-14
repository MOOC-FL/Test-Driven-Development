#### Continuous delivery
- **Continuous Integration (CI)** is a practice where all team members merge their code changes, many times per day, into the same main branch in version control.
- Changes to the main branch in turn trigger building the project and running all tests on a shared computer. This helps reduce the risk and magnitude of merge problems, and ensures that the code works on more than the original programmer's machine.
- Continuous Integration started as an Extreme Programming (XP) practice in 1997. According to the XP principle of taking what works and turning it to eleven, in 2010
- **Continuous Delivery (CD)** improved on CI by automating the last mile from build to deployment. Some big internet companies deploy to production normally hundreds of times per day.
- Because each deployment contains only a few new changes, it reduces the risk and magnitude of production failures. Most importantly, it enables faster feedback from real users.
- A core tenet of Continuous Delivery is that at a moment's notice, the current development version of the software can be deployed to production, and nobody will even bat an eye.
> On top of good CI practices, CD requires comprehensive tests on multiple levels so that if all tests pass, you can trust that the software will work in production.
- Incomplete features must also be designed to be deployable to production, for example by hiding them with feature toggles until they are complete.

> Continuous Delivery may include a human decision on when to deploy to production. If that decision is automated and every build which passes its tests is deployed to production automatically, then it's called Continuous Deployment.

