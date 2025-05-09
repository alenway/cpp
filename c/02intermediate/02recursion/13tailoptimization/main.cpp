// Non-tail recursive
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n-1);  // Needs to multiply after return
}

// Tail-recursive version
int factorialTail(int n, int acc = 1) {
    if (n <= 1) return acc;
    return factorialTail(n-1, n * acc);  // No pending operation
}
