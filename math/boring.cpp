#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];

    for(int i=0; i<n; i++){
        cin >> num[i];
    }


    for(int i=0; i<n; i++){
        int count = 0;
        int digit;

        while(num[i]){
            digit = num[i] % 10;
            num[i] = num[i] / 10;
            count++;
        }

        int total = 0;
        total = ((digit-1)*10 + (count*(count+1))/2);
        
        cout << total << endl;
    }
}