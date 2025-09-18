// #include <bits/stdc++.h>
// using namespace std;

// // Function to insert nums[n] into the sorted part (0...n-1)
// void insert(vector<int>& nums, int n) {
//     if (n == 0 || nums[n-1] <= nums[n]) return;

//     swap(nums[n-1], nums[n]);

//     // Recurse for previous index
//     insert(nums, n-1);
// }

// // Recursive Insertion Sort
// void insertion_sort_recursive(vector<int>& nums, int n) {
//     if (n <= 1) return;

//     // Sort first n-1 elements
//     insertion_sort_recursive(nums, n-1);

//     // Insert last element into sorted array
//     insert(nums, n-1);
// }

// int main() {
//     vector<int> nums = {7, 4, 1, 55, 3};

//     insertion_sort_recursive(nums, nums.size());

//     cout << "Sorted array: ";
//     for (int x : nums) cout << x << " ";
//     cout << endl;

//     return 0;
// }
