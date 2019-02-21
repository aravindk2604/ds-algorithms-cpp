#include <bits/stdc++.h>

//#include <iostream>
//#include <exception>
//#include <map>
// This code is an example of how a sparse matrix can be stored
// by avoiding to store all the zeroes and only storing those 
// indices that has values other than zero. std::map is a great way 
// to realise this sparse matrix.

/*
class SparseMatrix {
    std::map<std::pair<int, int>, int> mat_vars;
    int rows_, cols_;
    public:
    
    SparseMatrix(int rows, int cols) : rows_(rows), cols_(cols) {}

    void set_SM(int r, int c, int value) {
        if(r > rows_ - 1 || c > cols_ - 1) {
            throw "Index exceeds Matrix bounds when using the set method";
        }
        else {
        mat_vars[(std::pair<int, int>(r, c))] = value;
        }
        }

    int get_SM(int i, int j) {
        std::pair<int, int> index_(i, j);
        
        // check out of bounds
        if(i > rows_ - 1 || j > cols_ - 1) {
            throw "Matrix index out of bounds when using the get_SM method!";
        }
        else {
            bool exists = (mat_vars.find(index_) != mat_vars.end());
            if(exists) {
                return mat_vars.at(index_);
            }
            else
                return 0;
        }
    }

};


int main() {
    
    SparseMatrix sm_obj(4,4);

    try {
        sm_obj.set_SM(3,2,9);
        auto val = sm_obj.get_SM(3,2);
        std::cout << val << std::endl;
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
    }



return 0;
}
*/



class SparseMatrix {
    std::map<std::pair<int, int>, int> mat_vars;
    int rows_, cols_;
    public:
    
    SparseMatrix(int rows, int cols) : rows_(rows), cols_(cols) {}

    void set_SM(int r, int c, int value) {
        try {
            if(r > rows_ - 1 || c > cols_ - 1) {
                throw "Index exceeds Matrix bounds when using the set method";
            }
            else {
                mat_vars[(std::pair<int, int>(r, c))] = value;
            }
        } catch (const char* msg) {
            std::cerr << msg << std::endl;
        }
    }

    int get_SM(int i, int j) {
        
        // check out of bounds
        try{
            if(i > rows_ - 1 || j > cols_ - 1) {
                throw "Matrix index out of bounds when using the get_SM method!";
            }
            else {
                std::pair<int, int> index_(i, j);
                bool exists = (mat_vars.find(index_) != mat_vars.end());
                if(exists) {
                    return mat_vars.at(index_);
                }
                else
                    return 88;
                }
            } catch (const char* msg) {
                std::cerr<< msg << std::endl;
            }
        }

};


int main() {
    
    SparseMatrix sm_obj(4,4);

//    try {
        sm_obj.set_SM(2,2,11);
        sm_obj.set_SM(3,5,9);
        auto val = sm_obj.get_SM(2,2);
        std::cout << val << std::endl;
//    } catch (const char* msg) {
//        std::cerr << msg << std::endl;
//    }



return 0;
}























































