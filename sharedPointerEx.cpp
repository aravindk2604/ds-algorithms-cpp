#include <bits/stdc++.h>

int main() {

    std::shared_ptr<int> p1 = std::make_shared<int>();

    *p1 = 99;
    std::cout << "p1 is: " << *p1<< "\n";
    std::cout << "p1 reference count: " << p1.use_count()<< "\n";

    std::shared_ptr<int> p2(p1);

    std::cout << "p1 reference count: " << p1.use_count()<< "\n";
    std::cout << "p2 reference count: " << p2.use_count()<< "\n";
    
    if(p1 == p2) std::cout << "yes same\n";
    else std::cout << "not same\n";

    p1.reset();
    
    std::cout << "p1 reference count: " << p1.use_count()<< "\n";
    std::cout << "p2 reference count: " << p2.use_count()<< "\n";

    p1.reset(new int(33));

    std::cout << "p1 reference count: " << p1.use_count()<< "\n";

    p1 = nullptr;
    std::cout << "p1 reference count: " << p1.use_count()<< "\n";
      


    return 0;
}