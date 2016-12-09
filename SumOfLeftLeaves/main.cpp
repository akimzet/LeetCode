/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on December 9, 2016, 2:14 PM
 * 
 * Find the sum of all left leaves in a given binary tree.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOfLeftLeaves(TreeNode*);

int main(int argc, char** argv)
{

    return 0;
}

int sumOfLeftLeaves(TreeNode* root)
{
    int total = 0;
    //Check if tree is empty
    if(root == NULL) return 0;
    //Check if root->left is a leaf
    if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
    {
        total = root->left->val;
    }
    //Get the total from the entire tree
    return total + sumOfLeftLeaves(root->right) + sumOfLeftLeaves(root->left);
}

