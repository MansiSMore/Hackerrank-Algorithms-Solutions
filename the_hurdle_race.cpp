#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int hurdleRace(int k, vector<int> height) 
{
    int m = *max_element(height.begin(), height.end());
    return max(m - k, 0);
}
int main()
{
    int iNo = 0, k = 0;
    cout << "Enter number of elements : \n";
    cin >> iNo;

    cout << "Enter the height the character can jump naturally : \n";
    cin >> k;

    vector<int> heights(iNo, 0);
    cout << "Enter the heights of each hurdle : \n";   
    for(int i = 0; i < iNo; i++)
    {
        int no = 0;
        cin >> no;
        heights.push_back(no);
    } 
    cout << "The minimum number of doses required : " << hurdleRace(k, heights) << endl;
    return 0;
}