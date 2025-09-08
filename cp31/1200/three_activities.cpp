#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<pair<int,int>> a(n),b(n),c(n);

        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for(int i=0; i<n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }
        for(int i=0; i<n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }

        auto cmp = [](auto &p1, auto &p2){
            return p1.first>p2.first;
        };

        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end(),cmp);
        sort(c.begin(),c.end(),cmp);

        int total = 0;
        int limit = min(3,n);
        for(int i=0; i<limit; i++){
            for(int j=0; j<limit; j++){
                for(int k=0; k<limit; k++){
                    if((a[i].second!=b[j].second) && 
                    (b[j].second!=c[k].second) && 
                    (a[i].second!=c[k].second)){
                        total = max(total,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }

        cout << total << endl;

    }
}