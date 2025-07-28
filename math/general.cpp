#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max_ele,min_ele;
    int max_index,min_index;
    int totaltime;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    max_ele = *max_element(arr, arr+n);
    min_ele = *min_element(arr, arr+n);

    for(int i=0; i<n; i++){
        if(arr[i] == max_ele){
            max_index = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i] == min_ele){
            min_index = i;
            break;
        }
    }

    if(max_index == 0 && min_index == n-1){
        totaltime = 0;
    }
    else if(max_index == 0 && min_index != n-1){
        totaltime = (n-1)-min_index;
    }
    else if(max_index != 0 && min_index == n-1){
        totaltime = max_index;
    }
    else{
        int mintime = (n-1)-min_index;
        int maxtime = max_index;
        if(min_index < max_index){
            totaltime = maxtime+mintime-1;
        }
        else{
            totaltime = maxtime+mintime;
        }
    }
    cout << totaltime << endl;


}