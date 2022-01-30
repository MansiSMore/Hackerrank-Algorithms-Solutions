#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr)
{
	long sum = arr[0], min = arr[0], max = arr[0];
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > max)
            max = arr[i];
        
        if(arr[i] < min)
            min = arr[i];
        
        sum += arr[i];
    }

    cout << (sum - max) << " " << (sum - min) << endl;
}

int main()
{
	int iNo = 0;
	cout << "Enter number of elements : \n";
	cin >> iNo;

	vector<int> arr(iNo, 0);
	cout << "Enter elements : \n";
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}
	
	miniMaxSum(arr);

	return 0;
}
