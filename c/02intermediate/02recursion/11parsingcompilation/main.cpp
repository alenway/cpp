// Simplified expression parser
double parseExpression() {
    double left = parseTerm();

    while(currentToken == '+' || currentToken == '-') {
        char op = currentToken;
        getNextToken();
        double right = parseTerm();

        if(op == '+')
            left += right;
        else
            left -= right;
    }

    return left;
}

double parseTerm() {
    double left = parseFactor();

    // Similar logic for * and /
    // ...

    return left;
}
