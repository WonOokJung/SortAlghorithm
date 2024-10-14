#include <iostream>
#include <vector>

using namespace std;

vector<int> SelectSort(vector<int> example)
{
	size_t size = example.size();
	int min, temp = 0;
	size_t index = 0;

	for (size_t i = 0; i < size - 1; i++)
	{
		min = example[i];

		for (size_t j = i; j < size; j++)
		{
			if (example[j] <= min)
			{
				index = j;
				min = example[j];
			}
		}	

		temp = example[index];
		example[index] = example[i];
		example[i] = temp;		
	}

	return example;
}

vector<int> InsertSort(vector<int> example)
{
	size_t size = example.size();
	int key, index = 0;

	for (size_t i = 1; i < size; i++)
	{
		key = example[i];
		index = i - 1;

		while (index >= 0 && example[index] > key)
		{
			example[index + 1] = example[index];
			index--;
		}

		example[index + 1] = key;
	}
	return example;
}

vector<int> BubbleSort(vector<int> example)
{
	int temp = 0;

	for (size_t i = example.size() - 1; i > 0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (example[j] > example[j + 1])
			{
				temp = example[j];
				example[j] = example[j + 1];
				example[j + 1] = temp;
			}
		}
	}

	return example;
}

int main()
{
	vector<int> test = { 5, 1, 2, 6, 3, 4 };

	test = SelectSort(test);
	//test = InsertSort(test);
	//test = BubbleSort(test);

	for (size_t i = 0; i < test.size(); i++)
	{
		cout << test[i];
		if (i != test.size() - 1)
		{
			cout << ", ";
		}
	}

	
}