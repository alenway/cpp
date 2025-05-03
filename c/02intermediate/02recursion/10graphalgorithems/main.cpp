void DFS(vector<vector<int>>& graph, int vertex, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << " ";

    for(int adjacent : graph[vertex]) {
        if(!visited[adjacent])
            DFS(graph, adjacent, visited);
    }
}
