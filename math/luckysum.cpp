#include<iostream>

using namespace std;

int main(){
    int sum;
    cin >> sum;
    string num = "";
    bool isvalid = true;
    

    while(sum){
        
        if((sum-4)>=0 && sum%7!=0){
            num += '4';
            sum -= 4;
            
        }
        else if((sum-7)>=0){
            num += '7'; 
            sum -= 7;
        }
        else{
            isvalid = false;
            break;
        }
    }

    if(isvalid){
        cout << num << endl;
    }
    else{
        cout << -1 << endl;
    }
}