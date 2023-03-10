#include <bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* next;
};
struct node *head;
void create1(){
int ch=1;
struct node *p,*pr;
while(ch){
p=(struct node*)malloc(sizeof(struct node));
p->next=NULL;
cout<<"Enter value for Node :";
cin>>p->data;
if(head==NULL){
head=p;
}else{
head->next=p;
p->next=head;
}
cout<<"Do you want to add more node : ";
cin>>ch;
}
}
void insertatbegin(){
struct node *temp=(struct node*)malloc(sizeof(struct node));
int data;
cout<<"Enter value for node : ";
cin>>data;
temp->data=data;
temp->next=head->next
; head->next=temp;
}
void insertatend(){
struct node *temp=(struct node*)malloc(sizeof(struct node));
int data;
cout<<"Enter value for node : ";
cin>>data;
temp->data=data;
temp->next=head->next
; head->next=temp;
head=temp;
}
void insertatpos(){
struct node *temp,*p;
int data,item;
cout<<"Enter the data and item : ";
cin>>data>>item;
p=head->next;
do{
if(p->data==item){
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=p->next;
p->next=temp;
if(p==head){
head=temp;
}
return;
}
p=p->next;
}while(p!=head->next);
}
void deletefromhead(){
struct node *previous=head,*firstnode=head;
if(head==NULL){
cout<<"Circular linked list is empty"<<endl;
return;
}
if(previous->next==previous){
head=NULL;
return;
}
while(previous->next!=head){
previous=previous->next;
}
previous->next=firstnode->next;
head=previous->next;
free(firstnode);
return;
}
void deletefromend(){
struct node *current=head,*temp=head,*previous;
if(head==NULL){
cout<<"List is empty"<<endl;
return;
}
if(current->next==current){
head=NULL;
return;
}
while(current->next!=head)
{ previous=current;
current=current->next;
}
previous->next=current->next;
head=previous->next;
free(current);
return;
}
int Length(){
struct node* current=head;
int count=0;
if(head==NULL){
return 0;
}else{
do{
current=current->next;
count++;
}while(current!=head);
}
return count;
}
void deletefrompos(){
int pos;
cout<<"Enter the position : ";
cin>>pos;
int len=Length();
int count=1;
struct node *previous=head,*next=head;
if(head==NULL){
cout<<"List is empty"<<endl;
return;
}
if(pos>=len||pos<0){
cout<<"Position is not found"<<endl;
return;
}
if(pos==0){
deletefromhead();
return;
}
while(len>0){
if(pos==count){
previous->next=next->next;
free(next);
return;
}
previous=previous->next;
next=previous->next;
len--;
count++;
}
return;
}
void display(){
struct node* current;
int n=1;
if(head==NULL){
cout<<"List is empty"<<endl;
}
else {
current=head;
cout<<"Circular Linked List : ";
do{
cout<<current->data<<" ";
current=current->next;
n++;
}while(current!=head);
cout<<endl;
}
}
bool isempty(){
return head==NULL;
}
int main(){
cout<<"Chetna sontaki 0827Ci211051"<<endl;
int ch=1;
while(ch){
cout<<"0.Exit"<<endl;
cout<<"1.Create"<<endl;
cout<<"2.Display"<<endl;
cout<<"3.Insertion at begining"<<endl;
cout<<"4.Insertion at end"<<endl;
cout<<"5.Insert at any position"<<endl;
cout<<"6.Delete from begining"<<endl;
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
case 3 : insertatbegin();
break;
case 4 : insertatend();
break;
case 5 : insertatpos();;
break;
case 6 : deletefromhead();
break;
case 7 : deletefromend();
break;
case 8 : deletefrompos();
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

