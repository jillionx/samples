/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

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
