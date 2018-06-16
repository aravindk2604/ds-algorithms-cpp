#include <bits/stdc++.h>
#include <string>

int main() {

// std::string input = "abcdcba";
char input[] = "abcdcxa";

// int sL = input.length();
int sL = strlen(input);
// std::cout << sL << "\n";

char* p1 ; 
p1 = input;
char* p2; 
p2 = p1+sL-1;
std::cout << *p1 << " "<< *p2 <<"\n";
int a =0;
int b = sL -1;


int flag = 0;

for(int j = 0; j< (sL/2); j++) {
//  if(input[a] != input[b]) { flag = 1; break;}
// a++;
// b--;

if(*p1 != *p2) {flag = 1; break;}
++p1;
--p2;
}

if(flag == 1) std::cout << "no\n"; 
else std::cout << "yes\n"; 

return 0;
}