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

	pivot = arr[low];		//Langkah ALgoritma No. 2

	i = low + 1;			//Langkah Algoritma No.3
	j = high;				//Langkah Algoritma NO.4

	while (1 <= j)			///Langkah Algoritma No.5
	{
		//search for an element less than or equal to pivot 
		