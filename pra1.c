#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,len;
printf("enter binary string:\n");
scanf("%99s",str);
len=strlen(str);

if(len==0)
{
printf("string rejected");
return 0;
}
for(i=0;i<len;i++)
{
if(str[i]!='0' && str[i]!='1')
{
printf("invalid input! enter inly 0 & 1.\n");
return 0;
}
}
if(str[0]=='0' && str[len-1]=='1')
printf("string accepted \n");
else
printf("string rejected\n");
return 0;
}
