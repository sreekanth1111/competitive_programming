#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    int n, m;
    int tosq;

    for(int i=0; i<t; i++){
        cin >> n >> m;
        tosq = n * m;
        arr[i] = tosq/2;
        if(tosq%2!=0){
            arr[i]++;
        }
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}