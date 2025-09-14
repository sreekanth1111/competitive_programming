#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long> a(n), b, t;

        for(int i=0; i<n; i++) cin >> a[i];

        t.push_back(a[0]);
        for(int i=1; i<n; i++) if(a[i-1]!=a[i]) t.push_back(a[i]);

        b.push_back(t[0]);
        for(int i=1; i<t.size()-1; i++){
            if(!((t[i-1] < t[i] && t[i] < t[i+1]) || 
                  (t[i-1] > t[i] && t[i] > t[i+1]))){
                b.push_back(t[i]);    
            }
        }
        if(t.size()>1) b.push_back(t[t.size()-1]);
    
        cout << b.size() << endl;

    }
}