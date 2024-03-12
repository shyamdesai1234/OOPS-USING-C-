
#include <iostream>
#include <cmath>
using namespace std;

int isArmstrong(int number)
{
    int num_length = 0, original_number = number, remainder, result = 0;

    while (original_number != 0)
    {
        original_number /= 10;
        num_length++;
    }

    original_number = number;

    while (original_number != 0)
    {
        remainder = original_number % 10;
        result += pow(remainder, num_length);
        original_number /= 10;
    }

    if (result == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    cout<<"Enter a number: ";
    cin>> number;

    if (isArmstrong(number))
        cout<<"Armstrong number";
    else
    cout<<"not Armstrong number";
    return 0;
}
