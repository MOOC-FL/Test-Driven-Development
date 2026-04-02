#### Seams
- A seam is a place in the code where you can alter the behavior of the program without editing that place. In object-oriented languages, the most common seam is a polymorphic method call. In some languages (e.g. C), preprocessor and linker based seams are also an option.
- The basic strategy for changing legacy code is:
  1.  Identify the place you need to change.
  2. Plan that where would be a good place to test it.
  3. Break dependencies which hinder testing. Without tests, you must introduce new seams using minimal, safe changes. The code quality may temporarily worsen.
