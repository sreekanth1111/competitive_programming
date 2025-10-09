#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,k; cin >> n >> k;
        vector<long long> a(n),b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        bool ispossible = true, isok = true;
        long long total = -1;
        for(int i=0; i<n; i++){
            if(b[i]!=-1){
                ispossible = false;
                if(total!=-1){
                    if(total!=a[i]+b[i]){
                        isok = false;
                    }
                }
                else total = a[i]+b[i];
            }
        }


        long long minval = *min_element(a.begin(),a.end());
        long long maxval = *max_element(a.begin(),a.end());
        bool isright = true;
        
        for(int i=0; i<n; i++){
            long long sum = a[i]+b[i];
            if(((minval+k)<sum) || (b[i]!=-1 && sum<maxval)){
                isright = false;
                break;
            }
        }

        if(!isok || !isright) cout << 0 << endl;
        else if(ispossible) cout << k+minval+1-maxval << endl;
        else cout << 1 << endl;


    }
    
}