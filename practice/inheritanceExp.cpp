#include <iostream>
#include <memory>

class Base {

    public:
      Base() {
            // printMe();
            std::cout << "B Constructor\n";
        }

        ~Base() {
            // printMe();
            std::cout << " Base Destructor\n";
        }

    // virtual void printMe () {
    //     std::cout << "From Base\n";
    // }

};

class Derived : public Base {

    public:
        Derived() {
            // printMe();
            std::cout << "D    Constructor\n";
        }

        ~Derived() {
            // printMe();
            std::cout << "From Derived Destructor\n";
        }
        // void printMe () {
        // std::cout << "From Derived\n";
        // }

};

int main() {


    std::unique_ptr<Base> b = std::make_unique<Derived>();
    return 0;
}