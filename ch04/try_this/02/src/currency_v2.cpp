// convert from yen, kroner, or pounds to dollars
// a suffix 'y', 'k', 'p' indicates the unit of the input

#include "std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollar = 0.0068;
    constexpr double kroner_per_dollar = 0.094;
    constexpr double pounds_per_dollar = 1.25;

    double amount = 1;
    char currency_type = 0;

    cout << "Please enter a dollar amount followed by a currency type (y, k or p):\n";
    cin >> amount >> currency_type;

    switch(currency_type) {
        case 'y':
            cout << amount << " yen == " << amount*yen_per_dollar << " dollars\n";
            break;
        case 'k':
            cout << amount << " kroner == " << amount*kroner_per_dollar << " dollars\n";
            break;
        case 'p':
            cout << amount << " pounds == " << amount*pounds_per_dollar << " dollars\n";
            break;
        default:
            cout << "Unknown currency type\n";
            break;
    }        
}
