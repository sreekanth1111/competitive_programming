#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore(); // Ignore leftover newline from cin
    string str;
    int a,b;
    int x=0;

    for(int i=0; i<n; i++){

        getline(cin,str);
        a = str.find("++");
        b = str.find("--");
        if (a != string::npos) x++;
        else if (b != string::npos) x--;
        
    }
    cout << x << endl;;
}