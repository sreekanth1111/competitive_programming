#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int minval = abs(arr[0]);

    for(int i=1; i<n; i++){
        if(minval>abs(arr[i])){
            minval = abs(arr[i]);
        }
    }

    cout << minval << endl;
}