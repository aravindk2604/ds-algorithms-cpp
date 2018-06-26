#include <bits/stdc++.h>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    const int I_SIZE = sizeof(N)*8;
    long long M =0;
    const long long S_SIZE = sizeof(M);

    int bitCheck = 1;
    int indexOfOne = -1;
    int max_gap = 0;
    std::cout << "Int size: " << S_SIZE << "\n";    
    for(auto i=0; i<I_SIZE; ++i){
        
        if(bitCheck > N) return max_gap;
        
        if((bitCheck & N) > 0) {
            if(indexOfOne == -1) indexOfOne = i;
            else {
                int gap = (i - indexOfOne) - 1;
                if(gap > max_gap) 
                    max_gap = gap;
                indexOfOne = i;
            }
        }
        
        bitCheck <<= 1;
    }
    
    return max_gap;
}

int main() {
    std::cout << "The largest binary gap of N is: " << solution(4) << std::endl;

    return 0;
}