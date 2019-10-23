#include <iostream>
#include <stack>
#include <ctime>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int k, n; 
	stack <int> L, L1, L2;

	cout << "Колличесво элементов: ";
	cin >> n; 

	cout << "Сгенерированные элемениты: "; 
	for (int i = 0; i < n; i++)
	{
		k = rand() % 10;
		cout << k << ' ', L.push(k);
	}

	while (!L.empty())
	{
		((k = L.top()) & 1 ? L2 : L1).push(k), L.pop();
	}

	cout << "\n\nL1 [чётные]: ";

	while (!L1.empty())
	{
		cout << L1.top() << ' '; L1.pop();
	}

	cout << "\nL2 [нечётные]: ";

	while (!L2.empty()) 
	{ 
		cout << L2.top() << ' '; L2.pop();
	}	
	cout << "\n";

	system("pause");
	return 0;
}