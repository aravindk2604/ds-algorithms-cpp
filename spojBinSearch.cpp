/*

You are given a sorted array of numbers, and followed by number of queries, 
for each query if the queried number is present in the array print its 
position, else print -1.

#Input
First line contains N Q, number of elements in the array and number 
of queries to follow,

Second line contains N numbers, elements of the array, each number 
will be -10^9<= ai <= 10^9, 0 < N <= 10^5, 0 < Q <= 5*10^5

#Output
For each element in the query, print the elements 0 based location 
of its first occurence, if present, otherwise print -1.
*/

#include <bits/stdc++.h>

int elements[100005];

int BinSearch(int number, int len)
{
    int left_ind = 0;
    int right_ind = len - 1;
    int result = -1;

    while (left_ind <= right_ind)
    {
        int mid = (left_ind + right_ind) / 2;

        if (number == elements[mid]){
            result = mid;
            right_ind = mid - 1;            
        }
        else if (number < elements[mid]) right_ind = mid - 1;
        else left_ind = mid + 1;
    }
    return result;
}

int main()
{
    int numOfElements = 0;
    int nQueries = 0;
    int check_num = -1;
    int index_result = -1;
    // std::cin >> numOfElements >> nQueries;
    scanf("%d%d",&numOfElements, &nQueries);

    for (int i = 0; i < numOfElements; ++i)
    {
        // std::cin >> elements[i];
        scanf("%d", &elements[i]);
    }

    for (int i = 0; i < nQueries; ++i)
    {
        // std::cin >> check_num;
        scanf("%d", &check_num);
        index_result = BinSearch(check_num, numOfElements);
        // std::cout << index_result << std::endl;
        printf("%d\n", index_result);
    }

    return 0;
}