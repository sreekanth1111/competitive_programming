#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int res[t];
    int n, ele;
    bool isodd, iseven;

    for(int i=0; i<t; i++){
        cin >> n;
        isodd = false;
        iseven = false;

        for(int j=0; j<n; j++){
            cin >> ele;
            if(ele%2 == 0){
                iseven = true;
            }
            else{
                isodd = true;
            }

            
        }
        
        if(n%2 == 0 && isodd && iseven){
            res[i] = true;
        }
        else if(n%2 != 0 && isodd){
            res[i] = true;
        }
        else{
            res[i] = false;
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