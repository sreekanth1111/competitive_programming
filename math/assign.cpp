#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];
    int num1, num2;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        n *= 2;
        int arr[n];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }

        sort(arr, arr+n);
        num1 = arr[n/2-1];
        num2 = arr[n/2];

        res[i] = num2-num1;


    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;

    }
}