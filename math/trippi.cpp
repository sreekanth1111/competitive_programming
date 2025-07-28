#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string res[n];

    for(int i=0; i<n; i++){
        string a,b,c;
        cin >> a >> b >> c;
        res[i] = a[0];
        res[i] += b[0];
        res[i] += c[0];
    }

    for(int i=0; i<n; i++){
        cout << res[i] << endl;
    }
}