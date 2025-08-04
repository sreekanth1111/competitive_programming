#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    bool res[t];

    for(int i=0; i<t; i++){
        int n; cin >> n;
        int val1 = n-1;
        int val2 = n+1;

        if((val1%3==0) || (val2%3==0)){
            res[i] = true;
        }
        else{
            res[i] = false;
        }
    }

    for(int i=0; i<t; i++){
        if(res[i]){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }

}