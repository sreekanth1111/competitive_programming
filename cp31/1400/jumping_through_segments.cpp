#include<bits/stdc++.h>

using namespace std;

bool ispossible(vector<int>l, vector<int>r, int k, int n){
    int b = 0, e = 0;
    for(int i=0; i<n; i++){
        int nb = max(l[i],b-k);
        int ne = min(r[i],e+k);

        if(nb > ne) return false;
        
        b = nb;
        e = ne;
    }
return true;
}

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<int> l(n), r(n);
        for(int i=0; i<n; i++){
            cin >> l[i] >> r[i];
        }

        int left = -1, right = 1e9;
        int mid;
        while(right-left > 1){
            
            mid = (left + right) / 2;
            if(ispossible(l,r,mid,n)){
                right = mid;
            }
            else{
                left = mid;
            }
        }

        cout << right << endl;

    }
    
}