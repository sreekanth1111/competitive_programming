#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n,m; cin >> n >> m;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        multiset<pair<int,int>> s;
        for(int i=0; i<n; i++){
            long long val = a[i];
            int zeroes = 0, digits = 0;
            bool iszero = true;

            while(val){
                int digit = val % 10;
                val /= 10;
                if(digit == 0){
                    if(iszero) zeroes++;
                }
                else{
                    iszero = false;
                }
                digits++;
            }
            s.insert({zeroes,digits});
        }

        long long count = 0;
        for(int i=0; i<n; i++){
            auto p = *s.rbegin();
            if(i%2 == 0){
                count += p.second - p.first;
            }
            else{
                count += p.second;
            }
            s.erase(prev(s.end()));
        }

        if(count >= (m+1)){
            cout << "Sasha" << endl;
        }
        else{
            cout << "Anna" << endl;
        }

    }
    
}