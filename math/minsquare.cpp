#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a, b, side;
    int sq[t];

    for(int i=0; i<t; i++){
        cin >> a >> b;
        side = ceil(sqrt(2*a*b));
        if(side<a || side<b){
            side = max(a,b);
        }
        else if(side<2*a && side<2*b){
            side = min(2*a,2*b);
        }
        sq[i] = side*side;
    }

    for(int i=0; i<t; i++){
        cout << sq[i] << endl;
    }
}