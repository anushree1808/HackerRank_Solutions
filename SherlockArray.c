/* This is a brute force approach to solve the problem with a runtime of O(n).
Find if array can be divided into two subarrays of equal sum
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findSum(int a[], int len)
    {
    if (len==1)
        return 1;
    int i = 1;
    int sumL = summer(a,0,i-1);
    int sumR = summer (a, i+1,len-1 );
    while (i<= len-2)
    {
     if (sumL == sumR)
         return 1;
     sumL += a[i];
     sumR -= a[i+1];
     i++;
    }
    return 0;
}

int summer(int a[], int s, int e)
{
    int sum = 0;
    for (int i=s; i<=e; i++)
        sum+= a[i];
    //printf("%d\n", sum);
    return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int tc;
    scanf("%d", &tc);
    int i=0;
    for (i=0; i<tc; i++)
    {
        int len;
        scanf("%d", &len);
        int j=0;
        int a[len];
        for (j=0; j<len; j++)
        {
            scanf("%d", &a[j]);
        }
        int res = findSum(a,len);
        if (res==1)
            printf("%s", "YES\n");
        else
            printf("%s", "NO\n");
    }
    return 0;
}
