#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    string res;
    bool change = true;
    int count = 0;

    for(int i=1; i<str.size() ; i++){
        if(!isupper(str[i])){
            change = false;
            break;
        }
    }

    if(change){

        for(char ch : str){
            if(count == 0){
                if(isupper(ch)){
                    res += tolower(ch);
                }
                else{
                    res += toupper(ch);
                }
                count++;
            }
            else{
                res += tolower(ch);
            }
        }
    
        cout << res << endl;
    }
    else{
        cout << str << endl;
    }
    
}