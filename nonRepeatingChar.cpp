#include <bits/stdc++.h>

int main()
{

    std::string in = "Suffocation";

    std::string tr = in;
    //    std::transform(cI.begin(), cI.end(), cI.begin(), ::tolower);
    std::transform(tr.begin(), tr.end(), tr.begin(), ::tolower);
    int count = tr.length();
    // ASCII of alphabets - assuming to convert all to lowercase
    std::string::iterator it = tr.begin();
    std::map<char, int> charCount;
    while (--count)
    {
        if (*it >= 97 && *it <= 122)
        {
            charCount[*it] += 1;
        }
        ++it;
    }

    std::cout << "Count is: " << count << "\n";

    std::cout << "The char that didn't repeat are: "
              << "\n";

    for (std::map<char, int>::iterator itr = charCount.begin(); itr != charCount.end(); ++itr)
    {
        if (itr->second == 1)
        {
            std::cout << itr->first << " " << itr->second << "\n";
        }
    }

    return 0;
}