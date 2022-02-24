int reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k) 
{
    int cnt = 0;
    
    for(int p = i; p <= j; p++)
    {
        if(abs(p - reverse(p)) % k == 0)
            cnt++;
    }
    return cnt;
}
