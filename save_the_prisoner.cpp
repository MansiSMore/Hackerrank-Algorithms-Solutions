int saveThePrisoner(int n, int m, int s) 
{
    int ans = 0;
    ans = ((m - 1 + s - 1) % n) + 1;
    return ans;
}
