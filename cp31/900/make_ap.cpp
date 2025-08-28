#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long a,b,c; cin >> a >> b >> c;
        int m1 = (2*b-c)%a;
        int m2 = (a+c)%(2*b);
        int m3 = (2*b-a)%c;
        int m4 = (2*b-c)/a;
        int m5 = (a+c)/(2*b);
        int m6 = (2*b-a)/c;

        if((m1==0 && m4>0) || (m2==0 && m5>0) || (m3==0 && m6>0)) cout << "YES" << endl;
        else cout << "NO" << endl;



    }
    
}