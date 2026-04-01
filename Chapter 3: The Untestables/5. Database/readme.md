#### Database 
- The database is a global variable which persists between test executions.
- Make it easy to run the tests locally. Docker Compose makes it easy to start up a database without needing to install it. For cloud-only databases, using a development instance in the cloud is necessary. If more than one person (or process) uses the same database, then care must be taken to isolate the tests from parallel test runs.
- Usually tests create the database schema on test setup, and remove it on teardown. Another style is to remove and recreate the schema on test setup, which makes it the responsibility of the next test to clean up what the previous test produced. Clean-before allows peeking the data after a test run, but you would still need to focus run a single test, so commenting out the teardown or using a sleep gives the same effect with the clean-after approach. (Mom always told to clean up after yourself.)
- In focused integration tests, it may be possible to run each test in a rollback-only transaction. This should make tests faster by avoiding the need to recreate the database schema for each test. If more than one thread is involved or the SUT is complex, this strategy is usually not possible.
- Tests may create their own test data, or there may be a shared set of test data in the database.
- The former makes tests more understandable and decoupled from each other. The latter can be used for also testing database migrations.
- The test schema name may be hard-coded or unique.
- Unique names for each test make it possible to run tests in parallel.
- If the test process is killed, test teardown is never executed, so the tests should automatically remove stale test schemas (especially if using a shared long-running database instead of a local container/VM), or you will eventually learn the database's soft and hard limits.

> Never run tests against a production database. One safeguard is for the tests to only connect to a database whose name starts with "test".
##### Database tests can be made faster by disabling fsync or using a RAM disk.


