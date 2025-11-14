#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s; cin >> s;
    long long n = s.size();
    vector<long long> w(n);

    w[0] = 0;
    for(int i=1; i<n; i++){
        if(s[i]=='v' && s[i-1]=='v'){
            w[i] = w[i-1] + 1;
        }
        else{
            w[i] = w[i-1];
        }
    }

    long long w_cnt = w[n-1];
    long long cnt = 0;
    for(int i=2; i<n-2; i++){
        if(s[i]=='o'){
            cnt += w[i-1]*(w_cnt-w[i-1]);
        }
    }

    cout << cnt << endl;
    
}