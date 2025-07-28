#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    size_t a[n], b[n], c[n], d[n];

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " " << c[i] << " " << c[i] << endl;
    }

}