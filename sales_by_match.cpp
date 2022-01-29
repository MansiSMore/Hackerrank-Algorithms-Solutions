#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> arr) 
{
	int cnt = 0;

    	//creating vector of n numbers.
	vector<int> brr(n, 0);
	
	for(int i = 0; i < n; i++)
    	{
        	//take modulo of given number with n.
        	int amt = arr[i] % n;
        
        	//now according to that increase the counter of brr of that value.
        	brr[amt]++;
        
        	//cout << brr[amt] << " ";
        	//if count becomes two it means pair found now increase the counter and set              count to zero again.
        
       		if(brr[amt] == 2)
        	{   
            		cnt++;
            		brr[amt] = 0;
        	}
    	}	
	
	return cnt;
}

int main()
{
	int iNo = 0;
	cout << "Enter the number of pairs : ";
	cin >> iNo;

	vector<int> arr(iNo, 0);
	cout << "Enter integers of colors : ";
	
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}

	cout << "Number of pair of socks : " << sockMerchant(iNo, arr) << endl;
	return 0;
}
