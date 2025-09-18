// #include <bits/stdc++.h>
// using namespace std;

// void countDigits(int n){
   
//    int  count =0;
//        while(n>0){
//         n =n/10;
//         count++;
//        }
//        cout<<"the number of digits is : "<<count<<endl;
// }

// void countDigits_eff(int n){
//     int cnt = (int)(log10(n)+1);
//     cout<<cnt;
// }

// void reverse_of_num(int n){
//    int  revn =0;
//    while(n>0){
//     int ld = n%10;
//     revn = revn*10 + ld;
//     n = n/10;
//    }
//     cout<<revn;
// }

// void palindrome(int n){
//     int dup = n;
//     int  revn =0;
//    while(n>0){
//     int ld = n%10;
//     revn = revn*10 + ld;
//     n = n/10;
//    }
//     if(revn == dup) cout<<"It is a palindrome .";
//     else cout<<"Not a palindrome .";
// }

// void Armstrong_num(int n) {
//     int  originalNum, remainder, result = 0, digitcount = 0;

//     originalNum = n;

//     // Count the number of digits
//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++digitcount;
//     }

//     originalNum = n;

//     // Check if it is an Armstrong number
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, digitcount);
//         originalNum /= 10;
//     }

//     if (result == n)
//         cout << n << " is an Armstrong number.";
//     else
//         cout << n << " is not an Armstrong number.";
// }

// void print_divisor(int n){
//     for(int i=1;i<=n;i++){
//         if (n%i==0) cout<< i<< " ";
//     }
// }

// void prime_number(int n){
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }   
//     }
//     if (count == 2) cout<<n<<" is a prime number. ";
//     if(count == 1) cout<<n<< " is neither a prime number nor a composite number .";
//     else cout<<n<<" is a composite number.";
// }

// void HCF(int n){
//     int m ;
//     cout<<"Enter second number : ";
//     cin>>m;
//     cout<<endl;
//     int hcf =1;
//     for(int i=1;i<=min(n,m);i++){
//     if(n%i==0&&m%i==0) {
//        hcf = i;
//     }
//     }
//     cout<<"HCF is :"<<hcf;
// } 

// void gcd(int n){
//     int m ;
//     cout<<"Enter second number : ";
//     cin>>m;
//     cout<<endl;
//     while(n>0 && m>0){
//         if(n>m) n=n%m;         
//         else m=m%n;
//     }
//     if(n==0) cout<<"GCD is : "<<m;
//     else cout<<"GCD is : "<<n;
// }
    
// int main(){
//     int n;
//     cout<< "Enter any number :  ";
//     cin>>n;
//     // countDigits(n);
//     // countDigits_eff( n);
//     // reverse_of_num(n);
//     // palindrome(n);
//     // Armstrong_num(n);
//     // print_divisor(n);
//     // prime_number(n);
//     // HCF(n);
//     // gcd(n);
//     }