#include <bits/stdc++.h>
using namespace std;
int main() {
int n = 0;
cout<<"Number of 1's in "<< n <<" is: ";
int count=0;
while(n!=0){
  n = n&(n-1);
  count++;
}
cout<<count;

return 0;
}