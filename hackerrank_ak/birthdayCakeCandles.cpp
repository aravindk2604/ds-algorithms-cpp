/*
You are in-charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. 
When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 3, 2, 1, 3, she will be able to blow out 2 candles successfully, 
since the tallest candle is of height 3 and there are 2 such candles.

Complete the function birthdayCakeCandles that takes your niece's age and an integer array containing height of each candle as input, and return the number 
of candles she can successfully blow out.

Input Format

The first line contains a single integer, n, denoting the number of candles on the cake. 
The second line contains n space-separated integers, where each integer i describes the height of candle i.

Constraints
1 <= n <= 100000
1 <= height(i) <= 10000000

Output Format

Print the number of candles the can be blown out on a new line.

Sample Input 0

4
3 2 1 3

Sample Output 0

2

Explanation 0

We have one candle of height 1, one candle of height 2, and two candles of height 3. 
Your niece only blows out the tallest candles, meaning the candles where height = 3. 
Because there are 2 such candles, we print 2 on a new line.

*/

#include <bits/stdc++.h>
#include <vector>

// using namespace std;

std::vector<std::string> split_string(std::string);

/*
 * Complete the birthdayCakeCandles function below.
 */
int birthdayCakeCandles(int n, std::vector<int> ar) {
    /*
     * Write your code here.
     */
    int numOfCandlesBlown = 0;
    auto max_Candle_Height = max_element(std::begin(ar), std::end(ar)); // c++11
    // std::cout << "the max element is: " << *it << std::endl;

    for(unsigned index = 0; index < n; ++index) {
        if(*max_Candle_Height == ar.at(index))
            numOfCandlesBlown++;
    }
    return numOfCandlesBlown;

}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string ar_temp_temp;
    getline(std::cin, ar_temp_temp);

    std::vector<std::string> ar_temp = split_string(ar_temp_temp);

    std::vector<int> ar(n);

    for (int ar_itr = 0; ar_itr < n; ar_itr++) {
        int ar_item = std::stoi(ar_temp[ar_itr]);

        ar[ar_itr] = ar_item;
    }

    int result = birthdayCakeCandles(n, ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

std::vector<std::string> split_string(std::string input_string) {
    std::string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != std::string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));

    return splits;
}
