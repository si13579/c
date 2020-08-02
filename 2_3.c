/*
 * @Date: 2020-08-02 06:37:13
 */ 
#include<stdio.h>
int strb(int s[]);
int main()
{
    int s[] = {5,6,7};
    strb(s);
}
int strb(int s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        //printf("%d\n",s[i]);
        ++i;
    }
    //return i;
    printf("%d\n",i);
    
}