#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        int length = n*k;
        vector<int> arr(length);

        for(auto &i:arr){
            cin >> i;
        }

        long long total = 0;
        int x = (n+1)/2;
        int count = 0;

        if(n%2==1){
            x--;
        }

        for(int i=length-1-x; i>=0; i-=x){
            if(count == k){
                break;
            }
            total += arr[i];
            count++;
            i--;
        }
        cout << total << endl;
    }
    
}