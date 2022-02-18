#include <iostream>
using namespace std;

char* kangaroo(int x1, int v1, int x2, int v2) 
{
    if (((x2 - x1) * (v2 - v1) < 0) && ((x2 - x1) % (v2 - v1) == 0))
        return "YES";
    return "NO";
}

int main()
{
	int x1 = 0, v1 = 0, x2 = 0, v2 = 0  ;
	cout << "Enter values for x1, v1, x2, v2 : \n";
	cin >> x1 >> v1 >> x2 >> v2;

	cout << "kangaroos meet at the same location : " << kangaroo(x1, v1, x2, v2) << endl;

	return 0;
}
