#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<pair<long long,int>> a(n);
        vector<long long> ind(n),pre(n);

        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(),a.end());

        pre[0] = a[0].first;
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + a[i].first;
        }


        ind[a[n-1].second] = n-1;
        for(int i=n-2; i>=0; i--){
            if(pre[i]>=a[i+1].first){
                ind[a[i].second] = ind[a[i+1].second];
            }
            else{
                ind[a[i].second] = i;
            }
        }
        
        for(int i=0; i<n; i++){
            cout << ind[i] << " ";
        }
        cout << endl;
    }
}