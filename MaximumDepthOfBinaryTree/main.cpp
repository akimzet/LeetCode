/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on November 19, 2016, 10:57 AM
 * 
 * Given a binary tree, find its maximum depth.
 * The maximum depth is the number of nodes along the longest path from the 
 * root node down to the farthest leaf node.
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

int maxDepth(TreeNode* root);

int main(int argc, char** argv)
{
    TreeNode *tree = new TreeNode(10);
    cout << maxDepth(tree);

    return 0;
}

int maxDepth(TreeNode* root)
{
    if(root == NULL) return 0;
    //Check all the left node
    int left = maxDepth(root->left) + 1;
    //Check right
    int right = maxDepth(root->right) + 1;
    //Check which count has a bigger depth
    return (left > right) ? left : right;
}
