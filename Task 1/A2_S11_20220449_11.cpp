// File: A2_S11_20220449_11.cpp
// Purpose: solve task 1
// Author: Mohamed Gomaa Mohamed
// Section: S11
// ID: 20220449
// TA: Samar Sabry
// Date: 26 Oct 2023

#include <bits/stdc++.h>
#define fudou cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define ll long long
#define M ll r; cin >> r; while (r--)
#define yes cout << "YES" << E;
#define no cout << "NO" << E;
#define fre freopen("lettercasepermutation.in", "r", stdin);
using namespace std;

bool compareCharacter(ifstream& file1, ifstream& file2) {
    char ch1, ch2;
    int lineNum = 1;
    while (file1.get(ch1) && file2.get(ch2)) {
        if (ch1 != ch2) {
            cout << "Files are different at line " << lineNum << ":" << endl;
            cout << "File 1: " << ch1 << endl;
            cout << "File 2: " << ch2 << endl;
            return false;
        }
        if (ch1 == '\n') {
            lineNum++;
        }
    }
    if (file1.get(ch1) || file2.get(ch2)) {
        cout << "Files have different lengths." << endl;
        return false;
    }
    cout << "Files are identical." << endl;
    return true;
}
bool compareWord(ifstream& file1, ifstream& file2) {
    string word1, word2;
    int lineNum = 1;
    while (file1 >> word1) {
        if (!(file2 >> word2) || word1 != word2) {
            cout << "Files are different at line " << lineNum << ":" << endl;
            cout << "File 1: " << word1 << endl;
            cout << "File 2: " << word2 << endl;
            return false;
        }
        char ch;
        while (file1.get(ch)) {
            if (ch == '\n') {
                lineNum++;
                break;
            } else if (ch != ' ' && ch != '\t') {
                cout << "Files have different word delimiters at line " << lineNum << ":" << endl;
                return false;
            }
        }
    }
    string remainingWord;
    if (file2 >> remainingWord) {
        cout << "Files have different lengths." << endl;
        return false;
    }
    cout << "Files are identical." << endl;
    return true;
}

int main() {
    string file1, file2;
    char comparisonType;
    cout << "Enter the name of the first file: ";
    cin >> file1;
    cout << "Enter the name of the second file: ";
    cin >> file2;
    ifstream fileStream1(file1);
    ifstream fileStream2(file2);
    if (!fileStream1.is_open() || !fileStream2.is_open()) {
        cerr << "Failed to open one or both files." << endl;
        return 1;
    }
    cout << "Choose comparison type (c for character, w for word): ";
    cin >> comparisonType;
    bool result = false;
    if (comparisonType == 'c') {
        result = compareCharacter(fileStream1, fileStream2);
    } else if (comparisonType == 'w') {
        result = compareWord(fileStream1, fileStream2);
    } else {
        cerr << "Invalid comparison type. Use 'c' for character or 'w' for word." << endl;
    }
    fileStream1.close();
    fileStream2.close();
    if (result) {
        cout << "Files are identical." << endl;
    }
    return 0;
}