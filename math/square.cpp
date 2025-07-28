#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int l, r, d, u;

    
    for(int i=0; i<n; i++){
        cin >> l >> r >> d >> u;
        
        if(l == r && u == d && l == d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}