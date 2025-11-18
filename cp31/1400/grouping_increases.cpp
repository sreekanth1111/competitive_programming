#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        long long top1 = a[0], top2 = -1;
        long long cnt = 0;
        for(int i=1; i<n; i++){
            if(top2==-1){
                if(top1>=a[i]) top1 = a[i];
                else top2 = a[i];
            }
            else{
                if(top1<a[i] && top2<a[i]){
                    if(top1>=top2) top2 = a[i];
                    else top1 = a[i];
                    cnt++;
                }
                else if(top1<a[i]) top2 = a[i];
                else if(top2<a[i]) top1 = a[i];
                else{
                    if(top1>=top2) top2 = a[i];
                    else top1 = a[i];
                }
            }
        }

        cout << cnt << endl;

    }
    
}