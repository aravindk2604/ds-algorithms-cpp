#include <bits/stdc++.h>


class Complex {
    double real;
    double imag;

    public:
    Complex() : real(0), imag(0) {}
    void input() {
        std::cout << "Enter the real and imaginary values for complex num: \n";
        std::cin >> real;
        std::cin >> imag;
}

    Complex operator - (Complex& c2) {
        Complex temp;
        temp.real = real - c2.real;
        temp.imag = imag - c2.imag;

        return temp;
    }

    void output() {
        if(imag < 0) 
            std::cout << "\nThe complex number is " << real << imag << "i\n";
        else
            std::cout << "\nThe complex number is " << real << " + " << imag << "i\n";
            
    }



};

int main() {
    Complex c1, c2, result;
    std::cout << "Enter the first complex number:\n";
    c1.input();

    std::cout << "Enter the second complex number:\n"; 
    c2.input();

    result = c1 - c2;
    result.output();
    return 0;
}