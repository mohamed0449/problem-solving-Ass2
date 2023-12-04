//File: A2_S11_20220472_9.cpp
//Purpose: Part1:Q9: implementation of the teddy bear game
//Author: Mohab Mohammad Abdelwahed
//Section: S11
//ID: 20220472
//TA: Eng. Samar
//Date: 1 Nov 2023

#include <iostream>
using namespace std;


class Teddy{
public:
    static bool bears(int n){
        if(n==42){
            return true;
        }
        if(n%5==0){
            if(bears(n - 42)==true) {
                return true;
            }
        }
        if(n%2==0){
            if(bears(n / 2)==true) {
                return true;
            }
        }
        if(n%3==0||n%4==0) {
            if(((n % 10) * ((n % 100) / 10)) !=0) {
                if (bears(n - ((n % 10) * ((n % 100) / 10))) == true) {
                    return true;
                }
            }
        }
        return false;
    }
};
//
//int main(){
//    int n;
//    cout<<"enter number of teddy bears: ";
//    cin>>n;
//    Teddy t;
//    if(t.bears(n)){
//        cout<<"You win!!";
//    }
//    else{
//        cout<<"Better luck next time!";
//    }
//}
