/* 
 * File:   main.cpp
 * Author: Andrew Kim
 * Created on December 9, 2016, 3:36 PM
 * 
 * Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode*);
void deleteNodeS(ListNode*);

int main(int argc, char** argv) 
{
    

    return 0;
}

void deleteNode(ListNode* node)
{
    ListNode* temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    delete temp;
}

void deleteNode(ListNode* node)
{
    node->val = node->next->val;
    node->next = node->next->next;
}