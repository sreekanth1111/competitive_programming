#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,s; cin >> n >> s;
        vector<int> a(n);
        long long total = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
        } 

        if(total<s){
            cout << -1 << endl;
        }
        else if(total==s){
            cout << 0 << endl;
        }
        else{
            
            int l = 0, sum = 0, len = 0;

            for(int r=0; r<n; r++){
                sum += a[r];
                while(l<=r && sum>s){
                    sum -= a[l];
                    l++;
                }
                if(sum==s){
                    len = max(len,r-l+1);
                }
            }

            cout << n-len << endl;
        }
        
    }
    
}