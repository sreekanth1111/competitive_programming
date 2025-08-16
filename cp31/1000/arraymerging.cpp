#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n+1),b(n+1);
        vector<int>fa(2*n+1), fb(2*n+1);
        int count = 0;

        for(int i=1; i<=n; i++){
            cin >> a[i];
        }

        for(int i=1; i<=n; i++){
            cin >> b[i];
        }

        int ind = 1;
        for(int i=2; i<=n; i++){
            if(a[i-1]!=a[i]){
                fa[a[i-1]] = max(fa[a[i-1]],i-ind);
                ind = i;
            }
        }
        fa[a[n]] = max(fa[a[n]],n-ind+1);

        ind =1;
        for(int i=2; i<=n; i++){
            if(b[i-1]!=b[i]){
                fb[b[i-1]] = max(fb[b[i-1]],i-ind);
                ind = i;
            }
        }
        fb[b[n]] = max(fb[b[n]],n-ind+1);

        count = 0;
        for(int i=1; i<=2*n; i++){
            count = max(count,fa[i]+fb[i]);
        }
        cout << count << endl;
    }
    
}