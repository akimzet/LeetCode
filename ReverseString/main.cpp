/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 3:34 PM
 * 
 * Write a function that takes a string as input and returns the string reversed.
 */

 //System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) 
{
    //Input
    string s = "hello";
    //Output
    string answer;
    
    //Convert string to *char
    const char *cstr = s.c_str();
    char array[s.size()];
    //Read the pointer in reverse
    for(int i = s.size() - 1; i >= 0; i--)
    {
        answer.push_back(cstr[i]);
    }
    cout << s << endl;
    //Check Output
    cout << answer << endl;
    return 0;
}

