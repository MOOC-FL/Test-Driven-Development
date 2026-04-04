#### Seams
- A seam is a place in the code where you can alter the behavior of the program without editing that place. In object-oriented languages, the most common seam is a polymorphic method call. In some languages (e.g. C), preprocessor and linker based seams are also an option.
- The basic strategy for changing legacy code is:
  1.  Identify the place you need to change.
  2. Plan that where would be a good place to test it.
  3. Break dependencies which hinder testing. Without tests, you must introduce new seams using minimal, safe changes. The code quality may temporarily worsen.
<p align="center">
  <img src="https://github.com/MOOC-FL/Media/blob/main/Test%20Driven%20Development/French_seam.png" alt="">
</p>

> As an example, the Extract and Override Call technique goes like this: Extract the difficult line of code to a new method. In tests, create a testable subclass which overrides the problematic method with a fake implementation. Write tests against that testable subclass.

   4. Cover the code with characterization tests.
   5. Do the change you originally wanted.
   6. Refactor and make the code more testable.
      
#### A whole book has been written about this topic, so it doesn't need to be repeated here.
<p align="center">
  <img src="https://github.com/MOOC-FL/Media/blob/main/Test%20Driven%20Development/Strip-Garde-on-ne-sait-jamais-650-finalenglish.jpg" alt="">
</p>

