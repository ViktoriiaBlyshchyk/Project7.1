#include <iostream>
#include <array>
#include <ctime>

using namespace std;

void create(array <int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void print(array <int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void sort(array <int, 100>& arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		int max = arr[0];
		int min = arr[0];
		int imax = 0;
		int imin = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				imax = i;
			}
			else
				if (arr[i] < min)
				{
					min = arr[i];
					imin = i;
				}
		}
		arr[imin] = max;
		arr[imax] = min;
	}
}


int main()
{
	srand((unsigned int)time(NULL));

	int n;
	cout << "n = "; cin >> n;

	array <int, 100> arr = { 0 };
	create(arr, n);
	print(arr, n);
	sort(arr, n);
	print(arr, n);

	return 0;
}

