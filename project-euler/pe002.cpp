#include <iostream>
using namespace std;

const int MAX = 4000000;

int main() {
	int lastTerm = 0;
	int currentTerm = 0;
	int sum = 0;

	for (int i = 1; i < MAX; i) {
		if ((i % 2) == 0) {
			sum += i;
		}
		lastTerm = currentTerm;
		currentTerm = i;
		i += lastTerm;
	}

	cout << sum << endl;
}