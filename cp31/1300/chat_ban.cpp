#include<bits/stdc++.h>

using namespace std;

bool check(long long mid, long long k, long long x){
    long long sum = 0;
    if(mid<=k){
        sum += mid*(mid+1)/2;
    }
    else{
        sum += k*(k+1)/2;
        sum += (k*(k-1)/2) - ((k-(mid-k)-1)*(k-(mid-k))/2);
    }
    return sum>=x;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        long long k,x; cin >> k >> x;
        long long left = -1, right = 2*k-1 , mid;
        while(right-left>1){
            mid = (left+right) >> 1;
            if(check(mid,k,x)) right = mid;
            else  left = mid;
        }
        cout << right << endl;
        
    }
    
}