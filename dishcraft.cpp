#include <bits/stdc++.h>
using namespace std;

//To execute C++, please define "int main()"

pair<int, int> findRectangle(vector<vector<int>> in) {
  
  pair<int ,int> coordinate;
  for(auto i=0; i<in.size(); ++i){
    // for(auto i : in) {
        auto mElement = distance(begin(in[i]), std::max_element(begin(in[i]), end(in[i])));
        if(mElement) {  
          coordinate.first = i;
          coordinate.second = mElement;
          return coordinate;
    }
  
}
  coordinate.first = -1;
  coordinate.second = -1;
  
  return coordinate;
}

int main() {
  // vector<vector<int>> input(4,vector<int>(4,0));
  vector<vector<int>> input = { {0, 255, 255, 255},
                                {0, 255,255, 255},
                                { 0, 0, 0, 0},
                                {0, 0, 0, 0}};
  
  for(auto vec : input){
    for(auto v: vec){
      cout << v << " , ";
    }
    cout << endl;
  }
  
  pair<int,int> result = findRectangle(input);
  
  cout << "the top left corner coordinate is: " <<  result.first << " " << result.second << "\n";
  return 0;
  
}