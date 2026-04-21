Below is a table of six programming languages, each emphasizing a different paradigm as requested, with a small code example for each.

| Language | Emphasis | Example Code |
|----------|----------|----------------|
| **Java** | Class abstractions (OOP) | ```java<br>public class Animal {<br>    private String name;<br>    public Animal(String name) { this.name = name; }<br>    public void speak() { System.out.println(name + " makes a sound."); }<br>}<br><br>public class Dog extends Animal {<br>    public Dog(String name) { super(name); }<br>    @Override<br>    public void speak() { System.out.println(getName() + " barks."); }<br>}<br>``` |
| **Haskell** | Functional abstraction | ```haskell<br>-- Function composition and higher-order function<br>mapDouble :: [Int] -> [Int]<br>mapDouble = map (*2)<br><br>-- Pure function with pattern matching<br>factorial :: Int -> Int<br>factorial 0 = 1<br>factorial n = n * factorial (n-1)<br>``` |
| **Common Lisp** | Syntactic abstraction (macros) | ```lisp<br>(defmacro when-positive (x &body body)<br>  `(if (> ,x 0)<br>       (progn ,@body)))<br><br>(defmacro infix (op a b)<br>  `(,op ,a ,b))<br><br>(when-positive 10<br>  (print "Greater than zero"))<br>``` |
| **Prolog** | Declarative specifications | ```prolog<br>parent(john, mary).<br>parent(mary, ann).<br>ancestor(X, Y) :- parent(X, Y).<br>ancestor(X, Y) :- parent(X, Z), ancestor(Z, Y).<br><br>% Query: ancestor(john, ann). -> true<br>``` |
| **Go** | Parallelism (goroutines) | ```go<br>package main<br><br>import "fmt"<br>import "time"<br><br>func say(s string) {<br>    for i := 0; i < 3; i++ {<br>        time.Sleep(100 * time.Millisecond)<br>        fmt.Println(s)<br>    }<br>}<br><br>func main() {<br>    go say("world")   // goroutine<br>    say("hello")<br>}<br>``` |
| **Clojure** | Parallelism + Lisp syntax (added for richness) | ```clojure<br>(defn parallel-inc [coll]<br>  (pmap inc coll))   ; parallel map<br><br>(defn future-example []<br>  (let [f (future (Thread/sleep 1000) "Done")]<br>    (println "Waiting...")<br>    @f))<br>``` |

> **Note:** You asked for “one language that emphasizes parallelism” but listed two (Clojure, Go). The table includes Go as the primary parallelism example and adds Clojure to also satisfy the “syntactic abstraction” need without overloading Lisp — but since Common Lisp already covers syntactic abstraction, Clojure here serves as a bonus parallel + Lisp-dialect example. If you must choose exactly one for parallelism, **Go** is the clearer teaching example.
Below is a table summarizing the key considerations and language recommendations from the text.

| Consideration | Key Point | Example / Why it matters |
|---------------|-----------|--------------------------|
| **Use your friends** | Learn from people around you; community matters | Choose a language your friends use → easier to get help, stay motivated. Also check if the language has a large, growing community (books, forums, supportive culture). |
| **Keep it simple** | Avoid languages designed for large, efficiency-focused teams | C++ and Java have unnecessary complexity for a beginner. Choose a language designed for ease of learning by a single new programmer. |
| **Play (interactive mode)** | Interactive feedback (like a piano) beats batch mode | Immediate feedback when you run code helps learning. Insist on a language with an interactive mode (REPL, console, or live environment). |

---

### Recommended first languages

| Language | Why recommended | Notes |
|----------|----------------|-------|
| **Python** | Simple, interactive, huge community, widely used | Meets all three criteria well. Excellent for beginners. |
| **Scheme** | Simple, interactive, designed for learning (a dialect of Lisp) | Emphasizes functional abstraction and syntactic abstraction; great for teaching core ideas without clutter. |
| **JavaScript** | Massive number of online tutorials (e.g., Khan Academy) | Not perfectly designed for beginners, but the learning resources are abundant and accessible. |
| **Alice / Squeak / Blockly** | Visual, interactive, great for young children (single-digit age) | Older learners might also enjoy them. Lowers barrier to entry dramatically. |

---


> *“The important thing is that you choose and get started.”*
