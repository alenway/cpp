// Recursive factorial
int factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n-1);
}

// Iterative factorial
int factorialIterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
