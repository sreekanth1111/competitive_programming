#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res[n];

    for(int i=0; i<n; i++){
        int length;
        cin >> length;
        int arr[length];
        int count0, count1, count2, count3, count5;
        count0 = 0;
        count1 = 0;
        count2 = 0;
        count3 = 0; 
        count5 = 0;
        bool isfound = false;

        for(int j=0; j<length; j++){
            cin >> arr[j];
        }

        for(int j=0; j<length; j++){

            if (arr[j] == 0) count0++;
            else if (arr[j] == 1) count1++;
            else if (arr[j] == 2) count2++;
            else if (arr[j] == 3) count3++;
            else if (arr[j] == 5) count5++;
            
            if(count0 >= 3 && count1 >= 1 && 
                count2 >= 2 && count3 >= 1 && count5 >= 1){
                    res[i] = j+1;
                    isfound = true;
                    break;
                }
        }
        if(!isfound){
            res[i] = 0;
        }
        
        

    }

    for(int i=0; i<n; i++){
        cout << res[i] << endl;
    }
}