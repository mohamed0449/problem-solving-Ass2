//File: A2_S11_20220472_12.cpp
//Purpose: Part1:Q12: implementation of the phishing program
//Author: Mohab Mohammad Abdelwahed
//Section: S11
//ID: 20220472
//TA: Eng. Samar
//Date: 1 Nov 2023

//includes of basic library <iostream> <map> <fstream>
//#include <iostream>
//#include <map>
//#include <fstream>
//#include <string>
//using namespace std;
//
//main function that implements the phishing algorithm
//int main(){
//    int phishingWords=30; //declaration of an integer variable that represents the number of phishing words that are looked for, that are 30
//    //declaration of a map and assigning the 30 phishing words each with the level of its common occurence in phishing emails (1->3)
//    map <string,int> m;
//    m["Urgent"]=2;
//    m["Verification Required"]=2;
//    m["need urgent help"]=2;
//    m["Important! Your password is about to expire"]=3;
//    m["Action required"]=3;
//    m["account"]=1;
//    m["verify"]=1;
//    m["alert"]=1;
//    m["Confirm"]=2;
//    m["Login"]=2;
//    m["security"]=1;
//    m["Update"]=2;
//    m["lottery"]=3;
//    m["Claim your prize"]=3;
//    m["Click here"]=3;
//    m["click on the link"]=3;
//    m["free"]=3;
//    m["credit card"]=2;
//    m["bank"]=1;
//    m["Your account will be suspended"]=3;
//    m["suspicious activity"]=2;
//    m["Confirm your personal information"]=2;
//    m["Hello"]=1;
//    m["request"]=1;
//    m["purchase"]=1;
//    m["expenses"]=1;
//    m["Are you available?"]=3;
//    m["Are you at your desk?"]=3;
//    m["text"]=2;
//    m["call"]=2;
//
//    string line;
//    int total=0; //declaring an integer variable total that will hold the aggregate points and initializing it to 0
//    int points=0; //declaring an integer variable points that holds the total common occurence points and initializing it to 0
//    int numOccurence=0; //declaring an integer variable numOccurence that holds number of occurences of the word in the phishing email and initializing it to 0
//    ifstream file("D:\\games\\OOP A2\\Phishing.txt"); //opening the phishing email file "Phishing.txt"
//            map<string, int>::iterator it; //declaring a map iterator to loop on words in map
//            for(it = m.begin(); it != m.end(); ++it) { //loop on map words
//                file.clear(); //clears flags like EOF flag
//                file.seekg(0); //seeks beginning of file to read from start again for next word
//                while(getline(file, line)){ //get word from phishing file
//                    size_t i=line.find(it->first);
//                    while(i!=string::npos){
//                        numOccurence++;
//                        i=line.find(it->first, i+(it->first).length());
//                    }
////                    if (word == it->first) { //if the word in file equals the word in map, increment number of occurences
////                        numOccurence++;
////                    }
//                }
//                points = (it->second) * numOccurence; //calculate points of each word from the multiplication of the common occurence number and level of occurence
//                total += points; //add this number of points to the total
//
//                if(numOccurence!=0) { //if number of occurence is not equal to zero, print word, numbr of occurences and points assigned to word
//                    cout << "Phishing word/phrase: " << it->first << "\tNumber of occurences: " << numOccurence
//                         << "\tPoints assigned: " << points << endl;
//                }
//                numOccurence = 0; //reset number of occurences for next word
//                points = 0; //reset points for next word
//
//            }
//    cout<<"Total points: "<<total; //at the end, print the total
//    file.close(); //close the file
//    return 0;
//}