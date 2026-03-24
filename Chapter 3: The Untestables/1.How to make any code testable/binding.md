#### binding
- (binding bindings & body)
- `binding => var-symbol init-expr`
- Creates new bindings for the (already-existing) vars, with the
supplied initial values, executes the exprs in an implicit do, then
re-establishes the bindings that existed before.  The new bindings
are made in parallel (unlike let); all init-exprs are evaluated
before the vars are bound to their new values.
```clojure
;; Here are the definitions.
(defn mymax [x y]
  (min x y))
(defn find-max [x y]
  (max x y))
user=> (let [max mymax]
         (find-max 10 20))
20 ;let is ineffective outside current lexical scope
user=> (binding [max mymax]
         (find-max 10 20))
10 ;because max is now acting as min
```
```clojure
;; As of Clojure 1.3, vars need to be explicitly marked as ^:dynamic in order for
;; them to be dynamically rebindable:
user=> (def ^:dynamic x 1)
user=> (def ^:dynamic y 1)
user=> (+ x y)
2
;; Within the scope of the binding, x = 2 and y = 3
user=> (binding [x 2 
                 y 3]
         (+ x y))
5
;; But once you leave the binding's scope, x and y maintain their original
;; bindings:
user=> (+ x y)
2
```
