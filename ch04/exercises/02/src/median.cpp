#include "std_lib_facilities.h"

bool is_even(int a)
{
    if(a % 2 == 0) return true;
    return false;
}

double median(vector<double> list)
{
    double average_index = list.size()/2;
    if(is_even(list.size())) {
        return (list[average_index-1] + list[average_index])/2;
    }
    else {
        return list[average_index];
    }
}

int main()
{
    vector<double> temps;
    for(double temp; cin>>temp;)
        temps.push_back(temp);
    
    // compute mean temperature:
    double sum = 0;
    for(int temp : temps)
        sum += temp;
    
    // compute median temperature
    sort(temps);

    for(int temp : temps) cout << temp << " ";
    cout << '\n';
    cout << "Average temperature: " << sum/temps.size() << '\n';
    cout << "Median temperature: " << median(temps) << '\n';
}