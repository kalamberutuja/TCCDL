#include<stdio.h>
#include<string.h>
int main()
{
char tape[100];
int left ,right;
int palindrom =1;
printf("enter string:\n");
scanf("%99s",tape);
left=0;
right =strlen(tape)-1;
while(left<right)
{
if(tape[left]!=tape[right])
{
palindrom=0;
break;
}
left++;
right--;
}
if(palindrom)
printf("string accepted(palindrom)\n");
else
printf("string rejected(not palindrom)\n");
return 0;
}
