#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        vector<long long> a(n);
        set<long long> st;

        for(int i=0; i<n; i++){
            cin >> a[i];
            st.insert(a[i]);
        } 

        int first = 0, last = n-1;
        int min,max;
        while(first<=last){
            min = *st.begin();
            max = *st.rbegin();

            if((a[first]==min || a[first]==max)&&(a[last]==min || a[last]==max)){
                if(a[first]==min) st.erase(st.begin());
                else st.erase(prev(st.end()));
                first++;

                if(!st.empty()){
                    if (a[last] == *st.begin()) st.erase(st.begin());
                    else if (a[last] == *st.rbegin()) st.erase(prev(st.end()));
                }
                last--;
            }
            else if(a[first]==min || a[first]==max){
                if(a[first]==min) st.erase(st.begin());
                else if(a[first]==max) st.erase(prev(st.end()));
                first++;

            }
            else if(a[last]==min || a[last]==max){
                if(a[last]==min) st.erase(st.begin());
                else if(a[last]==max) st.erase(prev(st.end()));
                last--;
            }
            else{
                break;
            }
        }

        if(first<=last) cout << first+1 << " " << last+1 << endl;
        else cout << -1 << endl;

    }
    
}