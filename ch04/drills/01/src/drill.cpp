#include "std_lib_facilities.h"

double max(double a, double b)
{
    double max = a;
    if(b > a) max = b;
    return max;
}

double min(double a, double b)
{
    double min = a;
    if(b < a) min = b;
    return min;
}

bool equal(double a, double b)
{
    if(a == b) return true;
    return false;
}

double absolute_value(int a)
{
    if(a < 0)
        return -a;
    else
        return a;
}
bool almost_equal(double a, double b)
{
    double difference = a - b;
    double equality_requirement = 1.0/100;
    bool almost_equal = false;
    
    if(absolute_value(a-b) < equality_requirement) almost_equal = true;

    return almost_equal;
}

double convert_to_m(double a, string unit)
{
    constexpr double cm_per_meter = 100;
    constexpr double cm_per_inch = 2.54;
    constexpr double in_per_feet = 12.0;

    if(unit == "cm") {
        return a/cm_per_meter;
    }
    else if (unit == "m") {
        return a;
    }
    else if (unit == "in") {
        return a * cm_per_inch / cm_per_meter;
    }
    else if (unit == "ft") {
        return a*in_per_feet*cm_per_inch/cm_per_meter;
    }
    else {
        return -1;
    }
}

int main()
{
    double num = -1;
    string unit = " ";
    double smallest_m = -1;
    double largest_m = -1;
    bool first_run = true;
    vector<double> numbers;
    double sum = 0;

    cout << "Enter a number followed by a unit(cm, m, in, ft): ";
    while(cin>>num>>unit)
    {
        cout << "Number: " << num << '\n';
        cout << "Unit: " << unit << '\n';

        double num_m = convert_to_m(num, unit);
        sum += num_m;
        numbers.push_back(num_m);

        if(num_m != -1) {
            if(!first_run) {
                smallest_m = min(num_m, smallest_m);
                largest_m =  max(num_m, largest_m);
            }
            else {
                smallest_m = num_m;
                largest_m = num_m;
                first_run = false;
            }
        }
        else {
            cout << "Unknown unit.\n";
        }
        
        cout << "Enter a number followed by a unit(cm, m, in, ft): ";
    }

    sort(numbers);
    for(double num : numbers) {
        cout << num << 'm' << '\n';
    }
    cout << "Total number of values entered: " << numbers.size() << "\n";
    cout << "The sum is: " << sum << "m\n";
    cout << "The smallest is: " << smallest_m << "m\n";
    cout << "The largest is: " << largest_m << "m\n";
}