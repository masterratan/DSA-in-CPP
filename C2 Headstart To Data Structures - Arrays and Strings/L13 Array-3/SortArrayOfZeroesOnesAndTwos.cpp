// Ques. Sort the array of 0's, 1's and 2's. 
// LeetCode #75

// Solved using Dutch Flag Algorithm

// METHOD-1: Two Pass Method 
// class Solution {
// public:
//     void sortColors(vector<int>& v) {
//         int n = v.size();
//         int count0 = 0;
//         int count1 = 0;
//         int count2 = 0;
//         for(int i=0;i<n;i++){
//             if(v[i] == 0) count0++;
//             else if(v[i] == 1) count1++;
//             else count2++;
//         }
//         for(int i = 0; i < n ; i++){
//             if(i < count0) v[i] = 0;
//             else if(i >= count0 and i < count0 + count1) v[i] = 1;
//             else v[i] = 2;
//         }
//     }
// };

// METHOD-2: Three Pointer Method [Best Method] [Learn the Algorithm]
// 1) hmesha mid ke baare mein socho
// 2) 0 to low-1 -> 0 , high+1 to end -> 2
// 3) low to mid-1 -> 1 (ye apne aap ho jayega)
// class Solution {
// public:
//     void sortColors(vector<int>& v) {
//         int n = v.size();
//         int low = 0;
//         int mid = 0;
//         int high = n-1;
//         while(mid <= high){
//             // Condition-1
//             if(v[mid] == 2){
//                 // swap ( v[mid] & v[high] )
//                 int temp = v[mid];
//                 v[mid] = v[high];
//                 v[high] = temp;
//                 high--;
//             }
//             // Condition-2
//             if(v[mid] == 0){
//                 // swap ( v[mid] & v[low] )
//                 int temp = v[mid];
//                 v[mid] = v[low];
//                 v[low] = temp;
//                 low++;
//                 mid++;
//             }
//             // Condition-3
//             if(v[mid] == 1){
//                 mid++;
//             }
//         }
//     }
// };