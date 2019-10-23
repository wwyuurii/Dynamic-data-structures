#include <iostream>
#include <stack>
#include <ctime>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RU");
	srand(clock());

	int n;
	cout << "Колличесво элементов: "; cin >> n; 

	cout << "Сгенерированные элемениты: "; 

	stack <int> L;
	for (int i = 0; i < n; i++)
	{
		int k = rand() % (-10 * 2 + 1) - 10; // От и до
		L.push(k);

		cout << k << ' ';
	}

	stack <int> L1, L2;
	while (!L.empty())
	{
		if (L.top() % 2 == false) L1.push(L.top());
		else L2.push(L.top());

		L.pop();
	}

	cout << "\n\nL1 [чётные]: ";

	while (!L1.empty())
	{
		cout << L1.top() << ' ';
		L1.pop();
	}

	cout << "\nL2 [нечётные]: ";

	while (!L2.empty()) 
	{ 
		cout << L2.top() << ' '; 
		L2.pop();
	}

	cout << "\n\n";
	system("pause");
	return 0;
}