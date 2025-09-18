#include<iostream>
using namespace std ;
int main(){
    string s = "cow is an animal with four legs.";
    cout<<s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2==0)    s[i]=='e' ;
    }
   cout<<s;
}