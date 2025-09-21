#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long n,q; cin >> n >> q;
    vector<long long> a(n);
    vector<long long> update(n,0), updatetime(n,0);
    long long value = 0, valuetime = 0,sum = 0;

    for(int i=0; i<n; i++){
         cin >> a[i];
         sum += a[i];
    }

    for(int i=0; i<q; i++){
        long long t; cin >> t;
        long long ind,x;
        if(t==1) cin >> ind >> x;
        else cin >> x;

        if(t==1){
            --ind;
            if(updatetime[ind]>valuetime){
                sum -= update[ind];
            }
            else if(valuetime>0){
                sum -= value;
            }
            else{
                sum -= a[ind];
            }
            update[ind] = x;
            updatetime[ind] = i+1;
            sum += x;
            cout << sum << endl;
        }
        else{
            sum = x*n;
            value = x;
            valuetime = i+1;
            cout << sum << endl;
        }


    }
    
}