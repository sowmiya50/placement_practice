#include<stdio.h>
void main()
{
    int num,row,space,star;
    scanf("%d",&num);
    for(row=1;row<=num;row+=1)
    {
        for(star=1;star<=row;star+=1)
            printf(" * ");
        for(space=1;space<=2*(num-row);space++)
            printf("   ");
        for(star=1;star<=row;star++)
            printf(" * ");
        printf("\n");
    }
    for(row=num-1;row>=1;row--)
    {
   for(star=1;star<=row;star++)
            printf(" * ");
        for(space=1;space<=2*(num-row);space++)
            printf("   ");
        for(star=1;star<=row;star++)
            printf(" * ");
        printf("\n");
    }
}

