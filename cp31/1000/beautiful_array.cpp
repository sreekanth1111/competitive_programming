#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k,b,s; cin >> n >> k >> b >> s;

        if(s<b*k || (s>b*k+(k-1)*n )){
            cout << -1 << endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(i==0){
                    long long val = b*k + min(s-b*k,k-1);
                    cout << val << " ";
                    s -= val;
                }
                else{
                    long long val = min(s,k-1);
                    cout << val << " ";
                    s -= val;
                }
            }
            cout << endl;
        }
    }
    
}