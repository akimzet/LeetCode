/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on December 9, 2016, 4:33 PM
 * 
 * Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

int firstUniqChar(string);

int main(int argc, char** argv)
{
    
    return 0;
}

int firstUniqChar(string s)
{
    if(s.size() == 0) return -1;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(i == j && j == s.size() - 1) return i;
            if(i == j) j++;
            if(s[i] != s[j] && j == s.size() - 1) return i;
            if(s[i] == s[j]) break;
        }
        if(i == s.size() - 1) return -1;
    }
    return -1;
}