#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<pair<long long,int>> a(n);
        vector<long long> ind(n),pre(n),b(n);

        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(),a.end());

        pre[0] = a[0].first;
        b[0] = a[0].first;
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + a[i].first;
            b[i] = a[i].first;
        }

        // find cutoff L
        int L = n-1;
        for(int i=n-2; i>=0; i--){
            if(pre[i] >= a[i+1].first) L = i;
            else break;
        }

        for(int i=0; i<n; i++){
            int pos = int(lower_bound(b.begin(), b.end(), a[i].first) - b.begin());
            if(pos >= L) ind[a[i].second] = n - pos - 1;
            else ind[a[i].second] = n - L;
        }

        
        for(int i=0; i<n; i++){
            cout << ind[i] << " ";
        }
        cout << endl;
    }
}