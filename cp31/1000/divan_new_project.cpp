#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        int n; cin >> n;
        vector<pair<int,int>> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i].first;
            arr[i].second = i+1;
        }

        sort(arr.begin(),arr.end());

        int head = 0;
        int count = 1; 
        int pos = 0, neg = 0;
        vector<long long> coord(n+1);
        coord[0] = 0;

        for(int i=n-1; i>=0; i--){
            count++;
            if(count%2==0){
                coord[arr[i].second] = head + count/2;
            }
            else{
                coord[arr[i].second] = head - count/2;
            }
        }

        long long total = 0;

        for(int i=0; i<n; i++){
            total += abs(coord[arr[i].second])* 2 *arr[i].first;
        }

        cout << total << endl;

        for(int i=0; i<=n; i++){
            cout << coord[i] << " ";
        }
        cout << endl;

    }
    
}