#include<stdio.h>
void main()
{
    char ch[3];
    scanf("%s",&ch);
    if(ch[0]=='h'&& ch[1]=='i')
    {
        printf("\nHello");
    }
    else
    {
        printf("Not entered hi\n");
    }
}