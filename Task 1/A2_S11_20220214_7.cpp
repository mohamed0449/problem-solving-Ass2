/* File: A2_S11_20220214_7.cpp
 Purpose: solve task 1
 Author: Ammar Mohsen Abdulaziz
 Section: S11
 ID: 20220214
 TA: Samar Sabry
 Date: 30 Oct 2023*/


#include "bits/stdc++.h"
using namespace std ;
struct dominoT {
    int LD; //left dots
    int RD; //right dots
};


bool FormsDominoChainHelper(vector<dominoT> & dominos,vector<bool> &usedDominos,vector<dominoT>& chain,int chainLength){

    if(chainLength==dominos.size()){
        return true;
    }

    for (int i = 0; i < dominos.size(); ++i) {
        if(!usedDominos[i]){
            if(chain.empty() || chain.back().RD == dominos[i].LD){
                chain.push_back(dominos[i]);
                usedDominos[i]=true;
                if(FormsDominoChainHelper(dominos,usedDominos,chain,chainLength+1)){
                    return true;
                }
                chain.pop_back();

                usedDominos[i]=false;
            }
        }
    }
    return false;
}



bool FormsDominoChain(vector<dominoT> & dominos){
 /*test case
  vector<dominoT> dominosT={
           {1,4},
           {4,4},
           {2,6},
           {6,1},
           {4,3},
   };*/


    vector<dominoT> chain;
    vector<bool> usedDominos(dominos.size(),false);
    if(FormsDominoChainHelper(dominos, usedDominos, chain, 0)){
        for (const dominoT & i:chain) {
            cout << i.LD <<'|'<<i.RD<<(&i == &chain.back() ? "\n" : " - ");
        }
        return true;
    }
    return false;
};

int main() {
        vector<dominoT> dominos={
            {1,4},
            {4,4},
            {2,6},
            {6,1},
            {4,3},
    };
    FormsDominoChain(dominos);
    return 0;
}