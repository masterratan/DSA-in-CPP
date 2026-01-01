// Fibonacci Series
// LeetCode #509

// DP => Recursion + Memorisation (Top to Bottom)
int fibo(int n, vector<int> &dp){
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
}
int fib(int n) {
    vector<int> dp(n+1,-1);
    return fibo(n,dp);
}

// DP => Tabulation or Iterative DP (Bottom to Top)
int fib(int n) {
    if(n <= 1) return n;
    int dp[n+1];
    for(int i=0; i<=n; i++){
        if(i<=1) dp[i] = i;
        else dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}