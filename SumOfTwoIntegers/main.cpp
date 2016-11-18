/*
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 7:54 PM
 * 
 * Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
 * Given a = 1 and b = 2, return 3.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv)
{
    //Input
    int a = 7;
    int b = 3;
    //Output
    int sum;
    
    sum = a;
    while(b != 0)
    {
        //XOR Operator (Calculate sum without carry (if there is any))
        sum = a ^ b;
        //AND Operator * 2 (Carry taken to account))
        b = (a & b) << 1;
        a = sum;
    }
    cout << sum << endl;
    return 0;
}

