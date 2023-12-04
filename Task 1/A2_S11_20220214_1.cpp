/* File: A2_S11_20220214_1.cpp
 Purpose: solve task 1
 Author: Ammar Mohsen Abdulaziz
 Section: S11
 ID: 20220214
 TA: Samar Sabry
 Date: 30 Oct 2023*/

#include <iostream>
#include <string>

using namespace std;

int main() {
        string s;
        string t;
        bool f = true;  // To capitalize the first letter of the sentence

        // Read the input sentence, up to 100 characters
        cout << " Enter a sentence (up to 100 characters) : ";
        getline(cin, s);

        if (s.size() > 100) {
            cout <<"This sentence is too long (max 100 characters) " << "\n";
            return 1 ;
        }

        for (char c : s) {
            if (c == ' '|| c == '\n' || c == '\r') {
                // Replace consecutive spaces and line breaks with a single space
                if (t.back() != ' ') {
                    t += ' ';
                }
            }
            else if (c == '.') {
                // Replace the last character with a period if the sentence ends with multiple periods
                if (t.back() != '.') {
                    t += '.';
                }
            }
            else {
                // Capitalize the first letter and convert the rest to lowercase
                if (f) {
                    t += toupper(c);
                    f = false;
                }
                else {
                    t += tolower(c);
                }
            }
        }

        cout <<  t << "\n";

        return 0;
    }

