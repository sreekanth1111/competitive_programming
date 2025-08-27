#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<long long> arr(n);
        map<long long, int > freq;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int maxfreq = 0;

        for(auto item : freq){
            maxfreq = max(maxfreq,item.second);
        }

        int size = maxfreq, k=1, count = 0;
        while(size<n){
            size += k*maxfreq;
            k *= 2;
            count++;
        }

        cout << count+n-maxfreq << endl;



    }
    
}