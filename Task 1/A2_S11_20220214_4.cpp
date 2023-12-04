/* File: A2_S11_20220214_4.cpp
 Purpose: solve task 1
 Author: Ammar Mohsen Abdulaziz
 Section: S11
 ID: 20220214
 TA: Samar Sabry
 Date: 30 Oct 2023*/

#include <iostream>
using namespace std;


bool Prime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 2) {
        cout << "There are no prime numbers in the given range." << "\n";
    } else {
        cout << "Prime numbers between 2 and " << n << " are: ";
        for (int i = 2; i <= n; i++) {
            if (Prime(i)) {
                cout << i << " ";
            }
        }
    }

    return 0;
}
