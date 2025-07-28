#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int rem;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        rem = arr[i]%14;
        if(rem>=1 && rem<=6 && arr[i]>=14){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}