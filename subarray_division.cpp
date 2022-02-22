#include <iostream>
#include <vector>
using namespace std;

//Sliding Window Technique.
int birthday(vector<int> s, int d, int m) 
{
    int ans = 0, aa = 0;
    
    for(int i = 0; i < m; i++)
        aa += s[i];
    for(int i = 0; i < s.size() - m + 1; i++)
    {
        if(aa == d)
            ans++;
        if (i + m < s.size())
            aa = aa - s[i] + s[i+m];
    }
    return ans;
}


int main()
{
    int iNo = 0;
    cout << "Enter the number of squares in the chocolate bar : \n";
    cin >> iNo;

    vector<int> vobj;
    cout << "Enter the numbers on the chocolate squares : \n";
    for(int i = 0; i < iNo; i++)
    {
        int no = 0;
        cin >> no;
        vobj.push_back(no);
    }

    int d = 0, m = 0;
    cout << "Enter Ron's birth day and his birth month : \n";
    cin >> d >> m;

    int ans = birthday(vobj, d, m);
    cout << "The number of ways the bar can be divided : " << ans << endl;

    return 0;
}