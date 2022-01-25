#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
	vector<int> ans(2, 0);
	for(int i = 0; i < 3; i++)
	{
		if(a[i] > b[i])
			ans[0]++;
		else if(a[i] < b[i])
			ans[1]++;
	}
	return ans;
}

int main()
{
	vector<int> arr(3, 0), brr(3, 0);
	cout << "Enter elements for alice array : \n";
	for(int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

        cout << "Enter elements for bob array : \n";
	for(int i = 0; i < 3; i++)
        {
                cin >> brr[i];
        }
	
	cout << "Result array in format where Alice's score is is the first position, and Bob's score is in the second position : \n";
	vector<int> result = compareTriplets(arr, brr);
	cout << result[0] << " " << result[1] << endl;
	return 0;
}
