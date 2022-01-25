#include <iostream>
using namespace std;

int diagonalDifference(int **arr, int iSize)
{
	int absdiff = 0, diag1 = 0, diag2 = 0;
	for(int i = 0; i < iSize; i++)
	{
		for(int j = 0; j < iSize; j++)
		{
			if(i == j)
			{
				diag1 += arr[i][j];
			}
			if(i + j == iSize - 1)
			{
				diag2 += arr[i][j];
			}
		}
	}
	absdiff = diag1 - diag2;
	if(absdiff < 0)
		absdiff = (-absdiff);
	return absdiff;
}

int main()
{
	int iNo = 0;
	cout << "Enter the single integer for square matrix : \n"; 
	cin >> iNo;
	
	int **arr = new int*[iNo];
	for(int i = 0; i < iNo; i++)
	{
		arr[i] = new int[iNo];
	}

	cout << "Enter elements for square matrix : \n";
	for(int i = 0; i < iNo; i++)
	{
		for(int j = 0; j < iNo; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Elements from array : \n";	
	for(int i = 0; i < iNo; i++)
        {       
                for(int j = 0; j < iNo; j++)
                {       
                        cout << arr[i][j] << " ";
                }
		cout << endl;
        }
	
	cout << "The absolute difference between the sums of its diagonals : " << diagonalDifference(arr, iNo) << endl;

	return 0;
}


