int nestedFunction(int n) {
    if (n <= 10)
        return n * 2;
    else
        return nestedFunction(nestedFunction(n/3));
}
