#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    size_t a, b, x;
    long long val1[n], val2[n];
    double ratio;

    for(int i=0; i<n; i++){
        cin >> a >> b >> x;
        ratio = (double)x/b;

        if(a>=x){
            val1[i] = -1;
            val2[i] = b;
        }
        else if(a==ratio){
            val1[i] = 1;
            val2[i] = -1;
        }
        else if(a>ratio){
            val1[i] = 1;
            val2[i] = b;
        }
        else{
            val1[i] = b;
            val2[i] = -1;
        }
    }

    for(int i=0; i<n; i++){
        cout << val1[i] << " " << val2[i] << endl;
    }
}