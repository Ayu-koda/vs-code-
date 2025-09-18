// #include<bits/stdc++.h>
// using namespace std;

// int Slargest_element(int arr[],int n){
//     int largest = arr[0];
//     int Slargest = arr[0]-1;
//          for(int i=0;i<n;i++){
//             if(largest<arr[i]){
//                 Slargest = largest;
//                 largest = arr[i];
//             }
//             else if(arr[i]<largest && arr[i]>Slargest) {
//                 Slargest = arr[i];
//             }
//          }
//          return Slargest;
// }

// int main(){
//     int n;
//     cout<<"size of array : ";
//     cin>>n;
     
//     int arr[n];
//     for(int i=0 ; i<n;i++){
//         cin>>arr[i];
//     }
    
    
//     int ans = Slargest_element(arr,n);
//     cout<<"The Second  maximum number of the array is : "<< ans <<endl;

//     return 0;
// }