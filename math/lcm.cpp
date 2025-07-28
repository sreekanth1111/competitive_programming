#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long res[t], res1[t];

    for(int i=0; i<t; i++){
        size_t l, r;
        cin >> l >> r;
        if(2*l>r){
            res[i] = -1;
            res1[i] = -1;
        }
        else{
            res[i] = l;
            res1[i] = 2*l;
        }
    }

    for(int i=0; i<t; i++){
        cout << res[i] << " " << res1[i] << endl;
    }

    
}