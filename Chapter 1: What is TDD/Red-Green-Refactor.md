### Red-Green-Refactor

| **Step** | **Goal** | **Key Actions** | **Time & Mindset** |
|----------|----------|----------------|---------------------|
| **Think** | Decide which test will **best move your code forward**. | - Analyze progress<br>- Choose the next small test that drives design. | **Take as much time as needed** (hardest for beginners). |
| **Red** | Write a **failing test**. | - Write **≤ 5 lines** of test code.<br>- Run tests → see **test bar turn red**. | **~30 seconds**. Focus on **failing as expected**. |
| **Green** | Write **just enough code to pass** the test. | - Write **≤ 5 lines** of production code.<br>- Can be **hardcoded** if necessary.<br>- Run tests → see **test bar turn green**. | **~30 seconds**. **Don’t worry about purity** yet. |
| **Refactor** | **Improve the code** while keeping tests green. | - Look for duplication, smells.<br>- Make small improvements.<br>- Run tests after each change to ensure they **stay green**. | **Take as much time as needed**.<br>Breathe, reassess, and clean up. |
| **Repeat** | **Continue the cycle** to make steady progress. | - Loop through **Think → Red → Green → Refactor**.<br>- Typically **20–40 cycles per hour**. | **Pace varies**: quick cycles early, slower during refactoring, then speed up again. |



### **Why This Works**

| **Reason** | **Explanation** |
|------------|----------------|
| **Baby Steps & Immediate Feedback** | - Form hypotheses → verify immediately.<br>- Mistakes are caught **within seconds** and only a **few lines back**.<br>- **Finding mistakes** is the costly part—TDD minimizes that. |
| **Constant Design Focus** | - **Think step**: Interface design (what to test next).<br>- **Refactor step**: Code design (how to improve structure).<br>- **Every design decision is instantly validated** by turning it into running code. |
| **Rhythm & Safety** | - Quick cycles → **flow state**.<br>- **Always have passing tests** → confidence to change code. |
| **Empirical Design Feedback** | - Code proves if a design works **within minutes**, not days.<br>- Avoids over-engineering—you evolve design alongside requirements. |



