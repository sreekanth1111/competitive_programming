#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <limits>
#include<memory> // for unique and other pointers 

using namespace std;

// void sp(int& num1, int& num2){ // call by reference
//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

int main(){

    // int a;
    // int b;

    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "a = "<< a << endl;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // cout << "b = "<< b << endl;

    // // for swapping the 2 variables 
    // a = a^b;
    // b = a^b;
    // a = a^b;

    // cout << "Hello world\n";
    // cout << "a = "<< a << endl; // << is input operator for character output i.e, cout
    // cout << "b = "<< b << endl;
    // return 0;

    // // endl or \n for new line
    
    // int a = 5;
    // float b = 5.0f;
    // double c = 5.34;
    // long l = 23.34L;
    // bool isvalid = true;
    // char letter = 'S';

    // int val = 1.2;
    // cout << val << endl; // prints 1

    // int value {};
    // cout << value << endl; // prints 0

    // For generating the random number

    // srand(time(0));
    // int randomNumber = rand();
    
    // cout << "Random Number = " << randomNumber << endl;

    // cout << left;
    // cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
    //      << setw(10) << "Summer" << setw(10) << "Hot" << endl;

    
    // cout << fixed << setprecision(2) << 12.678 << endl
    //      << 34.456 << endl;

    
    // int min_value = numeric_limits<int>::min();
    // int max_value = numeric_limits<int>::max();

    // cout << sizeof(int) << endl
    //      << min_value << endl
    //      << max_value << endl;

    // bool value1 = false;
    
    // cout << value1 << endl // prints 0
    //      << boolalpha << value1 << endl; // prints false

    // char letter1 = 'c';
    // cout << letter1 << endl // prints c
    //      << +letter1 <<endl; // prints 99 i.e value of c

    // string name;
    // // cin >> name; // name takes only one word
    // getline(cin,name); // for taking whole line
    // cout << name << endl;
    
    // int numbers[5] = {20, 45};
    // cout << numbers[0] << endl // prints 20
    //      << numbers[3] << endl // prints 0
    //      << numbers[5] << endl; // prints garbage value

    // int num2 = 10;
    // double num3 = 3.4;
    // double num4 = static_cast<double>(num2) + num3;

    // cout << num4 << endl; 

    // 
    
    // cout << "Enter the positive number : " ;
    // int pnum;
    // cin >> pnum;

    // if (pnum <= 0) cout << "Invalid number" << endl;
    // else{
    //     int factorial = 1;
    //     for (int i = 1; i <= pnum ; i++){
    //         factorial *= i;
    //     }
    //     cout << "Factorial of a number " << pnum << " is " << factorial << endl; 
    // } 

    // int temps[] = {35, 29, 37, 30};

    // for(int temp : temps) 
    //     cout << temp << endl;

    // int num1 = 5;
    // int num2 = 10;
    // sp(num1, num2);

    // cout << num1 << endl
    //      << num2 << endl;

    // sizeof() returns size in bytes
    // size() returns length of the array

    // int arr[] = {10, 20};
    // cout << sizeof(arr) << endl; // returns 8
    // cout << size(arr) << endl; // returns 2

    // // always send size of the array along with array to functions
    // // void printarray( int numbers[], int size) is one example
    // // for(int number : numbers) cout << number << endl cant be 
    // // used in the function or we can write numbers[size] by removing int size
    // // here numbers[] is treated as pointer

    // cout << sizeof(size_t) << endl;
    // cout << sizeof(long long) << endl;

    // // both prints 8 and long long stores both + and - ve numbers.
    // // size_t stores only + ve numbers.

    // int arr1[] = {10, 20, 30};
    // auto [x, y, z] = arr1;

    // cout << x << endl // prints 10
    //      << y << endl // prints 20
    //      << z << endl; // prints 30

    // // This is called unpacking(in python) and destructuring(in javascript)
    // // structure binding(in c++)

    // int arr2[2][3] = {10, 20, 30, 40, 50, 60};

    // for (int i=0; i<2; i++){
    //     for (int j=0; j<3; j++){
    //         cout << arr2[i][j] << endl;
    //     }
    // }

    // int num1 = 5;
    // cout << num1 << endl;

    // int *ptr = nullptr; // similar to *ptr = null
    // ptr = &num1;
    // *ptr = 10;

    // cout << num1 << endl;

    // const int x = 10; // constant integer
    // const int *ptr = &x; // integer pointer pointing to constant integer
    
    // *ptr = 20; // gives error
    // int x1 = 20;
    // ptr = &x1; // no error

    // int y = 20;
    // int* const ptr = &y; // constant ptr pointing to integer
    // *ptr = 30; // no problem

    // int y1 = 30;
    // ptr = &y1; // gives error

    // int z = 30;
    // const int* const ptr = &z;
    // // const ptr pointing to const integer


    // int arr = {10, 20 ,30};
    // int *ptr = arr;
    // cout << *ptr << endl; // prints 10
    // cout << *ptr[0] << endl; // prints 10
    // cout << *ptr[1] << endl; // prints 20

    // int* number = new int; // dynamic memory allocation
    // delete number;
    // number = nullptr;

    // int* numbers = new int[5];
    // delete[] numbers;
    // numbers = nullptr;


    // unique_ptr<int> x(new int); both are same
    // auto x = make_unique<int>(); // for creating unique pointer
    // *x = 10;                    // it automates the process of deletion
    // cout << *x << endl;

    // auto y = make_unique<int[]>(5); // 5 is the length of the array
    // y[0] = 20;
    // y[1] = 30;

    // cout << y[0] << endl;
    // cout << y[1] << endl;

    // shared_ptr<int> x(new int);
    // *x = 10;
    
    // cout << *x << endl;

    // shared_ptr<int> y(x);
    
    // cout << *y << endl;

    // // unique ptr - 1 ptr points to one address
    // // shared ptr - atleast 1 ptr points to one address

    
}