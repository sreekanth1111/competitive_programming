#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        int arr[n];

        for(int j=0; j<n-1; j++){
            arr[j] = j+2;
        }
        arr[n-1] = 1;

        for(int j=0; j<n; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}