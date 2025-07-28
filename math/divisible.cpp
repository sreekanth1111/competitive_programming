#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    size_t a, b;
    int mov[t];
    int val;

    for(int i=0; i<t; i++){
        cin >> a >> b;
        val = a%b;
        if(!val){
            val = 0;
        }
        else{
            val = b-val;
        }
        mov[i] = val;
    }

    for(int i=0; i<t; i++){
        cout << mov[i] << endl;
    }

}