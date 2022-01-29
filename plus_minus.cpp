#include <iostream>
using namespace std;

void plusMinus(int arr_count, int* arr) 
{
    int iPositive = 0, iNegative = 0;
    
    for(int i = 0; i < arr_count; i++)
    {
        if(arr[i] < 0)
            iNegative++;
        else if(arr[i] > 0)
            iPositive++;
    }
    int iZero = arr_count - (iPositive + iNegative);

    printf("%.6f\n", (float)iPositive / arr_count);
    printf("%.6f\n", (float)iNegative / arr_count);
    printf("%.6f\n", (float)iZero / arr_count);

}
int main()
{
	int iNo = 0;
	cout << "Enter number of elements : \n";
	cin >> iNo;

	int *arr = new int[iNo];

	cout << "Enter elements : \n";
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}
	
	plusMinus(iNo, arr);

	return 0;
}
