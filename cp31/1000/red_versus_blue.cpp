#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n,r,b; cin >> n >> r >> b;
        int count = r/(b+1);
        int rem = r%(b+1);

        int i=0;
        for(int i=0; i<b+1; i++){
            for(int j=0; j<count ; j++) cout << "R";

            if(rem){
                cout << "R";
                rem--;
            }

            if(i<b){
                cout << "B";
            }
        }
        cout << endl;


    }
    
}