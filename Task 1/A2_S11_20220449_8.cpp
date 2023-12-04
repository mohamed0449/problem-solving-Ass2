// File: A2_S11_20220449_8.cpp
// Purpose: solve task 1
// Author: Mohamed Gomaa Mohamed
// Section: S11
// ID: 20220449
// TA: Samar Sabry
// Date: 27 Oct 2023

#include <bits/stdc++.h>
#define fudou cin.tie(0),cout.tie(0),cin.sync_with_stdio(0),cout.sync_with_stdio(0);
#define ll long long
#define M ll r;cin>>r;while(r--)
#define E '\n'
#define yes cout<<"YES"<<E;
#define no cout<<"NO"<<E;
using namespace std;

void pattern(int n, int i) {
    if (n == 1)
        cout << "*";
     else {
        // Recursive case
        int half = n / 2;
        // Generate the top half of the pattern
        pattern(half, i);
        cout << endl;
        for (int j = 0; j < i; j++)
            cout << " ";
        // Generate the bottom half of the pattern
        pattern(half, i + half);
    }
}
int main() {
    int n;
    cout << "Enter the value of n (a power of 2 greater than zero): ";
    cin >> n;
    if (n <= 0 || (n & (n - 1)) != 0) {
        cout << "Invalid input. n must be a power of 2 greater than zero." << endl;
        return 1;
    }
    pattern(n, 0);
    cout << endl;
}

//This program defines a recursive function pattern that generates the fractal pattern.
//The pattern function takes two arguments:
//n (the length of the current line) and i (the starting column position of the line).
//The program first checks if the input n is a power of 2 greater than zero.
//If it's a valid input, the pattern function is called with the specified n and starting column position 0.
//The pattern is generated and printed to the console.
//
//For example, you can call the program with n = 8, and it will generate the pattern you described.