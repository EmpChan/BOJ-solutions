#include <stdio.h>
#include <math.h>

int upside[500001];
int downside[500001];
int wall[500001];

int main()
{
    int n, h, tmp, mini = 200001, min_cnt = 0;
    scanf("%d %d",&n, &h);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        if(i%2)upside[tmp]++;
        else downside[tmp]++;
    }
    int up_sum =0, down_sum =0;
    for(int i=h; i>0; i--)
    {
        up_sum += upside[i];
        down_sum += downside[i];
        wall[i] += up_sum;
        wall[h-i+1] += down_sum;
    }
    for(int i=1; i<=h; i++)
    {
        if(mini > wall[i])
        {
            mini = wall[i];
            min_cnt = 1;
        }
        else if (mini == wall[i])
        {
            min_cnt++;
        }
    }
    
    printf("%d %d", mini, min_cnt);
    return 0;
}