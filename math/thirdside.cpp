#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int result[t] = {0};

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int a[n];

        for(int j=0; j<n; j++){
            cin >> a[j];
            result[i] += a[j];
        }

        result[i] = result[i] + 1 - n;
        
    }

    for(int i=0; i<t; i++){
        cout << result[i] << endl;
    }
}