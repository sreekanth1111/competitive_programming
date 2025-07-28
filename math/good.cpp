#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int ones, zeroes;
    bool ispossible[t];

    for(int i=0; i<t; i++){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        ones = 0;
        zeroes = 0;

        for(char ch : str){
            if(ch=='1') ones++;
            else zeroes++;
        }

        if(abs((zeroes-ones)) == 2*k) ispossible[i] = true;
        else ispossible[i] = false;

    }

    for(int i=0; i<t; i++){
        if(ispossible[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}