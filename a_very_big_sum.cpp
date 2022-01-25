#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(vector<long> arr)
{
	long sum = 0;
	for(int i = 0; i < arr.size(); i++)
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

	vector<long> arr(iNo, 0);
	cout << "Enter Elements : \n";
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}
	
	cout << aVeryBigSum(arr) << endl;
	return 0;
}
