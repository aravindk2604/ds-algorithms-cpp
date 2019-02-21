#include <iostream>

void fib(int seq_limit) {
    
    try{
        
        if(seq_limit < 2)
            throw "limit cannot be less than 2";
        else {
            int t1 = 0, t2 = 1, num;
            std::cout << t2 << " ";
            while(--seq_limit){
            num = t1 + t2;
            std::cout << num << " ";
            t1 = t2;
            t2 = num;
            }
            std::cout << std::endl;
        }
    } catch (const char* msg) 
    {std::cerr << msg << std::endl;}

}

int main() {
    fib(7);
return 0;
}
