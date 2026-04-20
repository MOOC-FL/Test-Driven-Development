#### Test-after patterns
- After you have practiced TDD for over 10 years, and writing tests and testable code is as easy as breathing, there may be times when writing tests after the code is faster.

- Testing and clean code need to be ingrained in your nature, so that you have the discipline to always come back to clean up the code and write tests for it. You need to have done your 10 000 hours to know what test-driven good code looks like, how to write testable code, and what tests are needed to test-drive a piece of code. The end result should look indistinguishable from whether it was written test-first or test-last.
  
#### **Spike and stabilize:** 
Write some experimental code to see if a thing could work. Cutting corners is okay. Test coverage might be lacking. Leave behind TODOs about things that are not of production quality. If the experiment doesn't work, the code can be thrown away. If the code proves useful, then you write the tests for it afterwards and refactor the code up to production quality. Looking at the end result, nobody should be able to tell that the code was not test-driven.

#### **ginger cake:**
The story behind the name is about a granny's recipe box. There is a recipe for chocolate cake, listing all the ingredients and instructions. Later in the box there is also a recipe for ginger cake, which reads just "like chocolate cake, but with ginger". As a software development pattern, this can be used when you need to build a new feature which is quite similar to something you've done before - and you know the code intimately. Copy-paste the old code, remove unnecessary parts and customize it suit the new feature.


