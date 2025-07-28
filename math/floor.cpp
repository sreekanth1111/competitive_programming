#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, x, flno;
    int arr[t];

    for(int i=0; i<t; i++){
        cin >> n >> x;
        n -= 2;
        flno = 1;

        while((n-x)>0){
            n -= x;
            flno += 1;
        }

        if(n>0){
            flno += 1;
        }

        arr[i] = flno;

    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}