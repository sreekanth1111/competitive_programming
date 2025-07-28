#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int num;
    int root;
    bool ispossible[t];
    int result[t];
    int result1[t];

    for(int i=0; i<t; i++){
        cin >> num;
        root = sqrt(num);

        if(root*root == num){
            ispossible[i] = true;
            result[i] = 1;
            result1[i] = root-1;
        }
        else{
            ispossible[i] = false;
            result[i] = -1;
        }
    }

    for(int i=0; i<t; ++i){
        if(ispossible[i]){
            cout << result[i] << " " << result1[i] << endl;
        }
        else{
            cout << result[i] << endl;
        }
    }
}