#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    string res;
    int ind = 0;
    int i = 0;

    while(ind<n){
        res += str[ind];
        i++;
        ind += i;
    }

    cout << res << endl;
    
}