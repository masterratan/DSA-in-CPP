// LeetCode #34

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& arr, int x) {
//         vector<int> v; // answer vector
//         int n = arr.size();
//         // array is already sorted
//         // first occurence
//         bool flag = false;
//         int lo = 0;
//         int hi = n-1;
//         while(lo <= hi){
//             int mid = lo + (hi-lo)/2;
//             if(arr[mid] == x){
//                 if(mid == 0 or arr[mid-1] != x){ // First occurence
//                     flag = true;
//                     v.push_back(mid);
//                     break;
//                 }
//                 else{ // arr[mid] == x (Not first occurence)
//                     hi = mid - 1;
//                 }
//             }
//             else if(arr[mid] < x) lo = mid + 1;
//             else hi = mid - 1;
//         }
//         if(flag == false) v.push_back(-1);
//         // last occurence
//         flag = false;
//         lo = 0;
//         hi = n-1;
//         while(lo <= hi){
//             int mid = lo + (hi-lo)/2;
//             if(arr[mid] == x){
//                 if(mid == n-1 or arr[mid+1] != x){ // Last occurence
//                     flag = true;
//                     v.push_back(mid);
//                     break;
//                 }
//                 else{ // arr[mid] == x (Not last occurence)
//                     lo = mid + 1;
//                 }
//             }
//             else if(arr[mid] < x) lo = mid + 1;
//             else hi = mid - 1;
//         }
//         if(flag == false) v.push_back(-1);
//         return v;
//     }
// };