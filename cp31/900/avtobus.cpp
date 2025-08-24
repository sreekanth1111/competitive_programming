#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        
        long long n; cin >> n;
        long long maxtire = 0, mintire = 0;
        bool ispossible = true;


        if(n>=4){
            if(n%6==0 || n%6==2 || n%6==4){
                cout << n/6 + (n%6==2 || n%6==4)<< " ";
            }
            else{
                ispossible = false;
            }
        }
        else{
            ispossible = false;
        }

        if(n>=4){
            if(n%4==0 || n%4==2){
                cout << n/4 << " ";
            }
            else{
                ispossible = false;
            }
        }
        else{
            ispossible = false;
        }

        if(!ispossible){
            cout << -1;
        }
        cout << endl;





    }
    
}