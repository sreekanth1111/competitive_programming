#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<long long > firstmin(n), secondmin(n);

        for(int i=0; i<n; i++){
            int m; cin >> m;
            vector<long long > a(m);

            for(int j=0; j<m; j++){
                cin >> a[j];
            }

            sort(a.begin(),a.end());
            firstmin[i] = a[0];
            secondmin[i] = a[1];
        }
        
        long long globalmin =*min_element(firstmin.begin(),firstmin.end());
        long long secondminval = *min_element(secondmin.begin(),secondmin.end());
        long long secondsum = accumulate(secondmin.begin(),secondmin.end(),0LL);
        

        cout << secondsum+globalmin-secondminval << endl;

    }

    
}