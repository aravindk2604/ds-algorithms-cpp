#include <bits/stdc++.h>
#include <tr1/unordered_map>
#include <algorithm>
#include <ctype.h>
#include <string>
int main() {

    const std::string literature = "Jack and Jill, went up the the hill.";
    std::vector<std::string> wordsToExclude;
    wordsToExclude.push_back("and");
    wordsToExclude.push_back("the");
    wordsToExclude.push_back("up");
    
    std::tr1::unordered_map < std::string, int> dataMap;
    std::string cI = literature;
    std::transform(cI.begin(), cI.end(), cI.begin(), ::tolower);
    std::string::iterator it;
    std::string tempString;

    // auto result = std::any_of(cI.begin(), cI.end(), ::isupper);
    // std::cout << result << "\n";
    for(it = cI.begin(); it != cI.end(); ++it) {
        if((int)*it < 97 || (int)*it > 122) {
            
            if(!tempString.empty()){
                dataMap[tempString] += 1;
                tempString.clear();
            }
            
        }

       else if((int)*it >= 97 || (int)*it <=122) tempString += *it;
    }
    std::vector<std::string> output;
    std::tr1::unordered_map<std::string, int>::iterator ak;

    for(ak = dataMap.begin(); ak != dataMap.end(); ++ak) {
        if(!(std::find(wordsToExclude.begin(), wordsToExclude.end(), ak->first) != wordsToExclude.end())) {
                output.push_back(ak->first);
    } 
  
    }
    if(output.empty()) std::cout << "Dude it's empty\n";
    for(std::vector<std::string>::iterator it=output.begin(); it!=output.end(); ++it){
        std::cout << *it << "\n";
    }
    
    
    return 0;
}