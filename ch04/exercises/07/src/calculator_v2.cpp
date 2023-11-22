#include "std_lib_facilities.h"

vector<string> number_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

double add(double a , double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double divide(double a, double b)
{
    return a/b;
}

double multiply(double a, double b)
{
    return a*b;
}

string digit_to_word(int digit)
{
    if(digit < number_strings.size())
        return number_strings[digit];
    return "Digit is too large";
}

int word_to_digit(string word)
{
    for(int i=0; i<number_strings.size(); ++i) {
        if(number_strings[i] == word) return i;
    }

    return -99999;
} 

int main()
{
    double num1;
    double num2;
    string num1_spelled = "";
    string num2_spelled = "";
    char op;

    cout << "Enter digits or words? (1 or 2)";
    int choice;
    cin >> choice;

    if(choice == 1) {
        cout << "Enter two single digit numbers followed by an operator (+, -, *, /): ";
        cin >> num1 >> num2 >> op;
    }
    else if(choice == 2){
        cout << "Enter two single digit numbers (spelled out) followed by an operator (+, -, *, /): ";
        cin >> num1_spelled >> num2_spelled >> op;

        num1 = word_to_digit(num1_spelled);
        num2 = word_to_digit(num2_spelled);  
    }

    double result; 
    string operation;
    switch(op) {
        case '+':
            result = add(num1, num2);
            operation = "sum";
            break;
        case '-':
            result = subtract(num1, num2);
            operation = "difference";
            break;
        case '*':
            result = multiply(num1, num2);
            operation = "multiplication";
            break;
        case '/':
            result = divide(num1, num2);
            operation = "division";
            break;
        default:
            cout << "Unknown operator.\n";
            operation = "unknown";
            break;
    }

    if(operation != "unknown")
        cout << "The " << operation << " of " << num1 << " and " << num2 << " is " << result << '\n';
}