#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    int total = 0;
    string str;
    for(int i=0; i<n; i++){
        
        getline(cin, str);
        if (str == "Tetrahedron") {
            total += 4;
        } else if (str == "Cube") {
            total += 6;
        } else if (str == "Octahedron") {
            total += 8;
        } else if (str == "Dodecahedron") {
            total += 12;
        } else if (str == "Icosahedron") {
            total += 20;
        }
    }
    cout << total << endl;
}