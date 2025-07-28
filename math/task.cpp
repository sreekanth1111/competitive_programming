#include<iostream>
#include<cctype>

using namespace std;

bool checkchar(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

int main(){
    string str;
    cin >> str;
    string res;

    for(char ch : str){
        ch = tolower(ch);
        if(!checkchar(ch)){
            res += '.';
            res += ch;

        }
    }

    cout << res << endl;
}