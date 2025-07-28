#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int res[n];

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        bool ispositive;

        if(num%2==0){
            num /= 2;
            res[i] = num;
        }
        else{
            num /= 2;
            if(count == 0){
                if(num<0) ispositive = false;
                else if(num>0) ispositive = true;
                count = 1;
            }
            else{
                if(num<0 && ispositive) num = num;
                else if(num>0 && !ispositive) num = num;
                else if(num<0) num -= 1;
                else if(num>0) num += 1;
                count = 0;
            }
            res[i] = num;
        }
    }

    for(int i=0; i<n; i++){
        cout << res[i] << endl;
    }
}