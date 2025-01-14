// Example 1: Displaying Array Elements

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {7, 5, 6, 12, 35};

    cout << "The numbers are: ";

    //  Printing array elements
    // using range based for loop
    for (const int &n : numbers) {
        cout << n << "  ";
    }


    cout << "\nThe numbers are: ";

    //  Printing array elements
    // using traditional for loop
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << "  ";
    }

    return 0;
}

// Here, we have used a for loop to iterate from i = 0 to i = 4. In each iteration, we have printed numbers[i].

// We again used a range based for loop to print out the elements of the array. To learn more about this loop, check C++ Ranged for Loop.

// Note: In our range based loop, we have used the code const int &n instead of int n as the range declaration. However, the const int &n is more preferred because:

// Using int n simply copies the array elements to the variable n during each iteration. This is not memory-efficient.

// &n, however, uses the memory address of the array elements to access their data without copying them to a new variable. This is memory-efficient.
// We are simply printing the array elements, not modifying them. Therefore, we use const so as not to accidentally change the values of the array.