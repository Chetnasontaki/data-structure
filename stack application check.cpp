#include <bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
bool isPalindrome(string s)
{
int len=s.size();
stack<char> stk;
int mid=len/2;
int i=0;
while(i<mid){
stk.push(s[i]);
i++;
}
if(len%2!=0){
i++;
}
char txt;
while(s[i]!= '\0'){
txt=stk.top();
stk.pop();
if(txt!=s[i]){
return false;
}else{
i++;
}
}
return true;
}
bool isBalanced(string expr) {
stack<char> s;
char ch;
for (int i=0; i<expr.length(); i++) {
if (expr[i]=='('||expr[i]=='['||expr[i]=='{') {
s.push(expr[i]);
continue;
}
if (s.empty())
return false;
switch (expr[i]) {
case ')': ch = s.top();
s.pop();
if (ch=='{' || ch=='[')
return false;
break;
case '}':
ch = s.top();
s.pop();
if (ch=='(' || ch=='[')
return false;
break;
case ']':
ch = s.top();
s.pop();
if (ch =='(' || ch == '{')
return false;
break;
}
}
return (s.empty()); }
int main() {
string expr = "[{}(){()}]";
if(isBalanced(expr))
{
cout<<"Chetna sontaki 0827CI211051"<<endl;
cout << "Balanced\n";
}
else{
cout << "Not Balanced\n";
string S = "ABCDCB";
}
if(isPalindrome(expr)==1){
cout<<"the given string is palindrome";
}else{
cout<<"the given string is not a palindrome";
}
}

