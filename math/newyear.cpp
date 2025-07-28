#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];

    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }

    int result = 0;
    int position = 0;
    bool isfound = false;

    while(position<n-1){
        result += arr[result];
        position = result;
        if(result == x-1){
            isfound = true;
            break;
        }
    }

    if(!isfound){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}