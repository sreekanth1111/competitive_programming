#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        vector<int>arr(n);
        long long total = 0;
        long long count = 0;

        for(auto &i:arr){
            cin >> i;
        }

        sort(arr.begin(), arr.end());

        count = 1;
        for(int i=0; i<n-1; i++){
            if((arr[i+1]-arr[i])<=k){
                count++;
            }
            else{
                count = 1;
            }
            total = max(total,count);

       }
       if(n==1){
            total = 1;
       }
       

       cout << n-total << endl;
    }

    
}