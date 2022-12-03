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


//                    	PROBLEM4
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num = 0, ctr = 0;
    cin >> num;
    int arr[num], *arrPtr = arr;
    for (int i = 0; i < num; i++)
    {
        cin >> *(arrPtr+i);
    }
    cout << endl;
    sort(arr, arr + num);
    for (int i = 0; i < num; i++)
    {
        if (*(arrPtr + i) == *(arrPtr + i + 1))
        {
            ctr++;
        }
    }
    cout << ctr << endl;
}
//                    PROBLEM5
#include <iostream>
using namespace std;
int max_element(int *p1, int n1)
{
    for (int i = 0; i < n1; i++)
    {
        cin >> *(p1 + i);
        if (*p1 < *(p1 + i))
        {
            *p1 = *(p1 + i);
        }
    }
    return *p1;
}

int main()
{
    int num1, num2;
    cin >> num1;
    int arr1[num1];
    int *p1 = arr1;
    max_element(p1, num1);
    cin >> num2;
    int arr2[num2];
    int *p2 = arr2;
    max_element(p2, num2);
    cout << *p1 * (*p2) << endl;
}
