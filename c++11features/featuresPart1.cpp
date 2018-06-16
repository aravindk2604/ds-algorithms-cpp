#include <bits/stdc++.h>

// a program to understand C++11 features

// I. define own initializer_list

class abVector {
    std::vector<int> new_vec;

    public:
    abVector(const std::initializer_list<int>& v ) {
        for(std::initializer_list<int>::iterator it = v.begin(); it!=v.end(); ++it) {
            new_vec.push_back(*it);
        }
    }
};

// Aggregrate initialization

class Dog {
    public:
    Dog(int age, std::string name) {}; // Aggregrate initialization
};

// II. Uniform Initialization Search Order:
// 1. Initializer_list constructor
// 2. regular constructor that takes the appropriate parameters
// 3. Aggregrate initializer

class Cat {
    public:
    int age;                                     // 3rd choice

    Cat(int a) : age(a) {}                          // 2nd choice

    Cat(const std::initializer_list<int>& vec) {       // 1st choice 
        age = *(vec.begin());
    }
};

// V. nullptr

void foo(int i) { std::cout << "foo int \n"; }
void foo(char* p) { std::cout << "foo char* \n"; }

// VIII. Delegating constructor

class Mouse {
    int age = 9;  // c++11 allows this and so age will be initialised by all the constructors that use it
    public:
    Mouse() {}
    Mouse(int a) : Mouse() {}   // first constructor can be called as an initializer list, the drawback is this can happen only
                                // before the second constructor tasks are started; not in the middle or the end.

};

// IX. override (for virtual function)
// to avoid inadvertently creating a new function in derived classes.

class Snake {
    public:
    virtual void A(int);
    virtual void B() const;
    void C();
};

// class WhiteSnake : public Snake {
//     public:
//     virtual void A(float) override; // throws error, because the func signature is different from the base class
//     virtual void B() override; // throws error, because the func signature is different from the base class
//     virtual void C() override; // throws error, because this func is not virtual at all in the base class.
// };

// X. final (for virtual function and for class)

class D final {

};    // final indicates that there can't be any derived classes from class D


class Y {
    virtual void AA() final; // this will not allow any derived class of Y to override the void AA() function
};

// XI. Compiler generated default constructor 

class Donkey {
    public:
    Donkey(int age);
    Donkey() = default; // force compiler to generate default constructor
};

// XII. delete
class Monkey{
    public:
    Monkey(int age) {}
    Monkey(double ) = delete; // doesn't allow object to take a double
    Monkey& operator =(const Monkey&) = delete; // doesn't allow objects to be copied using =
};

// XIII. constexpr

// int arr[6];  // ok
// int A() {return 3;} 
// int arr[A() + 3]; // compile error, because compiler doesn't know A() always returns constant

constexpr int A() {return 3;} // forces computation to happen at compile time
int arr[A() + 3]; // create an array of size 6

// to write a faster program with constexpr
constexpr int cubed(int c) {return c * c * c;}

int y = cubed(1759); // this will be computed at compile time



int main() {
    
// initializer list for containers
    std::vector<int> myVec = {3, 4, 1, 9}; // calling initializer_list constructor
    // abVector abv = {3, 4,5,8};  // works the same as below
    abVector abv{3, 4 ,5, 8};

    Dog d1{5, "tommy"};

    // III. auto type

    std::vector<int> vec1;
    for(auto it = myVec.begin(); it != myVec.end(); ++it) {
        vec1.push_back(*it);
    }

    auto a = 6;   // int
    auto b = 9.6;  // double
    auto c = a;    // int

    // IV. foreach
    for(auto i : vec1) {       // works on any class that has begin() and end()
        std::cout << i;       // read only
    }    

    for(auto& x : vec1) {
        x++;                   // modification is possible because of reference - auto& 
    }


    // V. nullptr (defined above main)
  
//    foo(NULL);     // ambiguity 

    foo(nullptr);  // calls foo(char* p)

    // V1. enum class

    enum class apple {green, red};
    enum class orange {big, small};

    apple A = apple::green;
    orange O = orange::small;


// compilation fails because we haven't defined ==(apple, orange)
    // if(A == O) {                                     
    //     std::cout << "Cannot compare enum classes\n"; 
    // }

    // VII. static_assert
    // static_assert(sizeof(int) == 4); this has to be true to execute the code that follows this line. happens at compile time

    // VIII. Delegating constructor (defined above main)

    // XII. delete
    Monkey m1(10); // possible, because int
//    Monkey m2(5.5); // error beacuse double is not allowed; delete is used in the class
  //  m2 = m1; // not possible 


    // New string literals // TODO    fix this!!!!!!!!!!!!!!!!!!!!

    // c++ 03:
    // char* ab = "string";
    
    // c++11
    // char* ax = u8"String";     // define UTF-8 string
    // char16_t* bb = u"string";  // define UTF-16 string
    // char32_t* cc = U"string";  // define UTF-32 string
    // char*  dd = R"(string \\)"     // define Raw string


    //////////// TODO ////////////
    // Lambda functions

    return 0;
}