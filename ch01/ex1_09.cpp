// sum the numbers from 50 to 100 (use while)

#include <iostream>
#include "array_length.h"

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }

    std::cout << "the sum is: " << sum << std::endl;

    int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 22};
    std::cout << "the length of int array is " << getArrayLength(intArray) << std::endl;
    return 0;
}

// output: the sum is: 3825
