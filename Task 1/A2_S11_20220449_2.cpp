// File: A2_S11_20220449_2.cpp
// Purpose: solve task 1
// Author: Mohamed Gomaa Mohamed
// Section: S11
// ID: 20220449
// TA: Samar Sabry
// Date: 30 Oct 2023

#include <bits/stdc++.h>
#define fudou cin.tie(0),cout.tie(0),cin.sync_with_stdio(0),cout.sync_with_stdio(0);
#define ll long long
#define M ll r;cin>>r;while(r--)
#define E '\n'
#define yes cout<<"YES"<<E;
#define no cout<<"NO"<<E;
using namespace std;

bool isPunctuation(char c) {
    return ispunct(c) && c != '\'';
}

bool isAlpha(char c) {
    return isalpha(c);
}

bool isBoundary(char c) {
    return c == ' ' || c == '.' || isPunctuation(c);
}

void convertSpeech(string &sentence) {
    string result,word;
    bool capitalize = true;
    for (char c : sentence) {
        if (isAlpha(c) || c == '\'') {
            word += c;
            if (isupper(c)) {
                capitalize = true;
            }
        } else if (isBoundary(c)) {
            if (!word.empty()) {
                if (word == "he") {
                    word = "he or She";
                }
                if (word == "He") {
                    word = "He or She";
                }
                if (word == "him") {
                    word = "him or her";
                }
                if (word == "his") {
                    word = "his or her";
                }

                if (capitalize) {
                    word[0] = toupper(word[0]);
                }
                result += word;
                word.clear();
                capitalize = false;
            }
            result += c;
        }
    }
    sentence = result;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    convertSpeech(sentence);
    cout<<"Converted sentence: "<<sentence<<endl;

}
