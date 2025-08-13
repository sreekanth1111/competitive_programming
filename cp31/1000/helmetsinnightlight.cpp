#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, p; cin >> n >> p;
        vector<pair<int,int>> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i].first;
        }
        for(int i=0; i<n; i++){
            cin >> arr[i].second;
        }

        sort(arr.begin(),arr.end(),[](const pair<int,int>&a, const pair<int,int>&b){
            return a.second < b.second;
        });

        long long total = p;
        int count = n-1;

        for(int i=0; i<n; i++){
            if(count<=0){
                break;
            }
            if(arr[i].second >= p){
                total += 1LL * p * count;
                break;
            }

            int shares = min(arr[i].first,count);
            total += 1LL * arr[i].second * shares;
            count -= shares;
        }

        cout << total << endl;

    }
    
}