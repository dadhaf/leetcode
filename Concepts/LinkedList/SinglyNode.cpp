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


int main(){
    SinglyNode* node = new SinglyNode(1);
    cout << "Value: " << node->val << "\nNext Node: " << node->next << endl;

    return 0;
}
