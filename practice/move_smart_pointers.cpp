#include <iostream>
#include <memory>
using namespace std;

int main() {
	shared_ptr<int> sp (new int);
	cout<<sp.use_count()<<endl; // prints 1
	
    // transfer the ownership
	shared_ptr<int> sp2 = move(sp);
	
	cout<<sp.use_count()<<endl; // prints 0
	cout<<sp2.use_count()<<endl; // prints 1
	return 0;
}