#include <iostream>
using namespace std;

const int N = 5;

class Queue {
private:
	int items[N];
	int front;
	int rear;

public:
	Queue() : front(0), rear(-1) {}

	void enqueue(int value) {
		if (rear == N - 1) {
			cout << "Overflow" << endl;
			return;
		}
		items[++rear] = value;
        cout<< "Inserted: " << value << endl;
	}

	void dequeue() {
		if (front > rear) {
			cout << "Underflow" << endl;
			return;
		}
		cout << "Deleted: " << items[front++] << endl;
	}

	void display() {
		cout << "Queue: ";
		for (int index = front; index <= rear; index++) {
			cout << items[index] << " ";
		}
		cout << endl;
	}
};

class CircularQueue {
private:
	int items[N];
	int front;
	int rear;

public:
	CircularQueue() : front(-1), rear(-1) {}

	void enqueue(int value) {
		int next = (rear + 1) % N;
		if (front != -1 && next == front) {
			cout << "Circular queue overflow" << endl;
			return;
		}
		if (front == -1) {
			front = 0;
		}
		rear = next;
		items[rear] = value;
        cout<< "Inserted: " << value << endl;
	}

	void dequeue() {
		if (front == -1) {
			cout << "Circular queue underflow" << endl;
			return;
		}
		cout << "Deleted: " << items[front] << endl;
		if (front == rear) {
			front = -1;
			rear = -1;
		} else {
			front = (front + 1) % N;
		}
	}

	void display() {
		cout << "Circular queue: ";
		if (front != -1) {
			int index = front;
			while (true) {
				cout << items[index] << " ";
				if (index == rear) {
					break;
				}
				index = (index + 1) % N;
			}
		}
		cout << endl;
	}
};

int main() {
	Queue queue;
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.dequeue();
	queue.display();

	CircularQueue circularQueue;
	circularQueue.enqueue(1);
	circularQueue.enqueue(2);
	circularQueue.enqueue(3);
	circularQueue.dequeue();
	circularQueue.enqueue(4);
	circularQueue.enqueue(5);
	circularQueue.enqueue(6);
	circularQueue.display();

	return 0;
}
