#include "Std2DArrays.h"
#include <iostream>

int main() {
    std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
    int numberOfRows, numberOfColumns;
    std::cout << "Enter the number of rows:";
    std::cin >> numberOfRows;
    std::cout << "Enter the number of columns:";
    std::cin >> numberOfColumns;
    try {
        fillArray(arr, numberOfRows, numberOfColumns);
        printArray(arr, numberOfRows, numberOfColumns);
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
