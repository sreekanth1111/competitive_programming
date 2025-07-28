#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    bool res[t];

    for(int i=0; i<t; i++){
        int n,x;
        cin >> n >> x;
        int door[n];

        for(int j=0; j<n; j++){
            cin >> door[j];
        }

        bool ispossible = true;
        bool isone = false;
        int ind = 0;

        while(ind<n){
            if(door[ind]==1){
                if(x>0){
                    ind += x;
                    x = 0;
                }
                else{
                    ispossible = false;
                    break;
                }
            }
            else{
                ind += 1;
            }
        }

        res[i] = ispossible;
    }

    for(int i=0; i<t; i++){
        if(res[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}