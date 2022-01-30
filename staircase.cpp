#include <iostream>
using namespace std;

void staircase(int n)
{
	for(int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j < n ; j++)
        {
            if(j >= i)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
	int iNo = 0;
	cout << "Enter size of a staircase : \n";
	cin >> iNo;

    cout << "Output is : \n";
	staircase(iNo);

	return 0;
}
