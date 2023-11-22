#include "std_lib_facilities.h"

bool is_even(int a)
{
    if(a % 2 == 0) return true;
    return false;
}

double sum(vector<double> list)
{
    double sum = 0;
    for(double num : list)
        sum += num;
    return sum;
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

double mean(vector<double> list) {
    return sum(list)/list.size();
}

double min(vector<double> list)
{
    double smallest = list[0];
    for(int i=1; i<list.size(); ++i) {
        if(list[i] < smallest) smallest = list[i];
    }
    return smallest;
}

double max(vector<double> list)
{
    double largest = list[0];
    for(int i=1; i<list.size(); ++i) {
        if(list[i] > largest) largest = list[i];
    }
    return largest;
}

int main()
{
    vector<double> distances;
    cout << "Enter a list of numbers: ";
    for(double temp; cin>>temp;){
        distances.push_back(temp);
    }

    cout << "Total distance: " << sum(distances) << '\n';
    cout << "Smallest distance: " << min(distances) << '\n';
    cout << "Largest distance: " << max(distances) << '\n';
    cout << "Mean distance: " << mean(distances) << '\n';
}