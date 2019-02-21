#include <bits/stdc++.h>

// This program is to find the first non repeated string in the input vector
// using unordered_map will produce incorrect result because it doesn't store in
// a sorted order - uses hash-table
// using map will yield correct results because it will sort and store - something
// like red-black trees

/*

int main() {
    std::vector<std::string> in_string { "abc", "def", "ghi", "jkl", "abc", "cef", "def"};
    //std::cout << in_string.size() << std::endl;
    
    std::unordered_map<std::string, int> count_string;
    std::unordered_map<std::string, int>::iterator umap_itr = count_string.begin();
 
  //  std::map<std::string, int> count_string;
  //  std::map<std::string, int>::iterator umap_itr = count_string.begin();
    
    for(auto itr = in_string.begin(); itr != in_string.end(); ++itr) {
        count_string[*itr] += 1;
    }

    for(umap_itr = count_string.begin(); umap_itr != count_string.end(); ++umap_itr) {
    
        if(count_string[(umap_itr->first)] == 1) {
            std::cout << umap_itr->first << std::endl;
   //         break;
        }
    }


return 0;
}

*/

int main() {
    std::vector<std::string> in_string { "abc", "def", "ghi", "jkl", "abc", "cef", "def", "ghi"};
    
   // std::unordered_map<std::string, int> count_string;
   // std::unordered_map<std::string, int>::iterator umap_itr = count_string.begin();
 
    std::map<std::string, std::pair<int,int>> count_string;
    std::map<std::string, std::pair<int,int>>::iterator umap_itr = count_string.begin();
    //std::pair<int, int> mpair;
    static int count =0;
    int min_index = 3*in_string.size();

    for(auto itr = in_string.begin(); itr != in_string.end(); ++itr) {
        count_string[*itr].first += 1;
        if(count_string[*itr].first > 1) {
            count_string[*itr].second = count + in_string.size();
        }
        else
        {
            count_string[*itr].second = ++count;
        }
        }
  std::string output;
    for(umap_itr = count_string.begin(); umap_itr != count_string.end(); ++umap_itr) {
    
        if(min_index > umap_itr->second.second) {
            min_index = umap_itr->second.second;
            output = umap_itr->first;
        }
        std::cout << umap_itr->first << " : " << umap_itr->second.first << " , "<< umap_itr->second.second << std::endl;
        }
    std::cout << "The first non-repeated string is: " << output << std::endl;
return 0;
}

