#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m; cin >> n >> m;
        vector<long long> a(m),b(m);

        for(int i=0; i<m; i++) cin >> a[i];
        sort(a.begin(),a.end());
 
        for(int i=0; i<m-1; i++) b[i] = a[i+1]-a[i]-1;
        b[m-1] = n-a[m-1]+a[0]-1;
        

        sort(b.begin(),b.end());

        long long total = 0;
        long long count = 1;
        for(int i=m-1; i>=0; i--){
            if((b[i]-count+1)>1){
                total += b[i]-count;
                count += 4;
            } 
            else if((b[i]-count+1)==1){
                total += 1;
                count += 2;
            }
            else{
                break;
            }
        }

        total = n-total;
        cout << total << endl;
        
    }
    
}