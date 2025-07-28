#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int h, l;
    cin >> h >> l;
    long double result;

    result = (pow(l,2)-pow(h,2))/(2.0*h);

    cout << fixed << setprecision(7) << result << endl;
}