// displays alphanumeric chars with their corresponding int values

#include "std_lib_facilities.h"

int main()
{
    // lowercase
    for(int i = 97; i < 123; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }

    cout << '\n';

    // upercase
    for(int i = 65; i < 91; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }

    cout << '\n';
    
    // digits
    for(int i = 48; i < 58; ++i) {
        cout << char(i) << '\t' << i << '\n';
    }

    /*cout << "Enter a letter to see its value: ";
    char letter;
    while(cin >> letter) {
        cout << letter << "'s int value is: " << int(letter);
        cout << "\nEnter another letter to see its value or Ctrl+D to exit: ";
    }*/
}