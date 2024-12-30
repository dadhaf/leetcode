#include<iostream>

#ifndef SINGLY_NODE_H
#define SINGLY_NODE_H

using namespace std;

class SinglyNode
{

public:
    int val;
    SinglyNode* next;
    SinglyNode(int data){
        val = data;
        next = NULL;
    }
    
};

void insertAtHead(SinglyNode* &node, int data);
void insertAtLast(SinglyNode* &node, int data);
void insertAtPosition(SinglyNode* &node, int data, int position);
void updateAtPosition(SinglyNode* &node, int val, int pos);
void deleteAttail(SinglyNode* &node);
void deleteAtPosition(SinglyNode* &node, int pos);
void display(SinglyNode* node);
void deleteSecondNode(SinglyNode* &node);

#endif