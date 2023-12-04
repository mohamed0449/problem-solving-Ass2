//File: A2_S11_20220472_6.cpp
//Purpose: Part1:Q6: implementation of the binaryPrint (a) and numbers (b) functions
//Author: Mohab Mohammad Abdelwahed
//Section: S11
//ID: 20220472
//TA: Eng. Samar
//Date: 1 Nov 2023

//include basic library: <iostream>
#include<iostream>
using namespace std;

//make class called Numbers that includes both wanted functions
class Numbers {
    public:
    //implementation of the binaryPrint function taking integer parametr n
    static void binaryPrint(int n){
        if(n==0){ //base case, if integer number n equals zero the recursion stops
            return;
        }
        binaryPrint(n/2); //calling function with number divided by 2
        cout<<n%2; //printing of number modulus 2
    }

    //implementation of numbers function taking parameters string prefix and integer k
    static void numbers(string prefix, int k) {
        if (k == 0) { //base case, if k equals zero, just the prefix is printed and recursion stops
            cout<<prefix;
        } else {
            //if k does not equal zero, call function again with updated prefix and k less 1
            //prefix is once called with a concatenated '0' and another time with a concatenated '1'
            numbers(prefix+'0',k-1);
            numbers(prefix+'1',k-1);
        }
        cout<<"\n"; //prints new line to separate results
    }
};


//main function for testing purposes

//int main(){
//    Numbers n;
//    cout<<"enter number for binary conversion: ";
//    int binaryPrintInput;
//    cin>>binaryPrintInput;
//    n.binaryPrint(binaryPrintInput);
//    cout<<"\n";
//    cout<<"enter prefix and number to make combinations: ";
//    string prefix;
//    int k;
//    cin>>prefix>>k;
//    n.numbers(prefix,k);
//}
