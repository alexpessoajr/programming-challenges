
#include<iostream>
#include<algorithm>
#include<queue>

#define MATRIX_SIZE 5
#define GRAPH_SIZE MATRIX_SIZE * MATRIX_SIZE

using namespace std;

bool find_path(int graph[GRAPH_SIZE][GRAPH_SIZE], int begin, int end) {
    bool visited[GRAPH_SIZE] = { false };
    bool found = false;
    queue<int> nodes_queue;
    int current_node;
    
    nodes_queue.push(begin);
    
    do {
        current_node = nodes_queue.front();
        nodes_queue.pop();
        visited[current_node] = true;
        
        for (int i = 0; i < GRAPH_SIZE; i++) {
            if (graph[current_node][i] && !visited[i]) {
                nodes_queue.push(i);
                if (i == end) {
                    found = true;
                    break;
                }
            }
        }
        
    } while(!nodes_queue.empty() && !found);
    
    return found;
}

int main(void) {
    int t, labelc, node1, node2;
    int graph[GRAPH_SIZE][GRAPH_SIZE], 
        matrix[MATRIX_SIZE][MATRIX_SIZE], 
        label[MATRIX_SIZE][MATRIX_SIZE];
    
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        
        labelc = 0;
        
        for (int i = 0; i < GRAPH_SIZE; i++) {
            for (int j = i; j < GRAPH_SIZE; j++) {
                graph[i][j] = graph[j][i] = 0;
            }
        }
        
        for (int i = 0; i < MATRIX_SIZE; i++) {
            for (int j = 0; j < MATRIX_SIZE; j++) {
                cin >> matrix[i][j];
                label[i][j] = labelc++;
            }
        }
        
        for (int i = 0; i < MATRIX_SIZE; i++) {
            for (int j = 0; j < MATRIX_SIZE; j++) {
                node1 = label[i][j];
                
                if (matrix[i][j] == 0) {
                    if (i > 0 && matrix[i-1][j] == 0) {
                        node2 = label[i-1][j];
                        graph[node1][node2] = 1;
                    }
                    if (j > 0 && matrix[i][j-1] == 0) {
                        node2 = label[i][j-1];
                        graph[node1][node2] = 1;
                    }
                    if (i < 4 && matrix[i+1][j] == 0) {
                        node2 = label[i+1][j];
                        graph[node1][node2] = 1;
                    }
                    if (j < 4 && matrix[i][j+1] == 0) {
                        node2 = label[i][j+1];
                        graph[node1][node2] = 1;
                    } 
                }
            }
        }
        
        cout << (find_path(graph, 0, GRAPH_SIZE - 1) ? "COPS" : "ROBBERS") << endl;
    }
    
    return 0;
}
