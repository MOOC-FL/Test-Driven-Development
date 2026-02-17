#### Duplication
- The Don't Repeat Yourself **(DRY)** principle says:
> Every piece of knowledge must have a single, unambiguous, authoritative representation within a system.
> "Andy Hunt and Dave Thomas, The Pragmatic Programmer (1999)"
- The alternative is to have the same thing expressed in two or more places. Then if you need to change one place, you might accidentally not remember to change the other place, leading to problems.
- A common case of duplicated knowledge is similar code in two or more places. If the places are almost similar, first try to refactor them to be exactly the same code, after which it's easier to extract the common code to a shared function.


