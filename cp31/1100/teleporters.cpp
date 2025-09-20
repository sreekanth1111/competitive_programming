#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,c; cin >> n >> c;
        vector<long long> a(n);
        vector<long long> res(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
            res[i] = a[i]+i+1;
        }

        sort(res.begin(),res.end());

        long long count = 0;

        for(int i=0; i<n; i++){
            c -= res[i];
            if(c>=0){
                count++;
            }
            else{
                break;
            }
        }

        cout << count << endl;
        

    }
    
}