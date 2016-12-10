/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on December 9, 2016, 2:38 PM
 * 
 * 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

bool canConstruct(string, string);
bool canConstruct2(string, string);

int main(int argc, char** argv) {

    return 0;
}

bool canConstruct2(string ransomNote, string magazine)
{
    if(magazine.size() < ransomNote.size()) return false;
    for(int i = 0; i < ransomNote.size(); i++)
    {
        for(int j = 0; j < magazine.size(); j++)
        {
            if(ransomNote[i] == magazine[j])
            {
                magazine[j] = '0';
                break;
            }
            if((ransomNote[i] != magazine[j]) && j == magazine.size() - 1) return false;
        }
    }
    return true;
}

bool canConstruct(string ransomNote, string magazine)
{
    map<char, int> nData;
    map<char, int> mData;
    //Get data for Note
    for(int i = 0; i < ransomNote.size(); i++)
    {
        nData[ransomNote[i]] = nData[ransomNote[i]] + 1;
    }
    //Get data for Magazine
    for(int i = 0; i < magazine.size(); i++)
    {
        mData[magazine[i]] = mData[magazine[i]] + 1;
    }
    //Check
    for(int i = 0; i < ransomNote.size(); i++)
    {
        if(nData[ransomNote[i]] > mData[ransomNote[i]]) return false;
    }
    return true;
}

