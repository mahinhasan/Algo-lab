#include<bits/stdc++.h>

struct node{

    int data;
    struct node *next;

};

int main(){
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    head = new node();
    second = new node();
    third = new node();

    head->data = 1;
    head->next = second;

    second->data=2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    std::cout<<head->data<<std::endl;
    std::cout<<second->data<<std::endl;
    std::cout<<third->data<<std::endl;
    int sum;
    sum=head->data+second->data+third->data;
    std::cout<<"sum : "<<sum<<std::endl;

    return 0;


}
