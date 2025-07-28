#include<iostream>

using namespace std;

int main(){
    string sum;
    cin >> sum;
    string result;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for(char ch : sum){
        if(ch == '1'){
            count1++;
        }
        else if(ch == '2'){
            count2++;
        }
        else if(ch == '3'){
            count3++;
        }
    }

    while(count1 || count2 || count3){
        if(count1 != 0){
            if(count1 != 1){
                result += "1+";
            }
            else{
                if(count2 == 0 && count3 == 0){
                    result += "1";
                }
                else{
                    result += "1+";
                }
                
            }
            count1--;
        }
        else{
            if(count2 != 0){
                if(count2 != 1){
                    result += "2+";
                }
                else{
                    if(count3 == 0){
                        result += "2";
                    }
                    else{
                        result += "2+";
                    }
                    
                }
                count2--;
            }
            else{
                if(count3 != 0){
                    if(count3 != 1){
                        result += "3+";
                    }
                    else{
                        result += "3";
                    }
                    count3--;
                }
            }
        }
        
    }

    cout << result << endl;
}