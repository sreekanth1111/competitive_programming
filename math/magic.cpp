#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long arr[t][2];

    for(int i=0; i<t; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0; i<t; i++){
        int x, y;
        x = arr[i][0];
        y = arr[i][1];

        if(x==y) cout << "YES" << endl;
        else if(x==1 && y>1) cout << "NO" << endl;
        else if((x==2 || x==3)&& y>3) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}