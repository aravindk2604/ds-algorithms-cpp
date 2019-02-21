#include <iostream>
#include <memory>

class Sample{
    public:
        Sample() {
            std::cout << "Constructor\n";
        }


        ~Sample() {
            std::cout << "Destructor\n";
        }
        
        void publicFn() {
            std::cout << "Public function\n";
        }
};

int main() {
    std::unique_ptr<Sample> up1 = std::make_unique<Sample>();
    up1->publicFn();
    std::shared_ptr<Sample> sp1 = std::make_shared<Sample>();

    // use move semantics to transfer ownership from one unique ptr to other
   // std::unique_ptr<Sample> up2(std::move(up1));
    
    // up2.reset();
    up1->publicFn();
    sp1.reset();
    up1.reset();
    up1->publicFn();
    // up2.reset(nullptr);
    return 0;
}