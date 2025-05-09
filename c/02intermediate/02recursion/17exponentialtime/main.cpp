// Exponential time complexity O(2^n)
int naiveFib(int n) {
    if (n <= 1) return n;
    return naiveFib(n-1) + naiveFib(n-2);
}
