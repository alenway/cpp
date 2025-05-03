bool solveMaze(int maze[N][N], int x, int y, int sol[N][N]) {
    // Base case: reached destination
    if (x == N-1 && y == N-1 && maze[x][y] == 1) {
        sol[x][y] = 1;
        return true;
    }

    // Check if valid cell
    if (isSafe(maze, x, y)) {
        sol[x][y] = 1;

        // Try moving right
        if (solveMaze(maze, x+1, y, sol))
            return true;

        // Try moving down
        if (solveMaze(maze, x, y+1, sol))
            return true;

        // Backtrack if no path works
        sol[x][y] = 0;
        return false;
    }

    return false;
}
