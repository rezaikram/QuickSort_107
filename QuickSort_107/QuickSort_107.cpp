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
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;

	//Partition the list into two parts
	//one containing element less that or equal to pivot 
	//OUther conntainning elements greather than pivot 
	//Langkah Algoritma No.1

	