Here are the **recommended readings** from Chapter 1 of the TDD MOOC

| **Topic** | **Recommended Reading** | **Link/Description** |
|-----------|--------------------------|----------------------|
| **Definition of TDD** | **Canon TDD** | A definition from the inventor of TDD, plus typical mistakes. |
| **Three Laws of TDD** | **The Three Laws of TDD** | Another definition of TDD via three strict rules. |
| **Red-Green-Refactor Cycle** | **Red-Green-Refactor** | Explanation of the three-phase TDD cycle. |
| **TDD Cycles** | **The Cycles of TDD** | Covers iterative cycles from seconds to hours. |
| **Common Mistakes** | **TDD Process Smells** | How TDD can be done wrong. |
| **Minimal Code Principle** | **Why Write the Minimum Code to Pass the Test?** | Importance of small iterative steps. |
| **Triangulation** | **Getting Stuck While Doing TDD. Part 3: Triangulation to the Rescue!** | What triangulation is and an example. |
| **Implementation Order** | **TDD Guided by ZOMBIES** | Acronym for order of implementation. |
| **Direct/Indirect Effects** | **Direct and Indirect Effects of TDD** | How TDD works as a design feedback mechanism. |
| **Behavior-Driven Development** | **Introducing BDD** | Original BDD article—naming tests as specifications. |
| **BDD Guide** | **An Ultimate Guide To BDD** | Comprehensive BDD resource. |
| **Testing vs. TDD** | **Interlude: Basic Correctness** | Discussion between TDD and software testing experts. |

---

### **Additional Notes from Chapter 1**:

- **TDD Process**:  
  1. Write a list of test scenarios.  
  2. Turn **one** item into a runnable test.  
  3. Change code to pass the test (and all previous tests).  
  4. Optionally refactor.  
  5. Repeat until the list is empty.

- **Red Phase**:  
  Run the test **knowing it will fail**—predict how it fails. If failure differs from expectation, stop and think. Improves test reliability and failure messages.

- **Green Phase**:  
  Write **minimum code** to pass—hardcode if needed. “Fake it till you make it.”

- **Refactor Phase**:  
  Improve design **without changing behavior**. Remove duplication, improve names.

- **Test List**:  
  Keep a list (paper/text/TODO comments) of test ideas and refactorings to stay focused.

- **Test Names**:  
  Should be **sentences** describing behavior—imagine reimplementing the system from test names alone.

- **Is TDD Testing?**:  
  TDD is a **development technique**—tests act as **scaffolding**, not a wrecking ball. Focus is on **specification and design**, not just verification.
