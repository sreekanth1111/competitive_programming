#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int years=0;

    while(a <= b){
        a = 3 * a;
        b = 2 * b;
        years++;
    }

    cout << years << endl;
}