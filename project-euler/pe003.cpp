/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;

int main() {
	long long int testNum = 13195;
	int testFactor = 2;
	cout << "Prime factors of " << testNum << " :" << endl;

	//test for 2 as initial prime factor
	if (testNum % testFactor == 0) {
		cout << testFactor << endl;
		testNum = testNum / testFactor;
	}

	//continue with odd prime factors
	for (testFactor = 3; testFactor <= testNum; testFactor) {
		if (testNum % testFactor == 0) {
			cout << testFactor << endl;
			testNum = testNum / testFactor;
		}
		testFactor = testFactor + 2;
	}
}