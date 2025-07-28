#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a, b, diff, count;
    int arr[t];

    for(int i=0; i<t; i++){
        cin >> a >> b;
        count = 0;
        diff = abs(a-b);

        if(diff){
            count = diff/10;
            if((diff%10)!=0){
                count++;
            }
        }

        arr[i] = count;

    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}