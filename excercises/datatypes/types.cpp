#include <iostream>
using namespace std;

int main() {
    double price = 99.99;
    float interestRate = 3.67F;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = true;

    // brace initialization
    double myNumber {1.2}; // Checks initialization value to match data type
    int myOtherNumber {}; // initializes to 0

    return 0;
}