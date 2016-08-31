/* sample input :-
2
6
5 5 10 100 10 5
4
3 2 7 10

output
110
13
*/

#include <stdio.h>
#include <stdlib.h>

int maxsum(int a[], int n)
{
    if (n<0)
        return 0;
    else
    {
        int incl_sum = a[n]+maxsum(a,n-2);
        int excl_sum = maxsum(a, n-1);
        if (incl_sum >= excl_sum)
            return incl_sum;
        else
            return excl_sum;
        //return max(incl_sum, excl_sum);
    }
}

int main() {
	//code
	int t, n, i, j;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
	    scanf("%d", &n);
	    int * a = (int *)malloc(sizeof(int)*n);
	    for (j=0; j<n; j++)
	    {
	        scanf("%d", (a+j));
	    }
	    int maxSum = maxsum(a, n);
	    printf("%d\n",maxSum);
	    free(a);
	}
	return 0;
}
