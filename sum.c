/*
2. Sum of Two Numbers

Write a program in C++ to print the sum of two numbers.
Sample Output:
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
*/
#include <iostream>


int main() {
    // Write C++ code here
    int a = 29,b=30;
    int sum ;
    sum = a+b;
    std::cout <<"print the sum of two numbers"<<std::endl;
    std::cout<<"--------------------"<<std::endl;
    std::cout<<"the sum of "<<a<<" and "<<b<< " is: "<<sum;

    return 0;
}
