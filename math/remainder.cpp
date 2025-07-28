#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    size_t arr[t];
    size_t x, y, n, val;
    

    for(int i=0; i<t; i++){
        cin >> x >> y >> n;
        val = 0;
        
        if((n%x)>y){
            n -= (n%x)-y;
        }
        else if((n%x)<y){
            val = x+(n%x)-y;
            n -= val;
        }
        
        arr[i] = n;
    }

    for(int i=0; i<t; i++){
        cout << arr[i] << endl;
    }
}