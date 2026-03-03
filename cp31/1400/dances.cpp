#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m; cin >> n >> m;
        vector<long long> a(n),b(n);
        a[0] = 1;
        for(int i=1; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        long long count = 0;
        int j = n-1;
        for(int i=n-1; i>=0; i--){
            if(a[i] >= b[j]){
                count++;
                if(i==0) break;
            }
            else{
                j--;
            }
        }

        cout << count << endl;
        

    }
    
}