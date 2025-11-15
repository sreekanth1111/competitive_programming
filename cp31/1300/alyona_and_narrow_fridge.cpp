#include<bits/stdc++.h>

using namespace std;

bool check(long long k, vector<long long>&a, long long h){
    vector<long long> b(k);
    for(int i=1; i<=k; i++) b[i-1] = a[i];
    sort(b.rbegin(),b.rend());

    long long total = 0;
    for(int i=0; i<k; i+=2){
        total += b[i];
    }
    return total<=h;
}

int main(){
    
    
    long long n,h; cin >> n >> h;
    vector<long long> a(n+1);
    for(int i=1; i<=n; i++) cin >> a[i];


    long long l = 0, r = n+1;
    while(r-l>1){
        long long mid = (l+r) >> 1;
        if(check(mid,a,h)){
            l = mid;
        }
        else{
            r = mid;
        }
    }

    cout << l << endl;
    
}