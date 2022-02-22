#include <iostream>
#include <cstdlib>
using namespace std;

string catAndMouse(int x, int y, int z) 
{
    if(abs(z - x) < abs(z - y))
        return "Cat A";
    else if(abs(z - x) > abs(z - y))
        return "Cat B";
    else
        return "Mouse C";
}

int main()
{
    int q = 0;
    cout << "Enter number of queries : \n";
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int x = 0, y = 0, z = 0;
        cout << "Enter positions for cats A, cats B and for mouse C : \n";
        cin >> x >> y >> z;

        cout << catAndMouse(x, y, z) << endl;
    }
    return 0;
}