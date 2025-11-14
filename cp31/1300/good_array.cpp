#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long n; cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    unordered_map<long long, long long> mp;
    for(int i=0; i<n; i++) mp[a[i]]++;

    long long sum = 0;
    for(int i=0; i<n; i++) sum += a[i];

    long long cnt = 0;
    vector<long long> ans;
    for(int i=0; i<n; i++){
        long long val = sum - a[i];
        mp[a[i]]--;
        if(val%2==0 && mp[val/2]!=0){
            cnt++;
            ans.push_back(i+1);
        }
        mp[a[i]]++;
    }

    cout << cnt << endl;
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}