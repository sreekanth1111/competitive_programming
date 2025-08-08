#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int res[n];
    int flag = 1;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        

        if(num%2==0){
            num /= 2;
            res[i] = num;
        }
        else{
            num = (num+flag)/2;
            res[i] = num;
            flag *= -1;
        }
    }

    for(int i=0; i<n; i++){
        cout << res[i] << endl;
    }
}