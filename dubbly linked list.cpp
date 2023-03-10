#include <bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* next;
struct node* previous;
};
struct node *head;
struct node *createnode(){
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
if(p!=NULL){
p->next=NULL;
p->previous=NULL;
cout<<"Enter value for the node : ";
cin>>p->data;
}else {
cout<<"No space available in memory";
}
return p;
}
void create1(){
int ch=1;
struct node *p,*pr;
while(ch){
p=(struct node*)malloc(sizeof(struct node));
p->next=NULL;
p->previous=NULL;
cout<<"Enter value for Node :";
cin>>p->data;
if(head==NULL){
head=p;
}else{
pr->next=p;
p->previous=pr;
}
pr=p;
cout<<"Do you want to add more node : ";
cin>>ch;
}
}
void insertathead(){
struct node* n;
n=createnode();
n->next=head;
head->previous=n;
head=n;
}
void insertattail(){
struct node *n,*temp;
n=createnode();
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=n;
n->previous=temp;
}
void display(){
node* temp=head;
cout<<"Doubly Linked List : ";
while(temp!=NULL){
cout<<temp->data<<" "; temp=temp->next;
}
cout<<endl;
}
void insertatpos(){
int data,pos;
cout<<"Enter element and position :";
cin>>data>>pos;
struct node* ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
int i;
struct node *temp=head;
for(i=1;i<pos;i++){
temp=temp->next;
}
ptr->next=temp->next;
ptr->previous=temp->previous;
}
void deleteathead(){
node* todelete=head;
head=head->next;
head->previous=NULL;
delete todelete;
}
void deleteatend(){
node* temp=head;
do{
temp=temp->next;
}while(temp->next!=NULL);
temp->previous->next=temp->next;
delete temp;
}
void deletion(){
struct node *temp;
int i;
temp=head;
int pos;
cout<<"Enter the position to be deleted : ";
cin>>pos;
int count=0;
while(temp!=NULL){
temp=temp->next;
count++;
}
if(pos==0){
deleteathead();
return;
}else if(pos==count-1){
deleteatend();
return;
}
for(i=0;i<pos&&temp!=NULL;i++){
temp=temp->next;
}
if(temp!=NULL){
temp->previous->next=temp->next;
temp->next->previous=temp->previous;
delete temp;
}else{
cout<<"Invalid position"<<endl;
}
}
bool isempty(){
return head->next==NULL&&head->previous==NULL;
}
int main(){
cout<<"Chetna sontaki 0827CI211051"<<endl;
int ch=1;
while(ch){
cout<<"0.Exit"<<endl;
cout<<"1.Create"<<endl;
cout<<"2.Display"<<endl;
cout<<"3.Insertion at first"<<endl;
cout<<"4.Insertion at end"<<endl;
cout<<"5.Insert at any position"<<endl;
cout<<"6.Delete from first"<<endl;
cout<<"7.Delete from end"<<endl;
cout<<"8.Delete at any position"<<endl;
cout<<"9.Isempty"<<endl;
cout<<"Enter your choice : ";
cin>>ch;
switch(ch){
case 0 : break;
case 1 : head=NULL;
create1();
break;
case 2 : display();
break;
case 3 : insertathead();
break;
case 4 : insertattail();
break;
case 5 : insertatpos();;
break;
case 6 : deleteathead();
break;
case 7 : deleteatend();
break;
case 8 : deletion();
break;
case 9 : if(isempty()){
cout<<"Linked list is empty"<<endl;
}else {
cout<<"Linked list is not empty"<<endl;
}
default : break;
}
}
return 0;
}

