#include<iostream>

int solveMeFirst(int a, int b)
{
	return a+b;
}

int main()
{
	int a = 0, b = 0;
	std :: cin >> a >> b;
	int sum = 0;
	sum = solveMeFirst(a, b);
	std :: cout << sum << std :: endl;
	return 0;
}
