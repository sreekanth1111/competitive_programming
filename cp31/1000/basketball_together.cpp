#include<bits/stdc++.h>

using namespace std;

int main(){
        
        long long n, d; cin >> n >> d;
        vector<long long>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());


        int count = 0;
        int power = 0;
        int k = 0;
        int used = 0;

        for(int i=n-1; i>=0;i--){
            power = arr[i];
            k = d/power + 1;

            if(n>=(used+k)){
                used += k;
                count++;
            }
            else{
                break;
            }
            
            
        }

        cout << count << endl;

    
    
}