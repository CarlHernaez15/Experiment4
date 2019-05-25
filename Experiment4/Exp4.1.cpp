#include <iostream>
#include <conio.h>

using namespace std;

int add (int a, int b)
{
  int r;
  r = a + b;
  return r;
}

int subtract (int a, int b)
{
  int r;
  r = a - b;
  return r;
}

int multiply (int a, int b)
{
  int r;
  r = a * b;
  return r;
}

float divide (int a, int b)
{
  float r;
  r = a / b;
  return r;
}

float module (int a, int b)
{
	float r;
	r = a  % b;
	return r;
}
	
int main ()
{
	int choice, result, a , b;
  char confirm;
    
	cout << "MENU: " << endl;
	cout << "1. Addition " << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4. Division " << endl;
	cout << "5. Modulus " << endl;
	
	do
	{
	cout << "Enter the number of your choice: "; cin >> choice;
	cout << "Enter two variables: " << endl;
	cin >> a >> b;
	
	switch (choice)
	{
		case 1:
			cout << "Result: " << add(a,b) << endl;
			break;	
		case 2:	
			cout << "Result: " << subtract(a,b) << endl;
			break;
		case 3:	
			cout << "Result: " << multiply(a,b) << endl;
			break;
		case 4:	
			cout << "Result: " << divide(a,b) << endl;
			break;
		case 5:
			cout << "Result: " << module(a,b) << endl;
			break;
		default:
			cout << "ERROR";
	}
	
	cout << "Click y to proceed "; cin >> confirm;
	}
	while (confirm=='y'||confirm=='Y');
	system ("PAUSE");
	
	_getch();
	return 0;
}





