#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two int values: ";
    int n;
    int c;
    cin >> n;
    cin >> c;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*2
         << "\nhalf n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';

    cout << "------------------\n";

    cout << "c == " << c
         << "\na/b == " << n/c
         << "\n(a/b)*b == " << (n/c) * c 
         << "\na%b == " << n%c
         << "\n(a/b)*c + (a%b) === " << (n/c) * c + (n%c)
         << "\n(a/b)*c + (a%b) === " << n
         << '\n';
    return 0;
}