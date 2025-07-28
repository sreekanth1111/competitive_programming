#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a, b, s;
    cin >> a >> b >> s;

    int minSteps = abs(a) + abs(b);

    if(s >= minSteps && (s - minSteps) % 2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}