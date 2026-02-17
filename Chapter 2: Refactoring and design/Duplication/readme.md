#### Duplication
- The Don't Repeat Yourself **(DRY)** principle says:
> Every piece of knowledge must have a single, unambiguous, authoritative representation within a system.
> "Andy Hunt and Dave Thomas, The Pragmatic Programmer (1999)"
- The alternative is to have the same thing expressed in two or more places. Then if you need to change one place, you might accidentally not remember to change the other place, leading to problems.
- A common case of duplicated knowledge is similar code in two or more places. If the places are almost similar, first try to refactor them to be exactly the same code, after which it's easier to extract the common code to a shared function.
#### Three strikes and you refactor
> aka rule of three
- If it's not yet obvious that in what way the duplicated code will vary from place to place, let the code fester/ripen a bit longer. Wait until the code is repeated in three places, and then refactor. This reduces the risk of creating the wrong abstraction. [1]

#### Naive duplication
- Not all code that looks similar is duplicated knowledge. Even if chairs and dogs both have 4 legs, the 4s are not related.
- In **Conway's Game of Life**, the calculation of whether a cell will be alive in the next generation could be written like this:
```elixir
will_live? = if alive?
                 neighbors == 2 || neighbors == 3
             else
                 neighbors == 3
```
- The neighbors == 3 is repeated, so let's remove the duplication:
```elixir
will_live? = (alive? && neighbors == 2) || neighbors == 3
```
- But this is wrong. It couples together two unrelated concepts:
- In the original code, the 2 and 3 in the **alive?** branch are related to the concept of a "stable neighborhood", whereas the 3 in the **not alive?** branch means "genetically fertile neighborhood".
- By naming these concepts it becomes clear that they are not actually duplicated:
```elixir
will_live? = if alive?
                 stable_neighborhood?
             else
                 genetically_fertile_neighborhood?
```







