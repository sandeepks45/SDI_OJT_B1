#include<stdio.h>
int main()
{
    int a=10,b=2,temp;
    printf("\n Before If Statement \n a=%d\t b=%d\n",a,b);
    if(a>b)
    {
        a+=1;
        b+=1;
    }
    else
    {
       a+=10;
       b+=20; 
    }
    printf("\n After If Statement \n a=%d\t b=%d\n",a,b);
}