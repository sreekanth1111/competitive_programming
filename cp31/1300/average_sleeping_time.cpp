#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long n,k; cin >> n >> k;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    long long sum = 0;
    for(int i=0; i<k; i++) sum += a[i];

    long long totalsum = sum;
    for(int i=1; i<=n-k; i++){
        sum += a[i+k-1];
        sum -= a[i-1];
        totalsum += sum;
    }

    long double average = (long double)totalsum / (n-k+1);

    cout << fixed << setprecision(10) << average << endl;

}