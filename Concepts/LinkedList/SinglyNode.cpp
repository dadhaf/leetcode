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

void updateAtPosition(SinglyNode* &node, int val, int pos);
void updateAtPosition(SinglyNode* &node, int val, int pos){
    SinglyNode* temp = node;
    int curr_pos = 0;

    if(pos==0){
        node->val = val;
        return;
    }
    
    while(curr_pos < pos){
        temp = temp->next;
        curr_pos++;
    }

    temp->val = val;

}

void deleteAttail(SinglyNode* &node);
void deleteAttail(SinglyNode* &node){
    SinglyNode* second_last = node;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }
    SinglyNode* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deleteAtPosition(SinglyNode* &node, int pos);
void deleteAtPosition(SinglyNode* &node, int pos){
    SinglyNode* temp = node;
    if(pos == 0){
        node = node->next;
        free(temp);
        return;
    }
    int curr_pos = 0;
    while(curr_pos < pos - 1){
        temp = temp->next;
        curr_pos++;
    }
    SinglyNode* delNode = temp->next;
    temp->next = temp->next->next;
    free(delNode);
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
    updateAtPosition(node, 7,1);
    display(node);
    insertAtLast(node, 99);
    display(node);
    deleteAttail(node);
    display(node);
    deleteAtPosition(node,0);
    display(node);
    return 0;
}
