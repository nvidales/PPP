#include "std_lib_facilities.h"

int mean(int a, int b) {
    return (a+b)/2;
}

int ask(int a, int b)
{
    int start = a;
    int end = b;
    char hint = ' ';

    while(start < end)
    { 
        int mid = mean(start, end);
        cout << "Is the number less than or equal to " << mid << "? (y/n): ";
        cin >> hint;
        if(hint == 'y'){
            end = mid;
        }
        else if (hint == 'n'){
            start = mid + 1;
        }
        else {
            cout << "Uknown hint. Please try again.\n";
        }
    }
    return start;
}

int main()
{
    constexpr int start = 1;
    constexpr int end = 100;

    cout << "Enter a number between " << start << " and " << end  << ": ";
    int num;
    cin >> num;
    
    int guess = ask(start, end);
    cout << "The number is: " << guess << "\n";
    
}