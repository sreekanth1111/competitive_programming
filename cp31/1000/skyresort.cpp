#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k, q; cin >> n >> k >> q;
        vector<int>arr(n);
        long long total = 0;
        long long count = 0;

        for(auto &i:arr){
            cin >> i;
        }

        for(int i=0; i<n; i++){
            if(arr[i]<=q){
                arr[i] = 1;
            }
            else{
                arr[i] = 0;
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count++;
            }
            else{
                if(count>=k){
                    total += (count-k+1)*(count-k+2)/2;
                }
                count = 0;
            }
        }

        if(count>=k){
            total += (count-k+1)*(count-k+2)/2;
        }

        cout << total << endl;
    }

    
}