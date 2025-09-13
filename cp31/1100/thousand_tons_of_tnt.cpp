#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long> a(n),p(n);

        for(int i=0; i<n; i++) cin >> a[i];

        p[0] = a[0];
        for(int i=1; i<n; i++) p[i] = p[i-1]+a[i];


        long long sum = 0, minval = 1e18, maxval = 0, diff=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                minval = 1e18; maxval = 0; sum = 0;

                for(int j=i-1; j<n; j+=i){
                    sum = p[j];
                    if((j-i)>=0) sum -= p[j-i];
                    minval = min(minval,sum);
                    maxval = max(maxval,sum);
                }
                diff = max(diff,maxval-minval);
            }
        }

        cout << diff << endl;


    }
}