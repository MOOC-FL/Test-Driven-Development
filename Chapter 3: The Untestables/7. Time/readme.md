#### Time
- Time is a global variable which is ever changing (hopefully monotonically increasing).
-  Code which reads the current time (e.g. using new `Date()`) is inherently untestable. Instead, pass in the current time as a method parameter, or inject a clock which can be replaced with a fake clock in tests.


