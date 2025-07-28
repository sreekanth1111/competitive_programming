#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t; 
    string res[t];
    
    for(int i=0; i<t; i++){
        string str, result;
        cin >> str;
        char freq[len(str)];

        for(char ch : str){
            freq[ch]++;
        }

        for(int j=0; j<10; j++){
            val = 9-j;
            do{
                if(freq[val]!=0){
                    result += to_string(val);
                    freq[val]--;
                    break;
                }
                else 
            }while(true)
        }
    }
}