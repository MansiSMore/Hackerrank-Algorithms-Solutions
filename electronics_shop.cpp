#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end(), greater<int>());
    int ans = 0, max = -1;
    for(int i = 0, j = 0; i < keyboards.size() && j < drives.size();)
    {
        ans = keyboards[i] + drives[j];
        if(ans <= b)
        {
            if(max < ans)
                max = ans;
            i++;
        }
        else if(ans > b)
        {         
            j++;
        }

    }
    return max;
}

int main()
{
    int budget = 0, n = 0, m = 0;
    cout << "Enter the budget, the number of keyboard models and the number of USB drive models : \n";
    cin >> budget >> n >> m;

    vector<int> keyboards(n, 0);
    vector<int> drives(m, 0);

    cout << "Enter the prices of each keyboard model : \n";
    for(int i = 0; i < n; i++)
    {
        int no = 0;
        cin >> no;
        keyboards.push_back(no);
    }

    cout << "Enter the prices of each USB drives : \n";
    for(int i = 0; i < m; i++)
    {
        int no = 0;
        cin >> no;
        drives.push_back(no);
    }

    cout << "A person can buy upto the cost : " << getMoneySpent(keyboards, drives, budget) << endl;

}