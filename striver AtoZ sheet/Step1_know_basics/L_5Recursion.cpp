#include<bits\stdc++.h>
using namespace std;

// //write a program to print name n times 
// void printname(string name,int count){
    
//     if(count==0) 
//         return;
//     cout<<name<<endl;
//     printname(name,count-1);
// }

// int main() {
//     string name;
//     cout<<"Enter your name : ";
//     cin>>name;
//     int n;
//     cout<<"How many times you want to print name ? ";
//     cin>>n;
//     printname(name,n);
// }

// // write a program to print number from 1 to  N
// void print(int i,int n){
//     if(i>n) return;

//     cout<<i<<" ";
//     print(i+1,n); 
// }

// int main(){
//     int n;
//     cout<<"Enter number :  ";
//     cin>>n;
//     print(1,n);
//     return 0;
// }

// // write a program to print number from N to  1
// void print(int i,int n){
//     if(i<1) return;

//     cout<<i<<" ";
//     print(i-1,n); 
// }

// int main(){
//     int n;
//     cout<<"Enter number :  ";
//     cin>>n;
//     print(n,n);
//     return 0;
// }


// // WAP to print 1 to N without increment .
// void print(int i,int n){
//     if(i<1) return;
//     print(i-1,n);
//      cout<<i<<" "; 
// }

// int main(){
//     int n;
//     cout<<"Enter number :  ";
//     cin>>n;
//     print(n,n);
//     return 0;
// }


// WAP to print number from N to  1 without decrement .
// void print(int i,int  n){
//     if(i>n) return;
//     print(i+1,n); 
//     cout<<i<<" ";
// }

// int main(){
//     int n;
//     cout<<"Enter number :  ";
//     cin>>n;
//     print(1,n);
//     return 0;
// }


// // sum of first N numbers 
// int sum(int n ){
//     if(n==1) return 1; 
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;  
//     cout<<sum(n);
//     return 0;
// }



// // factorial of  N number 
// int factorial(int n){
//     if(n==1) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;  
//     cout<<factorial(n);
//     return 0;
// }



// reverse An Array using recursion 

// int reverse_array(int arr[],int l,int r){
//     if(l>=r) return 0;
//         int temp = arr[l];
//         arr[l]=arr[r];
//         arr[r]=temp;
//        reverse_array(arr,l+1,r-1);
// }

// int main(){
//     int arr[]={1,3,4,5,6,8};
//     int n = sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     reverse_array(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

              // OR 
              // method 2 

// void  rev_arr(int arr[],int i,int n){
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     rev_arr(arr,i+1,n);
// }             


// int main(){
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter Elements of arrays : ";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     rev_arr(arr,0, n);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }           



// //    PALINDDROME OF STRING 


// bool f(int i, string &S){
//     if(i>=S.size()/2) return true ;
//     if(S[i] != S[S.size()-i-1]) return false ;
//     f(i+1,S);
// }
// int main(){
//     string S ="MADMM";
//     cout<<f(0,S);
//     return 0;
// }

//      FIBONACCI
// int fib(int n){
//     if(n<=1)  return n;
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter any number : ";
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }