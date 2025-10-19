#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n+1),m(n+1,0);

        for(int i=1; i<=n; i++){
            cin >> a[i];
            m[i] = max(m[i-1],a[i]);
        }

        long long cnt = 0;
        for(int i=n-1; i>=1; i--){
            if(i%2==0){
                if(a[i]<=a[i+1]){
                    a[i] = max(a[i],m[i]);
                    while(a[i]<=a[i+1]){
                        a[i+1]--; cnt++;
                    }
                }
            }
            else{
                if(a[i]>=a[i+1]){
                    a[i+1] = max(a[i+1],m[i+1]);
                    while(a[i]>=a[i+1]){
                        a[i]--; cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;


    }
    
}