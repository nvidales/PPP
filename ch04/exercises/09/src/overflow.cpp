#include "std_lib_facilities.h"

int main()
{
    double sum = 0;
    double current = 1;
    for(int i=1; i<=64; ++i){
        current = current*2;
        sum += current;
        cout << i << ": " << current << '\n';
        cout << "Sum so far is " << sum << "\n";
    }
}