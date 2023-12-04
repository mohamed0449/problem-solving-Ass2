//File: A2_S11_20220472_3.cpp
//Purpose: Part1:Q3: implementation of the split function
//Author: Mohab Mohammad Abdelwahed
//Section: S11
//ID: 20220472
//TA: Eng. Samar
//Date: 1 Nov 2023

//includes of basic libraries to be used: <iostream> and <vector>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//split function implementation (takes parameters: target, delimiter and returns: string vector)
//vector<string> split(string target, string delimiter){
//    vector<string> v; // define string vector to hold individual elements to be extracted from target string
//    string element=""; // declare empty element variable to hold individual extracted substrings to be added to returned vector
//    int i=0;
//    //loop on target string till end of it
//    while(i<target.length()){
//        //condition to check if selected letter is equal to first letter of delimiter
//        if(target[i]==delimiter[0]){
//            //define empty string delimiterSearch to store potential delimiter equivalent
//            string delimiterSearch = "";
//            //loop on delimiter length to take same length for delimiterSearch
//            for(int j=0;j<delimiter.length();++j){
//                delimiterSearch += target[i+j];
//            }
//            //condition to check equivalence of delimiterSearch to the actual delimiter
//            if(delimiterSearch==delimiter){
//                i+=delimiter.length(); //change i counter to skip delimiter substring
//                if(i==delimiter.length()){ //condition to check if delimiter was the start of target string
//                    continue; //if true, go straight to next loop as no element to be put in vector yet
//                }
//                v.push_back(element); //push element to vector
//                element=""; //reset element to empty string
//            }
//        }
//        //if selected letter is not equal to first lette of delimiter
//        else{
//            element+=target[i]; //concatenate it to element string
//            i++; // incriminate counter i
//        }
//
//    }
//    v.push_back(element); //after loop ends push last element
//    return v; //return vector of elements
//}


//main function to test the correct run and output of the split function

//int main(){
//    string input,delimiterOfInput;
//    vector<string> vec;
//    cout<<"enter line of input: ";
//    getline(cin,input);
//    cout<<"enter delimiter of input";
//    getline(cin,delimiterOfInput);
//    vec = split(input,delimiterOfInput);
//    for(int i=0;i<vec.size();++i){
//        cout<<vec[i]<<" ";
//    }
//    return 0;
//}