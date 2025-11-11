#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,x,m; cin >> n >> x >> m;
        vector<pair<long long, long long>> a(m);
        for(int i=0; i<m; i++){
            cin >> a[i].first >> a[i].second;
        }

        bool ispossible = false;
        long long coord1 = x,coord2 = x;
        for(int i=0; i<m; i++){
            if(!ispossible){
                if(x>=a[i].first && x<=a[i].second){
                    coord1 = a[i].first;
                    coord2 = a[i].second;
                    ispossible = true;
                }
            }
            else{
                if(coord1<=a[i].second && coord2>=a[i].first){
                    coord1 = min(coord1,a[i].first);
                    coord2 = max(coord2,a[i].second);
                }
            }
        }

        cout << coord2-coord1+1 << endl;

    }
    
}