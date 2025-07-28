#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    bool isvalid[t];
    int a, b, c, n;
    int avg;

    for(int i=0; i<t; i++){
        cin >> a >> b >> c >> n;
        avg = (a+b+c+n)/3;

        if((a+b+c+n)%3==0 && a<=avg && b<=avg && c<=avg){
            isvalid[i] = true;
        }
        else{
            isvalid[i] = false;
        }
    }

    for(int i=0; i<t; i++){
        if(isvalid[i]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}