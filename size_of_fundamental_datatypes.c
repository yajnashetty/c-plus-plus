/*
3. Size of Fundamental Data Types

Write a in C++ program to find the size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes Computer programming software
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes*/
#include <iostream>

using namespace std;
int main() {
    // Write C++ code here
   char ch;
   short so;
   int a;
   long b;
   long long ll;
   float f;
   double dd;
   long double ldd;
   bool z;
    cout<<"Find size of fundamental data types"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"the size(char) is : " <<sizeof(char)<<" bytes"<<endl;
    cout<<"the size(short) is : " <<sizeof(short)<<" bytes"<<endl;
    cout<<"the size(int) is : " <<sizeof(int)<<" bytes"<<endl;
    cout<<"the size(long) is : " <<sizeof(long)<<" bytes"<<endl;
    cout<<"the size(long long) is : " <<sizeof(long long)<<" bytes"<<endl;
    cout<<"the size(float) is : " <<sizeof(float)<<" bytes"<<endl;
    cout<<"the size(double) is : " <<sizeof(double)<<" bytes"<<endl;
    cout<<"the size(long double) is : " <<sizeof(long double)<<" bytes"<<endl;
    cout<<"the size(bool) is : " <<sizeof(bool)<<" bytes"<<endl;
    return 0;
}
