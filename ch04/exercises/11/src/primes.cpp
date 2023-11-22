#include "std_lib_facilities.h"

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

bool is_prime(int x)
{
    bool is_prime = true;
    for(int p : primes)
    {
        if(x == 1) is_prime = false;
        
        if(p < x)
            if(x%p == 0) is_prime = false;
        
    }
    return is_prime;
}

int main()
{
    vector<int> my_primes;

    for(int i=1; i<=100; ++i){
        if(is_prime(i)) my_primes.push_back(i);
    }

    for(int p : primes) {
        cout << p << ' ';
    }
    cout << '\n';
    for(int p : my_primes) {
        cout << p << ' ';
    }

    cout << '\n';
}