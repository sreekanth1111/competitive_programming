#include<iostream>

using namespace std;

int main(){
    int rows,columns;
    cin >> rows >> columns;
    int k = columns-1;
    for(int i=0; i<rows; i++){
        if(i%2 == 0){
            for(int j=0; j<columns; j++){
                cout << '#';
            }
        }
        else{
            if(k == 0){
                cout << '#';
                for(int j=1; j<columns; j++){
                    cout << '.';
                }
                k = columns-1;
            }
            else if(k == columns-1){
                for(int j=1; j<columns; j++){
                    cout << '.';
                }
                cout << '#';
                k = 0;
            }

        }
        cout << endl;

    }
}