#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num;
    int min;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> num;
            if(num == 1){
                min = abs(i-3) + abs(j-3);
            }
        }
    }
    cout << min << endl;
}