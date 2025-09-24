#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long len = (n*(n-1))/2;
        vector<long long> b(len),a(n,0);
        map<long long, int> mp;

        for(int i=0; i<len; i++) cin >> b[i];

        sort(b.begin(),b.end());

        for(int i=0; i<len; i++) mp[b[i]]++;

        long long count = 0, ele = 0, i = 0;
        for(auto it : mp){
            ele = it.first;
            count = it.second;
            while(count!=0){
                a[i] = ele;
                count -= (n-i-1);
                i++;
            }
        }
        a[n-1] = ele;

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;



    }
}