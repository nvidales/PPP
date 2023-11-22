#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;

    cout << "Enter the name of another friend: ";
    string friend_name;
    cin >> friend_name;

    cout << "Enter the sex of your friend (f/m): ";
    char friend_sex;
    cin >> friend_sex;

    cout << "Enter age of the recipient: ";
    int age;
    cin >> age;

    cout << "Dear " << first_name << ",\n";
    cout << "\n\tHow are you? I am fine. I miss you. I hope to see you again on my next adventure. It really wouldn't be the same without you.";
    cout << " Have you seen " << friend_name << " lately?";

    


    if(friend_sex == 'f')
    {
        cout << " If you you see her please ask her to call me.";
    }
    else if(friend_sex == 'm')
    {
        cout << " If you see him please ask him to call me.";
    }

    if(age <= 0 || age > 110){
        cout << " You're kidding!";
    }
    else if(age < 12)
    {
        cout << " Next year you will be " << (age+1) << ".";
    }
    else if(age == 17)
    {
        cout << " Next year you will be able to vote.";
    }
    else if(age >70)
    {
        cout << " I hope you are enjoying retirement.";
    }


    cout << "\nYours sincerely, \n\nNancy";

}