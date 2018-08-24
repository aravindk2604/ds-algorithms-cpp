#include <bits/stdc++.h>


class mat3x3 {
    std::vector<std::vector<int>> m;

    public:
    mat3x3() {
        std::vector<std::vector<int>> aa(3, std::vector<int>(3, 0));
        m = aa;
    };
    mat3x3(std::vector<std::vector<int>> input) : m(input) {}
    void display() {
        for(auto vec : m) {
            for(auto v : vec) {
                std::cout << v << " ";
            }
            std::cout << "\n";
        }
    }    

    mat3x3 operator + (mat3x3& m1) {
        mat3x3 m2;
        
        for(int i=0; i<3; ++i) {
            for(int j=0; j<3; ++j) {
                m2.m[i][j] = this->m[i][j] + m1.m[i][j];
            }
        }


        return m2;
    }

};


int main() {
    std::vector<std::vector<int>> ak(3, std::vector<int>(3,1));
    mat3x3 ma(ak);
    mat3x3 mb(ak);
    mat3x3 mc;

    mc = ma + mb;

    mc.display();

    return 0;
}