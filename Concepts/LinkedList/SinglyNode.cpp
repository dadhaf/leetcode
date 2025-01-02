#include"SinglyNode.h"

using namespace std;


void insertAtHead(SinglyNode* &head, int data){
    SinglyNode* node = new SinglyNode(data);
    node->val = data;
    node->next = head;
    head = node;
}

void insertAtLast(SinglyNode* &node, int data){
    SinglyNode* new_node = new SinglyNode(data);
    SinglyNode* temp = node;
    if(node == NULL){
        node = new_node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    
}

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

void deleteAttail(SinglyNode* &node){
    SinglyNode* second_last = node;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }
    SinglyNode* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

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

void deleteSecondNode(SinglyNode* &node){
    int pos = 1;
    SinglyNode* temp = node;
    if(temp->next == NULL){
        return;
    }

    if(temp->next->next == NULL){
        deleteAttail(temp);
        return;
    }
    temp = node->next->next;
    deleteAtPosition(node,1);
    deleteSecondNode(temp);
}

void display(SinglyNode* node){
    SinglyNode* temp = node; /* Pointer to traverse the linked list in forward direction */
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteDuplicateNode(SinglyNode* &node){
    SinglyNode* cur_node = node;
    // SinglyNode* temp = NULL;
    while (cur_node != NULL)
    {
        while(cur_node->next != NULL && cur_node->val == cur_node->next->val){
            SinglyNode* temp = cur_node->next;
            cur_node->next = cur_node->next->next;
            free(temp);
            // if(cur_node->next == NULL){
            //     return;
            // }       
        }
        cur_node = cur_node->next;
    }
    
}

void reverseList(SinglyNode* &node){
    if(node == NULL || node->next == NULL){
        return;
    }
    SinglyNode* head = node;
    SinglyNode* prev_node = NULL;
    SinglyNode* next_node = node->next;
    while (next_node != NULL)
    {
        head->next = prev_node;       
        prev_node = head;
        head = next_node;
        next_node = next_node->next;
        
    }
    head->next = prev_node;       
    node = head;
    
    

}

void displayReverse(SinglyNode* &node){
    if(node==NULL){
        cout << "\nNULL";
        return;
    }

    displayReverse(node->next);
    cout << "->" << node->val;
}

int main(){
    SinglyNode* node = NULL;
    insertAtLast(node, 1);
    display(node);
    
    insertAtLast(node, 1);
    display(node);
    
    insertAtLast(node, 3);
    display(node);
    
    insertAtLast(node, 3);
    display(node);
    
    insertAtLast(node, 5);
    display(node);
    insertAtLast(node, 5);
    display(node);
    insertAtLast(node, 6);
    display(node);
    insertAtLast(node, 6);
    display(node);
    deleteDuplicateNode(node);
    display(node);
    // displayReverse(node);
    reverseList(node);
    display(node);
    return 0;
}
