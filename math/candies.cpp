#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    size_t arr[t];
    size_t val;

    for(int i=0; i<t; i++){
        cin >> arr[i];
    }

    for(int i=0; i<t; i++){
        if(arr[i]<=2){
            cout << 0 << endl;
        }
        else{
            val = arr[i]/2;
            if(arr[i]%2==0){
                val -= 1;
            }
            cout << val << endl;
        }
    }
}