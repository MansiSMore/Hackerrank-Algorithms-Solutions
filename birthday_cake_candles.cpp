#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) 
{
	int max = candles[0], cnt = 0;
    for(int i = 0; i < candles.size(); i++)
    {
        if(candles[i] > max)
        {
            max = candles[i];
            cnt = 0;
        }
        
        if(max == candles[i])
            ++cnt;
    }
    
    return cnt;
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
	
	cout << "Number of tallest candles are : " << birthdayCakeCandles(arr) << endl;

	return 0;
}
