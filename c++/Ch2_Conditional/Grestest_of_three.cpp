#include<iostream>
using namespace std;
int main(){
 int a; 
 cout<<"Enter first number:";
 cin>>a;
 int b; 
 cout<<"Enter second number  :";
 cin>>b;
 int c; 
 cout<<"Enter third number :";
 cin>>c;
if (a>b & a>c){
   cout<<a<<" is the greatest number .";
}
else if (b>a & b>c){
   cout<<b<<"  is the greatest number .";
}
else {
   cout<<c<<"  is the greatest number .";
}
}