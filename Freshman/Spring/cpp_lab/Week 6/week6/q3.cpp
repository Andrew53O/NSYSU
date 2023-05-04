#include <iostream>

using namespace std;

void bubble_sort(int array[], int size);
void selection_sort(int array[], int size);

int main(void)
{
	int method, size;
	
	cout << "Enter the sorting code: (1: bubble sort; 2: selection sort)" << endl;
	cin >> method;
	
	cout << "Enter your sorting size: " << endl;
	cin >> size;
	
	int arr_sort[size];
	
	cout << "Enter the sorting numbers " << endl;
	for (int i = 0 ; i < size; i++)
	{
		cin >> arr_sort[i];
	}
	
	if (method == 1)
	{
		cout << "Bubble sort : " << endl;
		bubble_sort(arr_sort, size);
	}
	else
	{
		cout << "Selection sort : " << endl;
		selection_sort(arr_sort,size);
	}


	return 0;
}

void selection_sort(int array[], int size)
{
	int save_index;
	for (int i = 0; i < size; i++)
	{
		int min = array[i];
		for (int j = i; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				save_index = j;
			}	
		}
		
		if (min != array[i])
		{
			int temp = array[i];
			array[i] = array[save_index];
			array[save_index] = temp;
		}
	}
	
	
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

}

void bubble_sort(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

}
