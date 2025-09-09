#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n,k; cin >> n >> k;
        vector<int> a(n),b(n),p(n),m(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        p[0] = a[0];
        for(int i=1; i<n; i++) p[i] = p[i-1] + a[i];

        m[0] = b[0];
        for(int i=1; i<n; i++) m[i] = max(m[i-1],b[i]);


        int i=min(n,k);
        int total = 0;
        
        while(i>0){
            total = max(total,p[i-1]+(k-i)*m[i-1]);
            i--;
        }

        cout << total << endl;
        
    }
}