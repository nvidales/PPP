#include "std_lib_facilities.h"

vector<string> number_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

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
    cout << "Enter a digit: ";
    int digit;
    cin >> digit;

    cout << digit_to_word(digit) << '\n';

    cout << "Enter a digit as a word: ";
    string word;
    cin >> word;
    cout << word_to_digit(word) << '\n';
}