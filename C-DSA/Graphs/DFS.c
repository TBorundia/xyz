#include <stdio.h>

void DFS(int v, int G[][v], int SRC, int visited[]) {
    visited[SRC] = 1;
    printf("%d ", SRC);

    for (int i = 0; i < v; i++) {
        if (G[SRC][i] == 1 && visited[i] == 0) {
            DFS(v, G, i, visited);
        }
    }
}

int main() {
    int v = 5; // Number of vertices 
    int G[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0}
    }; 
    int visited[v];
    for (int i = 0; i < v; i++) {
        visited[i] = 0; 
    }

    printf("DFS:\n");
    for (int i = 0; i < v; i++) {
        if (visited[i] == 0) {
            printf("DFS starting from node %d: ", i);
            DFS(v, G, i, visited);
            printf("\n");
        }
    }

    return 0;
}
