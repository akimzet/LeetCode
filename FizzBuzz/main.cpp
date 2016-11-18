/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 2:52 PM
 * 
 * Write a program that outputs the string representation of numbers from 1 to n.
 * But for multiples of three it should output “Fizz” instead of the number and for 
 * the multiples of five output “Buzz”. For numbers which are multiples of both three 
 * and five output “FizzBuzz”.
 */

 //System Libraries
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char** argv) 
{
    //Input
    int n = 20;
    //Output
    vector<string> answer;
    //Count from 1 to n
    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0) answer.push_back("FizzBuzz");
        else if(i % 3 == 0) answer.push_back("Fizz");
        else if(i % 5 == 0) answer.push_back("Buzz");
        else
        {
            //Change integer to string
            stringstream ss;
            ss << i;
            answer.push_back(ss.str());
        }
    }
    //Check Output
    vector<string>::iterator it;
    for(it = answer.begin(); it < answer.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}

