#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int zerocount = 0;
        int evencount = 0;
        int sum = 0;
        string num = arr[i];
        int rem;

        for(char ch : num){
            rem = ch - '0';

            if(rem==0) zerocount++;
            else if(rem!=0 && rem%2==0) evencount++;

            sum += rem;
            
        }

        
        if(zerocount > 0 && (evencount > 0 || zerocount > 1) && sum % 3 == 0){
            cout << "red" << endl;
        }
        else{
            cout << "cyan" << endl;
        }

    }

}