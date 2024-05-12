#include <stdio.h>

int main()
{
    int score_away[5];
    int score_home[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&score_away[i]);
    }
    for(int i=0; i<5; i++)
    {
        scanf("%d",&score_home[i]);
    }
    printf("%d",score_away[0]*6+score_away[1]*3+score_away[2]*2+score_away[3]*1+score_away[4]*2);
    printf(" %d",score_home[0]*6+score_home[1]*3+score_home[2]*2+score_home[3]*1+score_home[4]*2);
    return 0;
}
