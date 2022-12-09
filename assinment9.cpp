//           PROBLEM 1
#include<iostream>
using namespace std;

void count(string str)
{
    int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else
            lower++;
    }
    cout << "Upper case letters: " << upper << endl;
    cout << "Lower case letters : " << lower << endl;
}


int main()
{
    string str = "AdGUnkoovTJKOfrwunT";
    count(str);
    return 0;
}


//          PROBLEM 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(90);
	vec.push_back(22);
	vec.push_back(37);
	vec.push_back(44);
	vec.push_back(17);
	vec.push_back(88); 
	vec.push_back(76); 
	vec.push_back(33);
	vec.push_back(10);
	
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] % 11 == 0)
		{
			vec.erase(remove(vec.begin(), vec.end(), vec[i]), vec.end());
		}
	}
	for (auto &print : vec) {
		cout << print << " ";
	}
}


//                    PROBLEM 3
# include < iostream >
using namespace std;

double fun() {
	static double x = 9.34;
	x--;
	return x;
}

void w(float& a, float& b, float& c) {
	c = a - b;
}

void toNegative(int* p) {
	*p *= -1;
}

float important(float* a) {
	*a = *a / 8 + 3;
	return *a;
}

int main() {
	int x1, x2, x3;
	float d;
	float arr[] = { 45 ,12 ,340 };
	char z = 'Y';
	fun();
	x1 = *arr;
	x2 = *(arr + 1);
	x3 = *(arr + 2);
	w(*arr, *(arr + 1), *(arr + 2));
	double result = (fun() + d + z) / (important(arr-2) - (z + 2));
	cout << result << endl;
	return 0;
}


//                       PROBLEM 4
# include < iostream >
# include < iomanip >
using namespace std;
void multip(int* p, int* c) {
	float s = 0;
	for(int i = 0; i < *c; i++) {
		s += *p;
	}
	*p = s;
}
void toNegative(float& c) {
	c = -c;
}
int main() {
	int a = 15, b = 13;
	float x = 9.4;
	float y, z;
	double arr[] = { 9.09 ,3.22 ,5.17 ,4.8 };
	multip(&a, &b);

	y = arr[0] - arr[3];
	z = arr[0] + arr[3];
	++z;

	double result = (a+x) / z + (arr[1] + arr[2])/y;
	cout << result << endl;
	return 0;
}

//                    PROBLEM 5
#include<iostream>
using namespace std;


void funct(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arr[i] = -arr[i];
		}
		else
		{
			arr[i] = -arr[i];
		}
	}
	

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

}

int main()
{
	int arr[] = { -1, 6, -9, 0, 3 };
	int* ptr = arr;
	int arSize = sizeof(arr) / sizeof(arr[0]);
	funct(ptr, arSize);
}




//                 PROBLEM 6
#include<iostream>
#include<math.h>
using namespace std;


double func(double x )
{
    double y;
    y = ((x * x * x * x) + 45 * x - 1) / ((x + 17) * (x + 17) - x / 23 + 9);
    return y;
}
int main() {
    int x;
    cout << "Enter value of x: ";
    cin >> x;
    cout << func(x);
    return 0;
}




//                     PROBLEM 7
#include <iostream>
using namespace std;

int print(int arr[], int size, int value) {
    if (size <= 0) {
        return -1;
    }
    else {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return i;
            }
            else {
                cout << "Number is not exist in the list" << endl;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 2,4,6,7,8,9 };
    int* newarr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 7;
    cout << print(newarr, size, value);
    return 0;
}


//                    PROBLEM 8
#include<iostream>
using namespace std;

int main() {

    int n, r, rev = 0;
    int* num;

    cout << "Enter: ";
    cin >> n;

    num = &n;

    while (*num > 0) {
        r = *num % 10;
        rev = rev * 10 + r;
        *num = *num / 10;
    }

    cout << "Reverse number is: " << rev;

    return 0;
}
