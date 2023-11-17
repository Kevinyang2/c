#include <stdio.h>

typedef struct SStable
{
    int *N;
    int length;
} SStable;

int Search_Bin(SStable S, int key);

int main()
{
    SStable S;
    int M[] = {2, 3, 6, 7, 25, 64, 65, 77, 87};
    for (int i = 0; i < 9; i++)
    {
        S.N[i] = M[i];
    }
    S.length = 9;
    printf("%d\n", Search_Bin(S, 87));
    return 0;
}

int Search_Bin(SStable S, int key)
{
    int low = 0;
    int high = S.length - 1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (key == S.N[mid])
        {
            return mid + 1;
        }

        else if (key > S.N[mid])
        {
            low = mid + 1;
        }
        else if (key < S.N[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}
