#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int arr[t];

    for(int i=0; i<t; i++){

        int n,x; cin >> n >> x;
        int a[n];

        for(int j=0; j<n; j++){
            cin >> a[j];
        }

        int dist = a[0];
        int val;

        for(int j=0; j<n-1; j++){
            
            val = a[j+1]-a[j];

            if(dist < val){
                dist = val;
            }
        }

        if(dist<(2*(x-a[n-1]))){
            dist = 2*(x-a[n-1]);
        }

        arr[i] = dist;
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}
