#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='57')
        {
            printf("%d",a[i]);
        }
    }
}
