#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int a,b;
    b = 0;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a == 1){
            b = 1;
        }
    }

    if(b == 0){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }
}