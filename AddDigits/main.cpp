/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 19, 2016, 11:02 AM
 * 
 * Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 * For example:
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

int addDigits(int);

int main(int argc, char** argv)
{
    cout << addDigits(89);
    
    return 0;
}

int addDigits(int num)
{
    //Get Left Side
    int a = num / 10;
    //Get Right Side
    int b = num % 10;
    num = a + b;
    //Does the line recursively until its a single digit and returns it
    return (num > 9) ? addDigits(num) : num;
}

