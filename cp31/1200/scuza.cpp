#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,q; cin >> n >> q;
        vector<long long> a(n),b(q),p(n,0),maxpre(n,0),res(q,0);

        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<q; i++) cin >> b[i];

        p[0] = a[0]; maxpre[0] = a[0];
        for(int i=1; i<n; i++){
            p[i] = p[i-1] + a[i];
            maxpre[i] = max(maxpre[i-1],a[i]);
        }

        for(int i=0; i<q; i++){
            long long ind = upper_bound(maxpre.begin(),maxpre.end(),b[i])-maxpre.begin();
            if(ind==0) res[i] = 0;
            else res[i] = p[ind-1];
        }

        for(int i=0; i<q; i++){
            cout << res[i] << " ";
        }
        cout << endl;





    }
}