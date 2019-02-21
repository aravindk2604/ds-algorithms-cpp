#include <bits/stdc++.h>
// input is list of x-y co-ordinates
// find minimum and maximum points and the tighest cell fit


// Boundary
// assuming four quadrants between 0 and 1
// Quadrant 0: (0.0, 0.0) , (0.49, 0.0), (0.49, 0.49), (0.0, 0.49)
// Quadrant 1: (0.5, 0.0) , (1.0, 0.0), (1.0, 0.49), (0.5, 0.49)
// Quadrant 2: (0.5, 0.5) , (1.0, 0.5), (0.5, 1.0), (1.0, 0.5)
// Quadrant 3: (0.0, 0.5) , (0.49, 0.5), (0.49, 1.0), (0.0, 1.0)

int whichQuadrant(std::pair<float, float>& coord) {
    int result = -1;
    
    // Quadrant 0
    if(coord.second >= 0.0 && coord.second <= 0.49 ) {
        if(coord.first >= 0.0 && coord.first <= 0.49 ) {
            return result=0;
    }
    }

    // Quadrant 1
    if(coord.second >= 0.0 && coord.second <= 0.49 ) {
        if(coord.first >= 0.5 && coord.first <= 1.0 ) {
            return result = 1;
    }
    }

    // Quadrant 2
    if(coord.second >= 0.5 && coord.second <= 1.0 ) {
        if(coord.first >= 0.5 && coord.first <= 1.0 ) {
            return result = 2;
    }
    }

    // Quadrant 3
    if(coord.second >= 0.5 && coord.second <= 1.0 ) {
        if(coord.first >= 0.0 && coord.first <= 0.49 ) {
            return result = 3;
    }
}
    }


int main() {

    // this vector input gives the output 4 (entire four quadrants)
    // std::vector<std::pair<float, float>> xy{ {0.34, 0.45},
    //                                          {0.67, 0.93},
    //                                          {0.53, 0.8},
    //                                          {0.88, 0.1},
    //                                          {0.18, 0.15},
    //                                          {0.77, 0.23}  };


// this vector input gives output as 1. the tighest fit is cell 1
    std::vector<std::pair<float, float>> xy{ {0.51, 0.45},
                                             {0.67, 0.43},
                                             {0.53, 0.4},
                                             {0.88, 0.1},
                                             {0.68, 0.15},
                                             {0.77, 0.23}  };

    std::cout << "Size of the vector list: " << xy.size() << std::endl;

    // std::vector<std::pair<float, float>> output(6, std::make_pair<float, float>(0.0, 0.0));
    // std::cout << "Size of the vector list: " << output.size() << std::endl;
    std::pair<float, float> maxx = std::make_pair(0.0, 0.0);
    std::pair<float, float> minn = std::make_pair(1.0, 1.0);
    
   for(auto itr = xy.begin(); itr!= xy.end(); ++itr) {
       auto check = *itr;
       if(check.second > maxx.second) maxx = check; // check the y coordinate for the maximum point
       if(check.first < minn.first) minn = check; // check the x coordinate for the minimum point 
                            // and that is the way to find the tightest fit of the given points
   }

   std::cout << "The max is: " << maxx.first << ", " << maxx.second << std::endl;
   std::cout << "The min is: " << minn.first << ", " << minn.second << std::endl;

    std::cout << "Finding the tighest fit of the given points..." << std::endl;
    int quadrant_max = whichQuadrant(maxx);
    int quadrant_min = whichQuadrant(minn);

    if(quadrant_max == quadrant_min) {
        std::cout << "The given points fit inside the cell: " << quadrant_max << std::endl;
    }
    else {
        std::cout << "The given points fit inside the cell: 4" << std::endl;
    }

    return 0;
}
