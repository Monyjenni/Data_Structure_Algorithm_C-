#include <bits/stdc++.h>
using namespace std;

// structure to define a node of the doubly linked list
struct node{
    
    // part which will store data
    int data;
    // datatype is node 
    node *prev;
    node *next;
    
};

//function to revrese the doubly linked list
void reverse(node** head_ref)
{
    node* temp = NULL;
    node* current = *head_ref;
 
    // to reverse the list we just swap the next and prev of all the nodes
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    // edge case
    if (temp != NULL)
        *head_ref = temp->prev;
}

//malloc functions used to specific memory 
int main() {
    
    // we will create a doubly linked list of size 2
    
    // create a pointer to the head node
    node *head = NULL;
    // create a pointer to tail node
    node *tail = NULL;


    // create the first node of the doubly linked list
    node* first_node = new node();
    // assign data to the first node
    node* second_node= new node();

    // in first node i wanna assign 43 
    first_node->data = 43;
    // assign prev pointer to the first node
    first_node->prev = NULL;
    first_node->next = second_node;
    
    head = first_node;
    
    // create the second node of the doubly linked list
    node* second_node= new node();
    // assign data to the second node
    second_node->data = 4;
    // assign prev pointer to the second node
    second_node->prev = first_node;
    // assign next pointer to the second node
    second_node->next = NULL;
    
    // assign this node to first node's next
    first_node->next = second_node;
    
    

    // print the list in forward direction
    cout<<"In forward direction:"<<endl;
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    
    cout<<endl;
    
    // print the list in backward direction
    cout<<"In backward direction:"<<endl;
    
    while(tail != NULL){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }

    return 0;
}