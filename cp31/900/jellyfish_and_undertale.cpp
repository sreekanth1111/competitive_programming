#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a, b, n; cin >> a >> b >> n;
        vector<long long> arr(n);

        for(auto &i : arr){
            cin >> i;
        }

        long long sum = 0;

        for(int i=0; i<n; i++){
            
            if(arr[i]<=a-1){
                sum += arr[i];
            }
            else{
                sum += a-1;
            }
        }
        sum += b;

        cout << sum << endl;


    }
    
}