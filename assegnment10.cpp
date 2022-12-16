//          PROBLEM 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector;
	int size;
	cout << "How many element do you enter: ";
	cin >> size;

	int result;
	for (int i = 0; i < size; i++)
	{
		cin >> result;
		myVector.push_back(result);
	}

	for (int i = 0; i < size; i++)
	{
		cout << myVector[i] * 2 << " ";
	}

}


//             PROBLEM 2

#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <iterator>
using namespace  std;

int main()
{
	int size;
	cout << "Enter size of deque: ";
	cin >> size;

	int val;
	deque<int> deq;
	for (int i = 0; i < size; ++i)
	{
		cin >> val;
		deq.push_back(val);
	}
	for (int i = 0; i < size; ++i)
	{
		cout << deq[i] << " ";
	}
	cout << "\n";
	
	deq.erase(deq.end() - 2);

	for (auto result = deq.begin(); result != deq.end(); result++)
	{
		cout << *result << " ";
	}


	return 0;
}



//     PROBLEM 3

#include <iostream>
#include <vector>
#include <forward_list>

using namespace std;

int main()
{
    int size;
    cout << "enter size: ";
    cin >> size;
    int val;
    forward_list<int> fList;
    for (int i = 0; i < val; i++) {
        cout << i << " ";
        cin >> val;
        fList.push_front(val);
    }

    fList.sort();
    fList.unique();

    for (auto  result : fList) {
        cout << result << " ";
    }

    return 0;
}




// PROBLEM 4
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
    int size;
    int much;
    int val;
    cout << "Enter size, much val"
    cin >> size >> much >> val;

    vector <int> vec;
    int input;

    for (int i = 0; i < size; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    for (int i = 0; i < much; i++)
    {
        if (much % 2 == 0)
        {
            vec.insert(vec.begin() + size / 2, val);
        }
        else {
            vec.insert(vec.begin() + (size / 2) + 1, val);
        }
    }

    for (auto i : vec) 
    {
        cout << i << " ";
    }



	return 0;
}


//                  PROBLEM 5

#include <iostream>
#include <vector>
#include <forward_list>
#include <iterator>
using namespace  std;

void loW(vector<char>& v1, int size1, vector<char>& v2, int size2)
{
    vector<char> vect;
    for (int i = 0; i < size1; i++)  
    {
        for (int z = 0; z < size2; z++)
        {
            if (v1[i] == v2[z]) 
            {
                v2[z] = toupper(v2[z]);
            }
        }
    }
}

int main() 
{

    vector<char> veC1;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        char ch;
        cin >> ch;
        veC1.push_back(ch);
    }

    vector<char> veC2;
    int size2;
    cin >> size2;

    for (int i = 0; i < size2; i++) 
    {
        char input;
        cin >> input;
        veC2.push_back(input);
    }
    loW(veC1, size, veC2, size2);
    vector<char>::iterator itr;
    for (itr = veC2.begin(); itr != veC2.end(); itr++) 
    {
        cout << *itr << " ";
    }
}



//    PROBLEM 6
#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq = {};
	int size;
	cout << "Enter size of deque: ";
	cin >> size;
	int element;
	for (int i = 0; i < size; i++)
	{
		cin >> element;
		dq.push_back(element);
	}

	cout << "The deque in reverse order: ";
	for (auto it = dq.rbegin(); it != dq.rend(); ++it)
		cout << *it << " ";

	return 0;
}


//            PROBLEM 7
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v1 = { 1, 2, 3, 4, 5 };

	vector<int>::iterator result;

	for (result = v1.begin(); result != v1.end(); result++) {}
	for (int i = 0; i < v1.size(); i + 2)
	{
		cout << *result[i] << " ";
	}

	return 0;
}
