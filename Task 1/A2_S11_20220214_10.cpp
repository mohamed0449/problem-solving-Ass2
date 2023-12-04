/* File: A2_S11_20220214_10.cpp
 Purpose: solve task 1
 Author: Ammar Mohsen Abdulaziz
 Section: S11
 ID: 20220214
 TA: Samar Sabry
 Date: 30 Oct 2023*/

#include <bits\stdc++.h>
using namespace std;
void M_A_B (string file,string file2) {
    map <string, string> m{
            {"فلسطين",     "ف/ل/س/ط/ي/ن/"},
            {"حرة",   "ح*ر*ة"},
            {"ستبقي",       "س&ت&ب&ق*ي"},
            {"عربية",      "ع^ر^ب^ي^ة"},
            {"الي", "ا#ل#ي"},
            {"الابد",     "ا@ل@ا@ب@د"},
    };
    ofstream f2(file2);
    ifstream f(file);
    string line;
    string word;
    while(getline(f,line)){
        istringstream iss(line);
        while(iss >> word){
            if(word == m.find(word)->first){
               f2 << m.find(word)->second << " ";
            }else{
                f2 << word << " ";
            }
        }
    }
}

int main(){
    M_A_B("messageFile.txt","outputFile.txt");
}

