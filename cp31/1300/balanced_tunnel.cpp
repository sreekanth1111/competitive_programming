#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;
    vector<long long> s(n),e(n),m(n+1,0);
    for(int i=0; i<n; i++) cin >> s[i];
    for(int i=0; i<n; i++) cin >> e[i];

    long long cnt = 0;
    int j=0;
    for(int i=0; i<n; i++){
        if(m[s[i]]){
            continue;
        }
        while(s[i]!=e[j]){
            m[e[j]] = 1;
            cnt++;
            j++;
        }

        if(s[i]==e[j]) j++;
    }

    cout << cnt << endl;
    
}