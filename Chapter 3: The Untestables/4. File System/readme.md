#### File System
- The file system is a global variable which persists between test executions.
- [ ] Firstly, decouple as much code from the file system as possible.
- [ ] If you have code which reads data from a file and then does something with the data, separate it into two functions that can be run in isolation:
1. one which does the file reading
2.  and another which does the data processing.
- Sometimes people have test data in files. It's better to have all data related to a test in the same file as the test (and preferably inline inside the test method).
- Otherwise, you'll need to jump between two files, which makes understanding the test harder.
-  After you have decoupled file handling and business logic, the file handling will still need to be tested. Files are unavoidable then (don't try mocking the file system).
- If a test needs to read from the disk, you can create small example files and commit them into version control. The tests can then read those test resources.
- If a test needs to write to the disk, create a unique temporary directory on test setup and delete it recursively on teardown.
> **Note :**  If the test process is killed or there are file locks, the teardown may not be able to delete the temporary directory.
>  Avoid using `/tmp` and instead place the temporary directory inside the project directory, under the build target directory, so that any stale directories will be removed on a clean build.



