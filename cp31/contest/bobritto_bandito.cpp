#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m,l,r; cin >> n >> m >> l >> r;

        if(l==0){
            r -= (n-m);
        }
        else{
            if(r==0) l += (n-m);
            else{
                if(abs(l)>=(n-m)) l += n-m;
                else{
                    r -= (n-m-abs(l));
                    l = 0;
                }
            }
        }

        cout << l << " " << r << endl;

    }
    
}