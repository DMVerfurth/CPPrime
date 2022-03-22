#include <iostream>
#include <fstream>
#include <vector>

int main() {

    // Needed Variables
    int primeLimit;
    int compositor = 2;
    std::ofstream primes;
    std::vector<int> numberList;

    // User Input
    std::cout << "Find all primes up to: ";
    std::cin >> primeLimit;

    // Setup Variables
    numberList.reserve(primeLimit);
    std::remove("primes.txt");
    primes.open("primes.txt");

    // Generate Primes
    while (compositor != primeLimit) {

        // Log Info
        primes << compositor << ", ";

        // Composite Number List
        for (int deleter = compositor * 2; deleter < primeLimit; deleter += compositor)
            numberList[deleter] = 1;

        // Find Next Prime
        do { compositor ++; }
        while (numberList[compositor] == 1);

    }

    primes.close();
    return 0;

}