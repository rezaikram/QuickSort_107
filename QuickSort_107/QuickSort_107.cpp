#include <iostream>
using namespace std;

int arr[20];					//array of integres to hold values			
int cmp_count = 0;				//number of comparison
int mov_count = 0;				//number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n--------------------" << endl;
	cout << "\n Enter Element Array" << endl;
	cout << "\n--------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//
