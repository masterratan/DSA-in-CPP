// LeetCode #31
// Ques. Find the next permutations of Array.
// Note:- If not possible then print the sorted order in ascending order.

// Step-1: Find Pivot Index 'idx'.
// Step-2: Reverse elements from (idx+1 to end)
// Step-3: Swap elements at idx & idx+1

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         // 1) Finding pivot index
//         int idx = -1;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i] < nums[i+1]){
//                 idx = i;
//                 break;
//             }
//         }
//         if(idx == -1){ // If array is already greatest
//             reverse(nums.begin(),nums.end());
//             return;
//         }
//         // 2) Sorting / reverse after pivot
//         reverse(nums.begin()+idx+1, nums.end());
//         // 3) Find the just greater element than idx
//         int j = -1;
//         for(int i = idx+1;i<n;i++){
//             if(nums[i] > nums[idx]){
//                 j = i;
//                 break;
//             }
//         }
//         // 4) Swapping idx & j
//         int temp = nums[idx];
//         nums[idx] = nums[j];
//         nums[j] = temp;
//         return;
//     }
// };