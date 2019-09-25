#include <iostream>
#include <queue>

using namespace std;

queue<int>line;
void move_to_rear(queue<int> &line);

int main()
{
	queue<int>line;
	cout << "Queue before change -> ";
	for (int i = 0; i < 6; i++)
	{	
		cout << i << " ";
		line.push(i);
	}
	move_to_rear(line);
	cout << endl;
	cout << "Queue after change -> ";
	for (int i = 0; i < 6; i++)
	{
		cout << line.front() << " ";
		line.pop();
	}

	return 0;
}

void move_to_rear(queue<int> &line) {
	line.push(line.front());
	line.pop();

}