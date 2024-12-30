#include<iostream>


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
void insertAtHead(SinglyNode* &head, int data){
    SinglyNode* node = new SinglyNode(data);
    node->val = data;
    node->next = head;
    head = node;
}

void insertAtLast(SinglyNode* &node, int data);
void insertAtLast(SinglyNode* &node, int data){
    SinglyNode* new_node = new SinglyNode(data);
    SinglyNode* temp = node;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    
}

void insertAtPosition(SinglyNode* &node, int data, int position);
void insertAtPosition(SinglyNode* &node, int data, int position){
    SinglyNode* new_node = new SinglyNode(data);
    SinglyNode* temp = node;
    if(position==0)
    {
        insertAtHead(node, data);
        return;
    }
    int curr_pos = 0;
    /* traverse till position - 1 */
    while(curr_pos < position-1)
    {
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(SinglyNode* node);
void display(SinglyNode* node){
    SinglyNode* temp = node; /* Pointer to traverse the linked list in forward direction */
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    SinglyNode* node = NULL;
    insertAtHead(node, 5);
    display(node);
    insertAtLast(node,18);
    display(node);
    insertAtPosition(node, 12, 1);
    display(node);
    return 0;
}
