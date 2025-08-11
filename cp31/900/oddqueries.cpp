#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, q; cin >> n >> q;
        vector<int>arr(n);

        for(auto &i:arr){
            cin >> i;
        }

        vector<int>sum(n);
        sum[0] = arr[0];

        for(int i=1; i<n; i++){
            sum[i] = sum[i-1] + arr[i];
        }

        for(int i=0; i<q; i++){
            int l, r, k; cin >> l >> r >> k;
            int totalsum = sum[n-1];
            int change = k*(r+1-l);
            if(l-2 == -1){
                change -= sum[r-1];
            }
            else{
                change += sum[l-2] - sum[r-1];
            }
            totalsum += change;

            if(totalsum%2==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }

        }
        
    }

    
}