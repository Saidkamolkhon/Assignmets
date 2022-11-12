
/*     Problem5
#include <iostream>
using namespace std;
int main() {
	int myArr[10];
	int oddElemts = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Enter " << i << " of arr: ";
		cin >> myArr[i];
	}

	for (int i = 0; i < 10; i++) {
		if (myArr[i] % 2 != 0) {
			oddElemts++;
		}
	}
	cout << oddElemts;
} */

/*     Problem4
#include <iostream>  
using namespace std;
int main()
{
	int number = 0;
	int res = 0;
	int result = 0;
	int temp;
	cout << "Enter the number: ";
	cin >> number;
	temp = number;
	while (number > 0){
		res = number % 10;
		result = (result * 10) + res;
		number = number / 10;
	}
	if (temp == result) {
		cout << temp << " is Palindrome number.";
	}
	else {
		cout << temp << " is not Palindrome number";
	}
	return 0;
}  */


/* Problem3
#include <iostream>
using namespace std;

int main() {
	static char character = 'A';
	static int number;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 0; i < number; i++) {
		cout << character++ << " ";
	}
} */

#include <iostream>
using namespace std;

int globalNum;
int main() {
	int localNum;
	cout << "Enter a global number: ";
	cin >> globalNum;

	cout << "\nEnter a local Number: ";
	cin >> localNum;
	
	cout << "Answer is " << globalNum % localNum;

}
