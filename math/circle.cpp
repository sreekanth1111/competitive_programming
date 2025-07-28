#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    
    if(arr[n-3]+arr[n-2]<=arr[n-1]){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        int temp;
        temp = arr[n-2];
        arr[n-2] = arr[n-1];
        arr[n-1] = temp;
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
        
}