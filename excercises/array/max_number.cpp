#include <iostream>
#include <array>
using namespace std;

int get_max(array<int, 5> numbers)
{
    int current_max = 0;
    int numbers_length = numbers.size();
    cout << "Array size is: " << numbers_length << endl;
    for (int i = 0; i < numbers_length; ++i)
    {
        if (i == numbers_length - 1)
        {
            cout << "exiting loop" << endl;
            break;
        };

        if (numbers[i] > numbers[i + 1])
        {
            cout << "i is bigger than i+1" << numbers[i] << endl;
            current_max = numbers[i];
        }
        else
        {
            cout << "i+1 is bigger than i " << numbers[i+1] << endl;
            current_max = numbers[i + 1];
        };
    }

    return current_max;
}

int main()
{
    array<int,5> numbers{0, 1, 2, 3, 4};
    int max_number = get_max(numbers);
    cout << "The max number is: " << max_number << endl;
    return 0;
}