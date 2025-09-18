// #include<bits/stdc++.h>
// using namespace std;
// int maximum_of_consecutive_ones(vector<int>& nums){
//     int count =0;
//     int maxi = 0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==1){
//             count++;
//             maxi=max(maxi,count);
//         }
//         else{
//             count =0;
//         }
        
//     }
//     return maxi;
// }

// int main(){
//     int n;
//     cout<<"size of array : ";
//     cin>>n;
    
//     vector<int> nums(n);
//     cout<<"olny 1 & 0 are allowed."<<endl;
//     for(int i=0;i<n;i++){
        
//         if(nums[i]==0 | nums[i]==1){
//             cin>>nums[i];
//         }
//         else {
//             cout<<" Not allowed .";
//         }
//     }
//     int ans = maximum_of_consecutive_ones( nums);
//     cout<< ans ;
//     return 0;
// }