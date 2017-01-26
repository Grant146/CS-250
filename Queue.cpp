/* Grant McLain
Lab 1: Queues
Queue.cpp
*/

#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	float balance = 0.0;
	// Create a queue of floats, named transactions
	
	queue<float> transactions;

	// Push some + and - floats into the transactions queue.
	
	transactions.push(48.12);
	transactions.push(58.48);
	transactions.push(-49.1);
	transactions.push(-78);
	transactions.push(250);
	
	// Loop through all the transactions - while the queue is empty.
	
	while (!transactions.empty())
	
	// Within the loop, whatever amount is at the front of the queue,
	{
		float amount = transactions.front();

		cout << amount << " Amount added" << endl;

		balance += amount;

		transactions.pop();

	}
	// add it to the balance and then pop it off the queue.

	cout << "Final balance: $" << balance << endl;

	return 0;
}

/* Test Results
48.12 Amount added
58.48 Amount added
-49.1 Amount added
-78 Amount added
250 Amount added
Final balance: $229.5
Press any key to continue . . .
*/