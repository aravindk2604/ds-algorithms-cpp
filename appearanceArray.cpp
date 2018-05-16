/*

The task is to 
- check if an element is present in the input array
- count the elements appearing number of times in an array.

10                         // number of elements
1 7 7 7 9 2 3 10 9 4      // elements of the array


*/

#include <bits/stdc++.h>

int appearance_Array[20];

int main()
{

    int numOfElements = 0;
    int check_element = -1;
    int input = 0;
    char decision;
    int maximum;

    std::cout << "Enter the number of elements of the array\n";
    std::cin >> numOfElements;

    std::cout << "Enter the elements of the array between 0 and 10\n";

    for (int i = 0; i < numOfElements; ++i)
    {
        std::cin >> input;
        for (int x = 0; x < 10; ++x)
        {
            if (input == x)
                ++appearance_Array[x];
            maximum = std::max(maximum, input);
        }
    }

    std::cout << "What's the positive integer you want to check?: " << std::endl;
    std::cin.ignore();
    std::cin >> check_element;

    std::cout << "\nThe number to be checked is: " << check_element << std::endl;
    if (appearance_Array[check_element] != 0)
    {
        std::cout << "Yes, the integer is present\n";
    }

    else
        std::cout << "Nope! that number is not present in the array\n";

    std::cout << "Do you want to know how many elements are repeated? (y/n)" << std::endl;
    std::cin >> decision;
    std::cout << "Also printing the sorted input array - counting sort method used\n";

    if (decision == 'y' || decision == 'Y')
    {
        for (int i = 0; i < 10; ++i)
        {
            if (appearance_Array[i] != 0)
            {
                std::cout << i << " was repeated " << appearance_Array[i] << " times. \n";
            }
            if (i <= maximum && appearance_Array[i] != 0)
                for(int k=0; k<appearance_Array[i]; ++k)
                    std::cout << i << "\n";
        }
    }

    else
        std::cout << "Okay, program exited." << std::endl;

    return 0;
}