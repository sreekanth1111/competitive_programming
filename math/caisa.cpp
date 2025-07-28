#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int diff = 0;
    int min = 0;

    for(int i=0; i<n-1; i++){
    
        diff += arr[i]-arr[i+1];
        if(min>diff) min = diff;
    }

    int result;
    result = arr[0]-min;

    cout << result << endl;;
}