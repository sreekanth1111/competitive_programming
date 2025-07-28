#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    size_t n, m;
    size_t res[t];

    for(int i=0; i<t; i++){
        cin >> n >> m;

        if(n == 1) res[i] = 0;
        else if(n == 2) res[i] = m;
        else res[i] = 2 * m;
    }

    for(int i=0; i<t; i++){
        cout << res[i] << endl;
    }
}