#include<iostream>
#include<set>

using namespace std;

int main(){
    string name;
    cin >> name;

    set<char> unique_chars;

    for(char ch : name){
        unique_chars.insert(ch);
    }

    int count = unique_chars.size();

    if(count%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}