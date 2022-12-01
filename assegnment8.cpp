//               PROBLEM1
#include <iostream>
using namespace std;


int fahrenheit_celcius(double fahrenheit){
    double celcius = (fahrenheit - 32) * 5 / 9;
    cout << "Result : " << celcius;
    return 0;
}
int main()
{
    fahrenheit_celcius(67);
    return 0;
}

//                     PROBLEM2
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> myVector{ 6,4,5,3,3,2,4,0 };
	for (int i = 0; i < myVector.size(); ++i) {
		if (myVector[i] % 2 == 0) {
			myVector[i] = 2;
		}
		else {
			myVector[i] = 1;
		}
	}

	for (int i = 0; i < myVector.size(); ++i) {
		cout << myVector[i] << " ";
	}

	return 0;
}

//                    PROBLEM3
#include <iostream>
using namespace std;


int func(int x) {
	int y = 7 * x - 5;
	cout << y << endl;

	return 0;
}

int main() {
	func(7);
	func(67);

	return 0;
}
