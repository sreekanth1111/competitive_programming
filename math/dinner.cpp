#include<iostream>

using namespace std;

int main(){
    int t; 
    cin >> t;
    bool result[t];
    
    for(int i=0; i<t; i++){
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        if((n/p)*p != n){
            if(((n/p)*q)<m || ((n/p)*q)>m ){
                result[i]=true;
            }
            else{
                result[i]=false;
            }
        }
        else{
            if(((n/p)*q)==m){
                result[i]=true;
            }
            else{
                result[i]=false;
            }
        }
    }

    for(int i=0; i<t; i++){
        if(result[i]==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }
}