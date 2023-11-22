// Program that calculates how many squares are needed to get 
// a number of grains of rice input by user
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter number of grains of rice: ";
    int grains;
    cin >> grains;

    int current_square = 1;
    int current_grains = 1;
    int sum = 0;

    while(sum <= grains && current_square <= 64)
    {
        current_grains = current_grains*2;
        sum += current_grains;

        cout << "Current Square: " << current_square << '\n';
        cout << "Current Grains: " << current_grains << '\n';
        cout << "Total Grains: " << sum << '\n';

        ++current_square;
    }

    cout << "You need " << current_square << " squares to get " << grains << " grains of rice.\n";
}