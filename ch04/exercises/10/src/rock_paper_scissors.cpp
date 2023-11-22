#include "std_lib_facilities.h"

int main()
{
    vector<int> random_numbers;
    cout << "Enter a list of numbers from 0-2 to represent the computer's rock (0), paper(1), scissors(2) choices: ";
    for(int r; cin>>r;){
        random_numbers.push_back(r);
    }
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for(int i=0; i<random_numbers.size(); ++i){
        cin.clear();
        cout << "\n\nRock, paper, scissors? ('r', 'p', 's'): ";
        char choice;
        cin >> choice;

        switch(choice) {
            case 'r':
                cout << "Player: rock\n";
                // rock
                if(random_numbers[i] == 0) {
                    cout << "Computer: rock\n";
                    cout << "It's a tie!\n";
                }
                // paper
                else if(random_numbers[i] == 1){
                    cout << "Computer: paper\n";
                    cout << "Computer wins!\n";
                }
                // scissors
                else if(random_numbers[i] == 2) {
                    cout << "Computer: scissors\n";
                    cout << "You win!\n";
                }
                break;
            case 'p':
                cout << "Player: paper\n";
                // rock
                if(random_numbers[i] == 0) {
                    cout << "Computer: rock\n"; 
                    cout << "You win!\n";
                }
                // paper
                else if(random_numbers[i] == 1){
                    cout << "Computer: paper\n";
                    cout << "It's a tie!\n";
                }
                // scissors
                else if(random_numbers[i] == 2) {
                    cout << "Computer: scissors\n";
                    cout << "Computer wins!\n";
                }
                break;
            case 's':
                cout << "Player: scissors\n";
                // rock
                if(random_numbers[i] == 0) {
                    cout << "Computer: rock\n";
                    cout << "Computer wins!\n";
                }
                // paper
                else if(random_numbers[i] == 1){
                    cout << "Computer: paper\n";
                    cout << "You win!\n";
                }
                // scissors
                else if(random_numbers[i] == 2) {
                    cout << "Computer: scissors\n";
                    cout << "It's a tie!\n";
                }
                break;
            default:
                cout << "Unknown input. Try again.\n";
                break;
        }
    }
}