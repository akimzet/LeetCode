/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on December 9, 2016, 12:52 PM
 * 
 * Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the 
 * non-zero elements.
 * For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &);
void moveZeroes2(vector<int> &);
void display(vector<int>);
int main(int argc, char** argv)
{
    //Input
    int array[] = {0, 1, 0, 3, 12, -12, 0, 5, 0};
    vector<int> a(array, array + sizeof(array) / sizeof(array[0]));
    display(a);
    moveZeroes2(a);
    display(a);
    return 0;
}

void moveZeroes(vector<int>& nums)
{
    int count = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0) count++;
        while(count != 0)
        {
            for(int i = 0; i < nums.size() - 1; i++)
            {
                if(nums[i] == 0)
                {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }
            count--;
        }
    }
}

void moveZeroes2(vector<int> &a)
{
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == 0)
        {
            for(int k = i + 1; k < a.size(); k++)
            {
                if(a[k] != 0)
                {
                    swap(a[i], a[k]);
                    break;
                }
            }
        }
    }
}

void display(vector<int> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

