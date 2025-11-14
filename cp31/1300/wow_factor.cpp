#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    long long n = s.size();
    vector<long long> zero,cnt;

    long long v=0,z=0;
    for(int i=0; i<n; i++){
        if(s[i]=='v'){
            v++;
            if(z!=0){
                zero.push_back(z);
                z = 0;
            }
        }
        else{
            z++;
            if(v!=0){
                cnt.push_back(v-1);
                v = 0;
            }
        }
    }
    if(v!=0) cnt.push_back(v-1);

    vector<long long> pre(zero.size());
    pre[0] = zero[0];
    for(int i=1; i<zero.size(); i++){
        pre[i] = pre[i-1] + zero[i];
    }

    long long count = 0;
    for(int i=0; i<cnt.size()-1; i++){
        for(int j=i+1; j<=pre.size(); j++){
            count += pre[j-1]*cnt[j]*cnt[i];
        }
    }
    
    cout << count << endl;
    
    
}