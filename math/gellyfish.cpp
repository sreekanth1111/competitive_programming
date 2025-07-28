#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];

    for(int i=0; i<t; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int gelly, flower;
        gelly = min(b,d);
        flower = min(a,c);

        if(gelly<=flower) arr[i] = 0;
        else arr[i] = 1;
    }

    for(int i=0; i<t; i++){
        if(arr[i]){
            cout << "Flower" << endl;
        }
        else{
            cout << "Gellyfish" << endl;
        }
    }
}