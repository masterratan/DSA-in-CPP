// LeetCode #861
// You are given an m x n binary matrix grid.
// A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).
// Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
// Return the highest possible score after making any number of moves (including zero moves).

// Solution:- 
// Step-1: Flip the rows having 0 at 0th index
// Step-2: Flip the columns having No. of Zeroes > No. of Ones
// Step-3: Sum of Decimals after converting from Binary

// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int rows = grid.size();
//         int cols = grid[0].size();
//         // Step-1: Flip the rows having 0 at 0th index
//         for(int i=0;i<rows;i++){ // Traverse Row Wise
//             if(grid[i][0] == 0){ // Flipping Row
//                 for(int j=0;j<cols;j++){
//                     if(grid[i][j]==0) grid[i][j] = 1;
//                     else grid[i][j] = 0;
//                 }
//             }
//         }
//         // Step-2: Flip the columns having No. of Zeroes > No. of Ones
//         for(int j=0;j<cols;j++){ // Traverse Column Wise
//             int noz = 0;
//             int noo = 0;
//             for(int i=0;i<rows;i++){
//                 if(grid[i][j]==0) noz++;
//                 else noo++;
//             }
//             if(noz > noo){ // Flipping Column
//                 for(int i=0;i<rows;i++){
//                     if(grid[i][j]==0) grid[i][j] = 1;
//                     else grid[i][j] = 0;
//                 }
//             }
//         }
//         // Step-3: Sum of Decimals after converting from Binary
//         int sum = 0;
//         for(int i=0;i<rows;i++){
//             int x = 1;
//             for(int j=cols-1;j>=0;j--){
//                 sum += grid[i][j]*x;
//                 x*= 2;
//             }
//         }
//         return sum;
//     }
// };