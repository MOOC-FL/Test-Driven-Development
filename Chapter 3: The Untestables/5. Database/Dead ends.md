#### Dead ends
- You could replace the database with an in-memory fake implementation for tests (e.g. hashmap).
- It will make the tests faster, but will require maintaining two parallel implementations - the real and the fake persistence layer.
>  It works in simple cases, but gets harder the more database code there is. Even when using contract tests to make the implementations functionally equivalent, they will be leaky abstractions with non-obvious differences (transactions, foreign key constraints etc.).
- It's better to decouple business logic from persistence: you won't need to fake dependencies if you have no dependencies.¹
- Some people use an embedded in-memory database in tests and a different database in production, for example `HSQLDB` vs `PostgreSQL`.
- Even if `SQL` is a standard,² each implementation is different, so you will anyways need to run the tests against both databases.
- It might avoid having to install a database and the data will be removed after the test process exits, but nowadays `docker compose up -d db` is easy and even with an in-memory database you will need to handle isolation between test cases.
> Speed is not an argument either; a `PostgreSQL` which is already running is faster than a `HSQLDB` that needs to start every test run, not to speak of runtime performance.
##### You just saved 5+ years of experimenting.
> Most importantly, you would be limited to a subset of `SQL` that works on both databases, or you will need to maintain alternative versions of the queries; you would miss out on useful database-specific features such as **triggers/stored** procedures and range types. Summa summarum, use the same technology in tests as in production.


