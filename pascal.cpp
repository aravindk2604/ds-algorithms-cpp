#include <iostream>
#include <cmath>

void printValue(int value) {
    
    if( value > 1 ) {
        int units = value % 10;
        std::cout << units << " ";
        value /= 10;
        printValue(value);
    }
    else
        std::cout << 1 << " ";
}

void calcElevenPower(int to_the_power) {
    int result = pow(11, to_the_power);
    printValue(result);
    std::cout << std::endl;
}

int main() {
    std::cout << "Enter the number of rows in the Pascal Triangle: ";
    int rows;
    std::cin >> rows;

    for(int i=0; i< rows; ++i) {
        for(int j=0; j<rows-i; ++j){
            
            if( j == (rows - i - 1)) { // when i=1, j = 1
                calcElevenPower(i);
            }
            else
                std::cout << " ";
        }
    }


return 0;
}
