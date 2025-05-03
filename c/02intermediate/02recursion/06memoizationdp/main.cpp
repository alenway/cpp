// Fibonacci with memoization
int fibMemo(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1) return n;

    // Check if already calculated
    if (memo.find(n) != memo.end())
        return memo[n];

    // Calculate and store result
    memo[n] = fibMemo(n-1, memo) + fibMemo(n-2, memo);
    return memo[n];
}
