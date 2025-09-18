#include<bits/stdc++.h>
using namespace std;
int main(){
    // Hashing of an array Or Frequency 
    int n;
    cout<<"Enter Size of Array. : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // Precompute
   int Hash[13]={0};
   for(int i=0;i<n;i++){
      Hash[arr[i]] += 1;
   }
    cout<< "How Many Elements Frequency you want to check : ";
    int q;
    cin>>q;
    while(q--){
        
        int number;
        cin>>number;
         // Fetching 
        cout<<Hash[number]<<endl;
    }
    return 0;
}




////                 Hashing  Of characters 
int main(){
    string s;
    cin>>s;

    // Precompute
    int Hash[26]= {0};
    for(int i=0;i<s.size();i++){
        Hash[s[i]-'a']++; 
    }     
    int q ;
    cin>>q;
     while(q--){
        char c;
        cin >>c;
        // Fetching   
        cout<<Hash[c-'a']<<endl;     
     }
     return 0;
}