#include <stdio.h>
#include<iostream>


using namespace std;

int Fibonacci_of(int index)
{
	if (index == 1 || index == 2)
		return 1;

	return Fibonacci_of(index - 1) + Fibonacci_of(index - 2);
}


int main()
{
	for (int i = 1; i <= 200; i++)
	{
		cout << Fibonacci_of(i) << endl;
	}
}