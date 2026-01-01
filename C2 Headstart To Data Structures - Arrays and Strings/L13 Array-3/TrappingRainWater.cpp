// Very Very Important
// LeetCode #42
// Trapping Rain Water

// Creating two extra array:-
// class Solution {
// public:
//     int trap(vector<int>& height) {
//       int n = height.size();
//       // Step-1: Previous Greatest Element Array
//       int prev[n];
//       prev[0] = -1;
//       int max = height[0];
//       for(int i=1;i<n;i++){
//         prev[i] = max;
//         if(max < height[i]) max = height[i];
//       }
//       // Step-2: Next Greatest Element Array
//       int next[n];
//       next[n-1] = -1;
//       max = height[n-1];
//       for(int i=n-2;i>=0;i--){
//         next[i] = max;
//         if(max < height[i]) max = height[i];
//       }
//       // Step-3: Minimum Array -> Prev as minimum
//       for(int i=0;i<n;i++){
//         prev[i] = min(prev[i],next[i]);
//       }
//       // Step-4: Calculating Water
//       int water = 0;
//       for(int i=0;i<n;i++){
//         if(prev[i] > height[i]) water += prev[i] - height[i];
//       } 
//       return water;  
//     }
// };

// MORE OPTIMISED:- Creating only one extra array:- (Best Solution)
// class Solution {
// public:
//     int trap(vector<int>& height) {
//       int n = height.size();
//       // Step-1: Previous Greatest Element Array
//       int prev[n];
//       prev[0] = -1;
//       int max = height[0];
//       for(int i=1;i<n;i++){
//         prev[i] = max;
//         if(max < height[i]) max = height[i];
//       }
//       // Step-2: Next Greatest Element Array -> Prev as next 
//       prev[n-1] = -1;
//       max = height[n-1];
//       for(int i=n-2;i>=0;i--){
//         if(max < prev[i]) prev[i] = max;
//         if(max < height[i]) max = height[i];
//       }
//       // Step-4: Calculating Water
//       int water = 0;
//       for(int i=0;i<n;i++){
//         if(prev[i] > height[i]) water += prev[i] - height[i];
//       } 
//       return water;  
//     }
// };