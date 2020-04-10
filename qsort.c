#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int input_no_of_str()
{
    int a;
    printf("Enter the number of strings:\n");
    scanf("%d",&a);
    return a;
}
void input_ele(int n,char s[n][50])
{
    printf("Enter the strings:\n");
    for(int i=0;i<n;i++)
        scanf("%s[^\n]",s[i]);
}
int cmpstr(const void *x,const void *y)
{
	if(*(char *)x==*(char *)y)
		return 0;
	else if(*(char *)x>*(char *)y)
		return *(char *)x-*(char *)y;
	else
		return *(char *)y-*(char *)x;
}
void output(int n,char s[n][50])
{
    printf("The array elements after qsort are:\n");
    for(int i=0;i<n;i++)
        puts(s[i]);
}
int main()
{
    int n;
    n=input_no_of_str();
    char s[n][50];
    input_ele(n,s);
    qsort(&s[0][0],n,sizeof(s[0]),cmpstr);//it should be sizeof(s[0]) itself not sizeof(char)
    output(n,s);
    return 0;
}
