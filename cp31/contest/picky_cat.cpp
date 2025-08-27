#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<int> arr(n+1);

        for(int i=1; i<=n; i++){
            cin >> arr[i];
            arr[i] = abs(arr[i]);
        }

        int ele = arr[1];

        sort(arr.begin(),arr.end());

        int k = n/2;
        int ind = 0;

        for(int i=1; i<=n; i++){
            if(arr[i]==ele){
                ind = i;
                break;
            }
        }

        if(ind <= k+1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }



        



    }
    
}