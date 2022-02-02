#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) 
{
    int iapp = 0, ioran = 0;
    for(int i = 0; i < apples.size(); i++)
    {
        if(((apples[i] + a) >= s) && ((apples[i] + a) <= t))
            iapp++;
    }
    
    for(int i = 0; i < oranges.size(); i++)
    {
        if(((oranges[i] + b) >= s) && ((oranges[i] + b) <= t))
            ioran++;
    }

    cout << iapp << endl << ioran << endl;
}

int main()
{
    int s = 0, t = 0, a = 0, b = 0, m = 0, n = 0;
    cout << "Enter starting location of sam's house : \n";
    cin >> s;

    cout << "Enter starting location of sam's house : \n";
    cin >> t;

    cout << "Enter location of apple's tree : \n";
    cin >> a;

    cout << "Enter location of orange's tree : \n";
    cin >> b;

    cout << "Enter number of apples : \n";
    cin >> m;

    cout << "Enter number of oranges : \n";
    cin >> n;

    vector<int> apples(m, 0);
    vector<int> oranges(n, 0);

    cout << "Enter apple's distances : \n";
    for(int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }

    cout << "Enter orange's distances : \n";
    for(int i = 0; i < n; i++)
    {
        cin >> oranges[i];
    }

    cout << "Number of apples and oranges : \n";
    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}