#include<bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        string str; cin >> str;
        int leftcount = 0,imbalance = 0;

        for(char ch : str){
            if(ch=='('){
                leftcount++;
            }
            else{
                if(leftcount!=0){
                    leftcount--;
                }
                else{
                    imbalance++;
                }
            }
        }

        cout << imbalance << endl;

    }
    
}