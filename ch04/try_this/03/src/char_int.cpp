// displays lowercase alpha chars with their corresponding int values

#include "std_lib_facilities.h"

int main()
{
    int i = 97;
    while(i < 123) {
        cout << char(i) << '\t' << i << '\n';
        ++i;
    }
}