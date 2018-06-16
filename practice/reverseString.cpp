#include <bits/stdc++.h>

bool isAlphabet(char x){
    return ((x >= 'A' && x<= 'Z') || (x >= 'a' && x<= 'z') );
}

void reverse (char str[]) {
    int r = strlen(str) - 1;
    int l = 0;

    while(l<r) {
        
        if(!isAlphabet(str[l])) l++;
        else if(!isAlphabet(str[r])) r--;
        else {
            std::swap (str[l], str[r]);
            l++;
            r--;
        }
    }
}

int main() {
    char str[] = "a!!!b.c.d,e'f,ghi";
    std::cout << "Input string is: " << str << std::endl;
    reverse(str);
    std::cout << "Output string is: " << str << std::endl;
    
    return 0;
}