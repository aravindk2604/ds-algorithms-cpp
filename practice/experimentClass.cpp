#include <iostream>

class Expert {
    int x, y;

    public:
    Expert() : x(0), y(0) {}
    ~Expert() {} 

    //getters
    int GetX() const {
        return x;
    }

    int GetY() {
        
        return y;
    }

    void PrintVars () {

        std::cout << "X is: " << x << std::endl;
        std::cout << "Y is: " << y << std::endl;

    }

};

void culprit (Expert& ec) {

    std::cout << ec.GetX() << std::endl;
}

int main() 
{
    Expert e;
    // e.PrintVars();
    culprit(e);

    return 0;
}