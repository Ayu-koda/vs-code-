// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no. of rows : ";
//     cin>>n;
//     int m;
//     cout<<"Enter no. of columns : ";
//     cin>>m;
//     int a[n][m];

//     // matrix input of elements 
//     cout<< "Enter the elements of matrix  "<<n<<" cross "<<m<< endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }

//     // printing the matrix 
//     cout<< "The matrix is : "<<endl;
//      for(int i=0;i<n;i++){  // rows
//         for(int j=0;j<m;j++){  // columns 
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int b[m][n];
//     // logic of transpose.
//     cout<< "The transpose of matrix is : "<<endl;
//      for(int i=0;i<n;i++){  
//         for(int j=0;j<m;j++){   
//             b[j][i]=a[i][j];
//         }
//     }
//      // transpose of matrix is :
//     for(int j=0;j<m;j++){  // column 
//         for(int i=0;i<n;i++){   // rows 
//             cout<<b[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 