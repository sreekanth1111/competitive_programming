#include<iostream>
#include<algorithm>


using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr+3, greater<int>());
    int min;
    min = (arr[0]-arr[1]) + (arr[1]-arr[2]);
    cout << min << endl;
}