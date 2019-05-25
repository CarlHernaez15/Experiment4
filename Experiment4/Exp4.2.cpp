#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int array_size;
	int num[array_size];
	int temp;
	
	
	cout<< "Selection Sorting..." << endl;
	cout<< "Enter the needed number of elements: "; cin >> array_size;
	cout<< "Enter the "<< array_size << " variables: \n";
	
	for (int i=0; i<array_size; i++)
	{
		cin>>num[i];
	}
	
	for (int i=0; i<array_size-1; i++)
	{
		for(int j= i+1; j<array_size; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	

	
	for(int i=0; i<array_size; i++)
	{
		cout << num[i]<<" ";
	}

    _getch();
    return 0;
}
