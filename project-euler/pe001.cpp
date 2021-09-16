#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
	int counter = 0;

	for (int i = 0; i < MAX; i++) {
		if (i % 3 == 0 || i % 5 == 0) { 
            counter += i;
        }
    }

	cout << counter << endl;
}