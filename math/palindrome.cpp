#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n[t];
    string str[t];
    bool res[t];
    int nval;

    for(int i=0; i<t; i++){
        cin >> n[i];
        cin >> str[i];
    }

    for(int i=0; i<t; i++){

        nval = n[i];
        for(int j=0; j<nval/2; j++){
            if(str[i][j] != str[i][nval-j-1] && abs(str[i][j]-str[i][nval-j-1]) != 2){
                res[i] = false;
                break;
            }
            res[i] = true;
        }

    }

    for(int i=0; i<t; i++){
        if(res[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}