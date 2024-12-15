#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Queue (FIFO)
    cout << "Queue Example:" << endl;
    queue<int> q;

    // Add elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Display the front element
    cout << "Front element: " << q.front() << endl;
    cout << "Elements present in queue are: ";
    
    // Remove elements from the queue and display
    queue<int> temp_q = q;  // Create a temporary queue to print elements
    while (!temp_q.empty()) {
        cout << temp_q.front() << " ";
        temp_q.pop();
    }
    cout << endl;

    // Remove elements from the queue
    cout << "After pop operation: ";
    while (!q.empty()) {
        q.pop();
        if (!q.empty()) {
            cout << q.front() << " ";
        }
    }
    cout << endl;

    // Priority Queue (Max-Heap by default)
    cout << "\nPriority Queue Example (Max-Heap):" << endl;
    priority_queue<int> pq;

    // Add elements to the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(40);
    pq.push(20);

    // Display the top element (highest priority)
    cout << "Top element: " << pq.top() << endl;

    // Remove elements from the priority queue
    cout << "Priority queue contents: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Priority Queue (Min-Heap)
    cout << "\nPriority Queue Example (Min-Heap):" << endl;
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // Add elements to the min-heap
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(40);
    min_pq.push(20);

    // Display the top element (lowest priority)
    cout << "Top element (Min-Heap): " << min_pq.top() << endl;

    // Remove elements from the min-heap
    cout << "Priority queue (Min-Heap) contents: ";
    while (!min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;

    return 0;
}
// output
// Queue Example:
// Front element: 10
// Elements present in queue are: 10 20 30 40
// After pop operation: 20 30 40

// Priority Queue Example (Max-Heap):
// Top element: 40
// Priority queue contents: 40 30 20 10

// Priority Queue Example (Min-Heap):
// Top element (Min-Heap): 10
// Priority queue (Min-Heap) contents: 10 20 30 40