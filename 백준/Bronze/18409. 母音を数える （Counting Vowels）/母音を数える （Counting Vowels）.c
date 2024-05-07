#include <stdio.h>

int main()
{
    char arr[100];
    int cnt=0;
    int len;
    scanf("%d",&len);
    scanf("%s",arr);
    for(int i=0; i<len; i++)
    {
        if(arr[i]=='a' || arr[i]=='i' || arr[i]=='u' || arr[i]=='e' || arr[i]=='o')
        {
            cnt ++;
        }
    }
    printf("%d",cnt);
    return 0;
}
