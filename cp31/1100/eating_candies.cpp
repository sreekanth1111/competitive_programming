#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long > a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        long long i = 0, j = n-1, sum_left = 0, sum_right = 0;
        long long ans = 0;
        
        while(i<=j){
            if(sum_left<sum_right){
                sum_left += a[i++];
            }
            else if(sum_left>sum_right){
                sum_right += a[j--];
            }
            else{
                ans = max(ans,(i) + (n-j-1));
                sum_left += a[i++];
            }
        }

        if(sum_left==sum_right){
            ans = max(ans, (i) + (n-j-1));
        }

        cout << ans << endl;
    }
    
}