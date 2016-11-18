/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 6:57 PM
 * 
 * Given an array of integers, every element appears twice except for one.
 * Find that single one.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
    //Input
    int array[] = {1, 2, 3, 1, 2, 3, 5};
    vector<int> nums(array, array + sizeof(array) / sizeof(array[0]));
    //Output
    int answer;
    
    //Method 1
//    map<int, int> data;
//    for(int i = 0; i < nums.size(); i++)
//    {
//        data[nums[i]] = data[nums[i]] + 1;
//    }
//    map<int, int>::iterator it;
//    for(it = data.begin(); it != data.end(); it++)
//    {
//        if(it->second == 1) answer = it->first;
//    }
//    cout << answer << endl;
    
    //Method 2
    for(int i = 1; i < nums.size(); i++)
    {
        nums[0] = nums[0] ^ nums[i];
        answer = nums[0];
    }
    cout << answer << endl;
    return 0;
}

