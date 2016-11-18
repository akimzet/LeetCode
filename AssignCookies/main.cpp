/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 8:29 PM
 * 
 * Assume you are an awesome parent and want to give your children some cookies. 
 * But, you should give each child at most one cookie. Each child i has a greed factor gi, 
 * which is the minimum size of a cookie that the child will be content with; and each cookie 
 * j has a size sj. If sj >= gi, we can assign the cookie j to the child i, and the child i will be content. 
 * Your goal is to maximize the number of your content children and output the maximum number.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
    //input
    int array[] = {1, 3, 2, 1};
    int brray[] = {1, 1, 2};
    //Output
    int content;
    
    //Code
    vector<int> g(array, array + sizeof(array) / sizeof(array[0]));
    vector<int> s(brray, brray + sizeof(brray) / sizeof(brray[0]));
    //Sorts from smallest to biggest
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    for(int j = 0; i < g.size() && j < s.size(); j++)
    {
        if(g[i] <= s[j]) i++;
        content = i;
    }
    cout << content << endl;
    return 0;
}

