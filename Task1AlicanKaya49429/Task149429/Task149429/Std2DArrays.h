#include <array>
const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;
void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns);
#pragma once