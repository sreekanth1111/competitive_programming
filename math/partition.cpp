#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n<=2){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        int size = n/2;

        if(n%2!=0) cout << size+1 << " ";
        else cout << size << " ";
        int i=1;
        while(i<=n){
            cout << i << " ";
            i += 2;
        }
        cout << endl;


        cout << size << " ";
        int j=2;
        while(j<=n){
            cout << j << " ";
            j += 2;
        }
        cout << endl;
    }
}