#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n),b(n),res(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        for(int i=0; i<n; i++) res[i] = a[i]-b[i];

        sort(res.begin(),res.end());

        long long count = 0;
        long long i=0,j=n-1;

        while(i<j){
            while(j>i && res[i]+res[j]>0) j--;
            if(i<j) count++;
            i++; j--;
        }

        cout << count << endl;

        
    }
    
}