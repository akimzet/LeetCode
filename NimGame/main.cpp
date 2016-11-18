/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 17, 2016, 6:50 PM
 * 
 * You are playing the following Nim Game with your friend: There is a heap of stones on the table, 
 * each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner.
 * You will take the first turn to remove the stones.
 * 
 * Both of you are very clever and have optimal strategies for the game.
 * Write a function to determine whether you can win the game given the number of stones in the heap.
 * For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 
 * stones you remove, the last stone will always be removed by your friend.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

bool canWinNum(int);

int main(int argc, char** argv)
{
    int num = 5;
    cout << canWinNum(5);
    
    return 0;
}

bool canWinNum(int n)
{
    if(n % 4 == 0) return false;
    return true;
}
