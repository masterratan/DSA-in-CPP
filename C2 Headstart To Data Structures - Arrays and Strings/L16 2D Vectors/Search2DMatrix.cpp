// LeetCode #240
// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix.
// This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Solution:-
// Step-1: Start from top right cell.
// Step-2: If arr[i][j] > target -> Go left
//         If arr[i][j] < target -> Go down
