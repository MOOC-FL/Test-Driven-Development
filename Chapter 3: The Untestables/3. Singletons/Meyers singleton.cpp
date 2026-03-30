import std;

class Singleton {
private:
    Singleton() = default; // no public constructor
    ~Singleton() = default; // no public destructor
    inline static Singleton* instance = nullptr; // declaration class variable
    int value;
public:
    // defines a class operation that lets clients access its unique instance.
    static Singleton& getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return *instance;
    }
  
    Singleton(const Singleton&) = delete("Copy construction disabled");
    Singleton& operator=(const Singleton&) = delete("Copy assignment disabled");

    static void destroy() {
        delete instance;
        instance = nullptr;
    }

    // existing interface goes here
    [[nodiscard]]
    int getValue() const noexcept {
        return value;
    }

    void setValue(int newValue) noexcept {
        value = newValue;
    }
};

int main() {
    Singleton::getInstance().setValue(42);
    std::println("value = {}", Singleton::getInstance().getValue());
    Singleton::destroy();
}
