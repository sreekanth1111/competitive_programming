#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    string str = to_string(n);
    string rev = "";

    for(int i=str.length()-1; i>=0; i--){
        rev += str[i];
    }
    string res = str;
    res += rev;

    cout << res << endl;
}