#include<iostream>

using namespace std;

int main(){
    int pages;
    cin >> pages;
    int week[7];

    for(int i=0; i<7; i++){
        cin >> week[i];
    }

    int i = 0;
    while(pages > 0){
        pages -= week[i];
        i = (i+1)%7;
    }

    int day;

    if(i == 0){
        day = 7;
    }
    else{
        day = i;
    }

    cout << day << endl;


}