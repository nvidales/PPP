#include "std_lib_facilities.h"


bool is_prime(vector<int> primes, int x)
{
    bool is_prime = true;
    for(int p : primes)
    {
        if(x == 1 || x == 2) is_prime = false;
        
        if(p < x)
            if(x%p == 0) is_prime = false;
        
    }
    return is_prime;
}

int main()
{
    vector<int> my_primes = {2};

    cout << "Enter a max number to find primes: ";
    int max;
    cin >> max;

    for(int i=1; i<=max; ++i){
        if(is_prime(my_primes, i)) my_primes.push_back(i);
    }

    cout << '\n';
    for(int p : my_primes) {
        cout << p << ' ';
    }

    cout << '\n';
}