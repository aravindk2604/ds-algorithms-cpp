#include <iostream>
#include <memory>


class Sample {
    public:
        Sample() {
            std::cout << "sample constructor\n" ;
        }

        ~Sample() {
            std::cout << "sample destructor\n";
        }

        void publicFn() {
            std::cout << "This is public function of the class Sample\n";
        }
        
};

int main() {

    std::shared_ptr<int> sp = std::make_shared<int>();
    *sp = 10; 
    std::cout << *sp << std::endl;
    std::cout << "Ref count: " << sp.use_count() << std::endl;


    std::shared_ptr<Sample> shp (new Sample());
    shp->publicFn();
    shp.reset();

    // in the case of a shared_ptr for array
    // can only use 'new' method to define the shared_ptr and make_shared cannot 
    // be used because there is no way of including the default_delete option
    std::shared_ptr<int> s (new int[5], std::default_delete<int[]>());
    std::cout << "Ref count: " << s.use_count() << std::endl;

    return 0;
}