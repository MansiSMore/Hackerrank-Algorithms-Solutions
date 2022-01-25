#include <iostream>
using namespace std;

int simpleArraySum(int *arr, int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int iNo = 0;
	cout << "Enter number of elements : \n";
	cin >> iNo;

	int *arr = new int[iNo];
	//char *crr = (char*)&iNo;
	//cout << sizeof(arr) << endl;	//Here, it will give you size of pointer.
	
	/*
	You can't. The size of an array allocated with new[] is not stored in any way in which it can be accessed. Note 	that the return type of new [] is not an array - it is a pointer (pointing to the array's first element). So if 	you need to know a dynamic array's length, you have to store it separately.
	*/
	
	cout << "Enter elements : \n";
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}
	
	int sum = simpleArraySum(arr, iNo);
	cout << "Array Sum : " << sum << endl;

	return 0;
}
