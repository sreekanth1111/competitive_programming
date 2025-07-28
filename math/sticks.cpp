#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    size_t n,count[t];

    for(int i=0; i<t; i++){
        cin >> n;

        if(n==1 || n==2){
            count[i] = 1;
        }
        else if(n==3){
            count[i] = 2;
        }
        else{
            count[i] = n/2;
            if(n%2==1){
                count[i]++;
            }
        }
    }

    for(int i=0; i<t; i++){
        cout << count[i] << endl;
    }
}