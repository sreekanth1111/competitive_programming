#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x; cin >> n >> x;
        vector<long long> a;

        for(int i=0; i<n; i++){
            if(i!=x) a.push_back(i);
        }
        if(n!=x) a.push_back(x);

        if(n==1) cout << 0 << " ";
        else for(int i=0; i<a.size(); i++) cout << a[i] << " ";
        cout << endl;
        
    }
    
}