#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int migratoryBirds(int arr_count, int* arr) 
{
    int cnt[6] = {0}, max = 0, pos = 0;
    
    for(int i = 0; i < arr_count; i++)
    {
        cnt[arr[i]]++;
        if(max < cnt[arr[i]])
        {
            max = cnt[arr[i]];
            pos = arr[i];
        }
        else if(max == cnt[arr[i]])
        {
            pos = fmin(pos, arr[i]);
        }
    }
    return pos;
}

int main()
{
    int iNo = 0;
    printf("Enter the number of elements : \n");
    scanf("%d", &iNo);

    int *arr = NULL;
    arr = (int*)malloc(iNo * sizeof(int));

    printf("Enter elements : \n");
    for(int i = 0; i < iNo; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The lowest type id of the most frequently sighted birds : %d\n", migratoryBirds(iNo, arr));

    return 0;
}