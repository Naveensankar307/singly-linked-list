#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node *Node;

Node nn,head = NULL,temp,cur;//nn -> new node
Node getnode();
Node readdetails(Node nn);
Node insertatbeg(Node nn);
void display(Node nn);
main(){
    int ch;
    while(1){
        cout<<"\n"<<"1 for insert at begining, 2 for display, 3 for exit "<<"\n";
        cout<<"Enter choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            head = insertatbeg(nn);
            break;
        
        case 2:
            display(head);break;

        case 3:
            exit(0);
            break;
        
        default:
            break;
        }

    }


}

Node getnode(){
   nn = (Node)malloc(sizeof(struct node));
   if(nn == NULL){
    cout<<"Memory Not allocated ";
   }else
        return nn;
}

Node readdetails(Node nn){
    cout<<"enter data : ";
    cin>>nn->data;
    nn->next = NULL;
    return nn;
}

Node insertatbeg(Node nn){
    nn = getnode();
    nn = readdetails(nn);
    if(head == NULL)
        head = nn;
    else{
        nn->next = head;
        head = nn;
    }
    return head;
}

void display(Node nn){
    if(head == NULL)
        cout<<"list is empty ";
    else{
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
    }
}
