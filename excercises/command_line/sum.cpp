#include <iostream>
using namespace std;

/*
argc: "ARGument Count" Contains the number of arguments including the name of the program
argv: "ARGument Vector" Array of characters pointers listing all the arguments
*/
int main(int argc, char** argv) {
    cout << "Executing: " << argv[0] << endl;

    if (argc == 1) {
        printf("No arguments provided\n");
        return 0;
    };

    cout << "You have entered " << argc << " arguments: " << "\n";

    int sum = 0;

    for (int i = 1; i < argc; ++i) {
        cout << "arg:" << i << " = " << argv[i] << endl;
        sum = sum + stoi(argv[i]);
    }

    cout << "The total sum is: " << sum << endl;

    return 0;
}