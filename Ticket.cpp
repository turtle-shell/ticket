// Ticket.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#include "stdafx.h"
#include <iostream>
using namespace std;

int tickets();
int i, j, k;

int main()
{
	setlocale(LC_ALL, "russian");
	int k = tickets();
	cout << " оличество счастливых билетов: " << k << endl;

	system("pause");
	return 0;
}

int tickets()
{
	int sum = 0;
	int i, j, k;
	char tickets[6];
	for (i = 0; i <= 999999; i++) {
		for (k = i, j = 0; j < 6; j++, k /= 10) {
			tickets[j] = k % 10;
		}
		if (tickets[0] + tickets[1] + tickets[2] == tickets[3] + tickets[4] + tickets[5]) {
			++sum;
		}
	}
	return sum;
}

