// Dangerous: could overflow stack for large n
int recursiveFunction(int n) {
    if (n == 0) return 0;
    return 1 + recursiveFunction(n-1);
}
