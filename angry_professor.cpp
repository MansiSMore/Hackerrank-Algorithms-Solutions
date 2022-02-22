string angryProfessor(int k, vector<int> a) 
{
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] <= 0)
            cnt++;
    }
    if(k > cnt)
        return "YES";
    else
        return "NO";
}