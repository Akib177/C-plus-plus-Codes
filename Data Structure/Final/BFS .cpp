#include <iostream>
#include <stdexcept>

using namespace std;

const int MAX_SIZE = 100;
const int MAX_NODES = 100;

class Queue{
private:
    int arr[MAX_SIZE];
    int f, r;

public:
    Queue(){
        f = 0;
        r = 0;
    }

    bool isEmpty(){
        return f == r;
    }

    bool isFull(){
        return r == MAX_SIZE;
    }

    void enqueue(int value){
        if (isFull()){
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        arr[r++] = value;
    }

    int dequeue(){
        if (isEmpty()){
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
        int value = arr[f++];
        return value;
    }
};

void BFS(int graph[MAX_NODES][MAX_NODES], int numNodes, int startNode){
    bool visited[MAX_NODES] = { false };
    Queue q;

    visited[startNode] = true;
    q.enqueue(startNode);

    while (!q.isEmpty()){
        int node = q.dequeue();

        cout << node << " ";

        for (int i = 1; i <= numNodes; ++i){
            if (graph[node][i] == 1 && !visited[i]){
                visited[i] = true;
                q.enqueue(i);
            }
        }
    }
}

int main() {
    // Example graph as an adjacency matrix
    // Graph:
    // 1 -- 2
    // |    |
    // 4 -- 3

    int graph[MAX_NODES][MAX_NODES];
    int numNodes = 4;

    graph[2][1] = 1;
    graph[1][2] = 1;
    graph[4][1] = 1;
    graph[1][4] = 1;
    graph[2][3] = 1;
    graph[3][2] = 1;
    graph[4][3] = 1;
    graph[3][4] = 1;

    int startNode = 1;
    cout << "BFS starting from node " << startNode << ": ";
    BFS(graph, numNodes, startNode);
    cout << endl;

    return 0;
}
