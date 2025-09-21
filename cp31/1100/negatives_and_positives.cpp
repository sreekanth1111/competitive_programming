#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t; cin >> t; 
    while(t--){

        long long n; cin >> n;
        vector<long long> a(n);
        long long count = 0, val = 0, sum = 0;

        for(int i=0; i<n; i++){
            cin >> val;
            if(val<0) count++;
            a[i] = abs(val);
            sum += a[i];
        }

        sort(a.begin(),a.end());

        if(count%2!=0) sum -= 2*a[0];

        cout << sum << endl;
    }
    
}