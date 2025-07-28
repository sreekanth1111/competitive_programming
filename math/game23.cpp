#include<iostream>

using namespace std;

int main(){
    int num, res;
    cin >> num >> res;
    bool ispossible = true;
    int count = 0;

    while(res%num == 0 && res/num != 1){
        int num2,num3;
        num2 = num * 2;
        num3 = num * 3;

        
        if(res%num2 == 0){
            num = num2;
            count++;
        }
        else if(res%num3 == 0){
            num = num3;
            count++;
        }
        else{
            ispossible = false;
            break;
        }
    }

    if(ispossible && res % num == 0){
        cout << count << endl;
    }
    else {
        cout << -1 << endl;
    }
}