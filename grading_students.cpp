#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) 
{
    vector<int> result;
    for(int i = 0; i < grades.size(); i++)
    {
        if(grades[i] < 38)
            result.push_back(grades[i]);
        else
        {
            int quotient = grades[i] / 5;
            quotient++;
            if((quotient * 5) - grades[i] < 3)
                result.push_back(quotient * 5);
            else
                result.push_back(grades[i]);
        }
    }
    return result;
}

int main()
{
    int iNo = 0;
    cout << "Enter number of students : \n";
	cin >> iNo;

	vector<int> arr(iNo, 0);
	cout << "Enter grades : \n";
	for(int i = 0; i < iNo; i++)
	{
		cin >> arr[i];
	}

	vector<int> result(iNo, 0);

    result = gradingStudents(arr);
    cout << "Grades after rounding : \n";
    for(int i = 0; i < iNo; i++)
	{
		cout << result[i] << endl;
	}
    return 0;
}