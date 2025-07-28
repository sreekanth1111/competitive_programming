#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    string cards[5];

    for(int i=0; i<5; i++){
        cin >> cards[i];
    }

    bool found = false;

    for(int i = 0; i < 5; i++){
        if (str[0] == cards[i][0] || str[1] == cards[i][1]) {
            cout << "YES" << endl;
            found = true;
            break;
        }
    }

    if(found == false){
        cout << "NO" << endl;
    }
}