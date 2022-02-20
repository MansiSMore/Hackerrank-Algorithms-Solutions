#include <iostream>
#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) 
{
    vector<int> ans(2, 0);
    int max = scores[0], min = scores[0], cnt1 = 0, cnt2 = 0;
    for(int i = 1; i < scores.size(); i++)
    {
        if(max < scores[i])
        {
            max = scores[i];
            ans[0] = ++cnt1;
        }
        else if(min > scores[i])
        {
            min = scores[i];
            ans[1] = ++cnt2;
        }
    }
    return ans;
}

int main()
{
    int iNo = 0;
    cout << "Enter number of games : \n";
    cin >> iNo;

    vector<int> vobj;
    cout << "Enter points scored per game : \n";
    for(int i = 0; i < iNo; i++)
    {
        int no = 0;
        cin >> no;
        vobj.push_back(no);
    }

    vector<int> ans;
    ans = breakingRecords(vobj);
    cout << "The number of times Maria breaks her records for most and least points scored during the season : " << ans[0] << " " << ans[1] << endl;

    return 0;
}