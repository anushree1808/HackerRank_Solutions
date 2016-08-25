#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * possible(int m, int n, int a[])
{
    int i, j;
    static int pos[2];
    for(i=0; i<n-1; i++)
    { for(j=i+1; j<n; j++)
            if (a[i]+a[j]==m)
            {
                //printf("hai");
                pos[0] = i+1;
                pos[1] = j+1;
                break;
            }
    }
    //printf("%d %d", pos[0], pos[1]);
    return pos;
}

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    //return 0;
    int tc;
    scanf("%d",&tc);
    for (int t=0; t<tc; t++)
    {
        int m;
        scanf("%d", &m);
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j=0; j<n; j++)
        {
            scanf("%d", &a[j]);
        }
        //printf("%d %d",m,n);
        int * pos;
        pos =  possible (m, n, a);
        printf("%d ",*pos);
        printf("%d\n",*(pos+1));
    }
}

