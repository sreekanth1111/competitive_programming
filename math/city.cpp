#include<iostream>

using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool isfound = true;
    for(int i=0; i<n; i++){
        isfound = true;
        for(int j=max(0,i-x); j<i; j++){
            if(arr[i]>=arr[j]){
                isfound = false;
                break;
            }
        }

        for(int j=i+1; j<=min(n-1,i+y); j++){
            if(arr[i]>=arr[j]){
                isfound = false;
                break;
            }
        }

        if(isfound){
            cout << i+1 << endl;
            return 0;
        }
    }
        
}