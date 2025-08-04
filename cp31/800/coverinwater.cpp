#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int arr[t];

    for(int i=0; i<t; i++){
        int n; cin >> n;
        string str; cin >> str;
        
        int total = 0;
        int continuous = 0;

        for(int j=0; j<n; j++){
            if(str[j] == '#'){
                if(continuous >= 3){
                    total = 2;
                    break;
                }
                else{
                    total += continuous;
                    continuous = 0;
                }
            }
            else{

                continuous += 1;
                if(j == n-1){
                    if(continuous >= 3){
                        total = 2;
                    }
                    else{
                        total += continuous;
                    }
                }
            }
        }

        arr[i] = total;

    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}