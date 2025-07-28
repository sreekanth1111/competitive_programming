#include<iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    string str;
    cin >> str;
    int freq[26] = {0};

    for(char ch : str){
        freq[ch - 'a']++;
    }

    
    bool ispossible = true;
    for(int i=0; i<26; i++){
        if(freq[i] > 0 && freq[i] % k != 0){
            ispossible = false;
            break;
        }
    }

    if(ispossible){
        string str1;
        int i = 0;
        while(i < 26){
            if(freq[i] > 0) {
                str1 += string(freq[i] / k, char(i + 'a'));
            }
            
            i++;
        }

        string res;
        for(int i=0; i<k; i++){
            res += str1;
        }

        cout << res << endl;
    }
    else{
        cout << -1 << endl;
    }
}