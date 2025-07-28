#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    if(n%2!=0){
        cout << count << endl;
        return 0;
    }
    n /= 2;
    int i=1;
    int j=n-1;

    while(i<j){
        i++;
        j--;
        count++;
    }

    cout << count << endl;
}