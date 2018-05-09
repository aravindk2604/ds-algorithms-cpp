#include <iostream>

class Calculator
{
  public:
    int Calculate(int x, int y, char oper)
    {
        switch (oper)
        {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0)
                return x / y;
            // else
            //     std::cout << "Now why would you do that son? Division by zero is invalid" << std::endl;
            //     return -1;

        default:
            return 0;
        }
    }
};

int main()
{
    int x, y, result;
    char oper;
    std::cout << "Hello! I'm a calculator" << std::endl;
    std::cout << "Please enter num1 operator num2: " << std::endl;
    std::cin >> x >> oper >> y;
    Calculator c;
    result = c.Calculate(x, y, oper);
    std::cout << "Result is: " << result << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
} 