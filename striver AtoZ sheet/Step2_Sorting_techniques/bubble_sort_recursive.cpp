// #include<bits/stdc++.h>
// using namespace std;


// // Recursive function for Bubble Sort
// void bubbleSortRecursive(vector<int>& arr, int n) {
//     // Base case
//     if (n == 1) return;

//     // Perform one pass of bubble sort
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             swap(arr[i], arr[i + 1]);
//         }
//     }

//     // Largest element is now at the end, recurse for remaining array
//     bubbleSortRecursive(arr, n - 1);
// }

// int main() {
//     vector<int> nums = {64, 34, 25, 224, 22, 11, 90};

//     bubbleSortRecursive(nums, nums.size());

//     cout << "Sorted array: ";
//     for (int x : nums) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }
