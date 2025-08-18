#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        int count = 1;

        if(n%2!=0){
            cout << 1 << endl;
        }
        else{
            while(n%count==0){
                count++;
            }
            cout << count-1 << endl;
        }
        


    }
    
}