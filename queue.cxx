#include <iostream>
#define SIZE 5
using namespace std;
int queueArr[SIZE];
int front = -1;
int rear = -1;

void display()
{
	if (rear == -1 || front > rear)
		cout << "Queue:;empty";
	else
		for (int i = front; i <= rear; i++)
			cout << queueArr[i] << " " << endl;
}
void enqueue(int n)
{
	if (rear < SIZE - 1)
	{
		if (front == -1)
			front++;
		queueArr[++rear] = n;
	}
	else
		cout << "Queue: overflow" << endl;
}
void dequeue()
{
	if (rear < front || front == -1)
	{
		cout << "Queue: empty" << endl;
		front = -1;
		rear = -1;
	}
	else
		cout << "Dequeue value: " << queueArr[front++] << endl;
}
void display2()
{
	if (front == -1)
	{
		cout << "Queue: empty\n";
	}
	else if (front > rear)
	{
		for (int i = front; i < SIZE; i++)
		{
			cout << "[" << i << "]: " << queueArr[i] << endl;
		}
		for (int i = 0; i <= rear; i++)
		{
			cout << "[" << i << "]: " << queueArr[i] << endl;
		}
	}
	else
	{
		for (int i = front; i <= rear; i++)
		{
			cout << "[" << i << "]: " << queueArr[i] << endl;
		}
	}

}
void enqueue2(int n)
{
	if (front == -1)
	{
		front = 0;
		rear = 0;
		queueArr[rear] = n;
	}
	else if ((rear + 1) % SIZE == front)
	{
		cout << "Queue: full\n";
	}
	else
	{
		rear = (rear + 1) % SIZE;
		queueArr[rear] = n;
	}
}
void dequeue2()
{
	if (front == -1)
	{
		cout << "Queue: empty!\n";
	}
	else
	{
		cout << "You dequeue the value " << queueArr[front] << endl;
		if (front == rear)
		{
			front = -1;
			rear = -1;
			return;
		}
		front = (front + 1) % SIZE;
	}
}

int main()
{
	int ch;
	do {
		system("cls");
		
		cout << endl << "Queue Operation" << endl;
		cout<< " "<<endl;
		
		cout << "1. Queue as an Array\n";
		cout << "2. Queue as an Circular\n";
		cout << "3. Exit\n";
		cout << "Select: [ex. 2] ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			while (1)
			{
				int choice;
				system("cls");
				cout << "SHOWING QUEUE AS AN ARRAY\n";
				cout << "\n";
				cout << "1 - Enqueue\n";
				cout << "2 - Dequeue\n";
				cout << "3 - Display\n";
				cout << "4 - Exit\n";
				cout << "===================\n";
				cout << "Enter your choice: ";
				cin >> choice;
				switch (choice) {
				case 1:
					int num;
					cout << "Enter a number to enqueue: ";
					cin >> num;
					enqueue(num);
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(1);
				default:
					cout << "\nWrong choice!\n";
				}
				system("pause");

			}
		case 2:

			while (1)
			{
				int choice;
				system("cls");
				cout << "Implementing QUEUE AS AN CIRCULAR\n";
				cout << "\n";
				cout << "1 - Enqueue\n";
				cout << "2 - Dequeue\n";
				cout << "3 - Display\n";
				cout << "4 - Exit\n";
				cout << "===================\n";
				cout << "Enter your choice: ";
				cin >> choice;
				switch (choice) {
				case 1:
					int num;
					cout << "Enter a number to enqueue: ";
					cin >> num;
					enqueue2(num);
					display2();
					break;
				case 2:
					dequeue2();
					break;
				case 3:
					display2();
					break;
				case 4:
					exit(1);
				default:
					cout << "\nInvalid Input!\n";
				}
				system("pause");
			}
		case 3:
			exit(0);
		default:
			cout << "\nInvalid Input!\n";
		} 
	} while (ch != 4); 
	system("pause");
	return(0);
}