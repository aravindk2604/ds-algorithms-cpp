#include <bits/stdc++.h>
// input is list of x-y co-ordinates
// find minimum and maximum point

int main() {
    std::vector<std::pair<float, float>> xy{ {0.345, 0.45},
                                             {0.67, 0.93},
                                             {0.53, 0.8},
                                             {0.88, 0.1},
                                             {0.18, 0.15},
                                             {0.77, 0.23}  };

    std::cout << "Size of the vector list: " << xy.size() << std::endl;

    // std::vector<std::pair<float, float>> output(6, std::make_pair<float, float>(0.0, 0.0));
    // std::cout << "Size of the vector list: " << output.size() << std::endl;
    std::pair<float, float> maxx = std::make_pair<float, float>(0.0, 0.0);
    std::pair<float, float> minn = std::make_pair<float, float>(1.0, 1.0);
    
   for(auto itr = xy.begin(); itr!= xy.end(); ++itr) {
       auto check = *itr;
       if(check.second > maxx.second) maxx = check; // check the y coordinate for the maximum point
       if(check.first < minn.first) minn = check; // check the x coordinate for the minimum point 
                            // and that is the way to find the tightest fit of the given points
   }

   std::cout << "The max is: " << maxx.first << ", " << maxx.second << std::endl;
   std::cout << "The min is: " << minn.first << ", " << minn.second << std::endl;

    return 0;
}