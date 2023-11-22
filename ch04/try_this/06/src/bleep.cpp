// Input a set of worsd and bleep out predefined unwanted words

#include "std_lib_facilities.h"

bool in_vector(vector<string>words, string word) {
    bool exists = false;
    for(int j=0; j<words.size(); ++j){
        if(words[j] == word)
            exists = true;
    }
    return exists;
}

int main() 
{
    vector<string> words;
    vector<string> disliked_words = {"Broccoli", "quack", "boredom"};

    for(string temp; cin>>temp;){
        words.push_back(temp);
    }

    cout << "Number of words: " << words.size() << '\n';

    sort(words);

    for(int i=0; i < words.size(); ++i) {
        if(i == 0 || words[i-1]!=words[i])
        {
            if(in_vector(disliked_words, words[i]))
                cout << "BLEEP" << "\n";
            else
                cout << words[i] << "\n";
        }
            
            
    }
}