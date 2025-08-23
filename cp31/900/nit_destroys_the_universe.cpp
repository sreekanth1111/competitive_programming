#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long > arr(n);
        int left_ind = -1,right_ind = -1;
        int zero_count = 0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                left_ind = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(arr[i]!=0){
                right_ind = i;
                break;
            }
        }

        for(int i=left_ind; i<=right_ind; i++){
            if(arr[i]==0){
                zero_count++;
                break;
            }
        }

        if(left_ind == -1 && right_ind == -1){
            cout << 0 << endl;
        }
        else if(zero_count == 0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }



        


    }
    
}