#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        vector<int> arr(n);

        for(auto &i:arr) cin >> i;

        int count = 0;
        bool countone = false;
        bool isdivisible = false;
        for(int i=0; i<n; i++){
            arr[i] %= k;
            arr[i] = k-arr[i];
            if(arr[i]==1) countone = true;
            else if(arr[i]%2==0) count++;
            if(arr[i]==k) isdivisible = true;
        }

        int val = 0;
        if(k!=4){
            if(isdivisible) val = 0;
            else val = *min_element(arr.begin(),arr.end());
            
        }
        else{
            if(isdivisible || max(0,2-count)==0) val = 0;
            else if(countone || max(0,2-count)==1) val = 1;
            else val = 2;
        }

        cout << val << endl;


    }
    
}