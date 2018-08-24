#include <bits/stdc++.h>
using namespace std;
int main() {
int n = 8; 
cout<<"Number of 1's in "<< n <<" is: ";

int count=0;

while(n!=0){  // this condition works because the number of iterations
              // here denotes the number of ones in the number
  n = n&(n-1); // 8 = 8 & (7) ==> 1000 & 0111 = 0 (000) c = 1
  count++;
}
cout<<count << endl;

return 0;
}