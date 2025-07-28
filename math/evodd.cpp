#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int turn = 0;
    int a;
    bool flag = true;
    
    while(n>=0){
        if(turn == 0){
            if(n%2 == 0){
                n = 0;
                flag = true;
                break;
            }
            else if(2<=n){
                n -= 2;
                turn = 1;
            }
            else{
                flag = false;
                break;
                
            }
        }
        else{
            if(n%2 != 0){
                n = 0;
                flag = false;
                break;
            }
            else if(1<=n){
                n -= 1;
                turn = 0;
            }
            else{
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout << "Mahmoud" << endl;
    }
    else{
        cout << "Ehab" << endl;
    }
}