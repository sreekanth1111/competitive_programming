#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x,y; cin >> n >> x >> y;
        long long countx=0, county=0, countxy=0, sum=0;
        countx = n/x;
        county = n/y;
        countxy = n/(x*(y/gcd(x,y)));
        countx -= countxy;
        county -= countxy;

        sum = ((n*(n+1)/2)-((n-countx)*(n-countx+1)/2)) - (county*(county+1)/2);

        cout << sum << endl;
    }
}