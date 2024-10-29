#include <iostream>
#include <vector>
#include <algorithm>

struct Accumulator {
    int counter = 0;

    // Overload operator() to add an integer to the counter
    int operator()(int i) { 
        return counter += i; 
    }

    // Overload operator() to add two integers and update the counter
    int operator()(int i, int j) { 
        counter += i + j;
        return i + j; 
    }
};

// Function to print an integer
void print(int i) { 
    std::cout << i << std::endl; 
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using a functor with a single argument
    Accumulator acc;
    std::for_each(vec.begin(), vec.end(), std::ref(acc)); // Pass by reference
    std::cout << "Sum of elements (single argument): " << acc.counter << std::endl; 

    // Using a functor with two arguments (not used with for_each)
    std::cout << "Sum of 10 and 20 (two arguments): " << acc(10, 20) << std::endl;
    std::cout << "Updated counter: " << acc.counter << std::endl; 

    // Using a function pointer
    std::cout << "Printing elements using a function pointer:" << std::endl;
    std::for_each(vec.begin(), vec.end(), print);

    return 0;
}