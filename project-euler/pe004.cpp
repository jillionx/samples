/* A palindromic number reads the same both ways. The largest palindrome made 
from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
using namespace std;
const int MIN = 100;
const int MAX = 1000;

int main() {
	int product = 0;
	int reverse = 0;
	int test = 0;
	int max = 0;

	for (int i = MIN; i < MAX; i++) {
		for (int j = MIN; j < MAX; j++) {
			product = i * j;
			test = product;
			reverse = 0;
			while (test != 0) {
				reverse = (reverse * 10) + (test % 10);
				test = test / 10;
			}
			if (reverse == product) {
				if (product > max) {
					max = product;
				}
			}
		}
	}
	cout << max;
}