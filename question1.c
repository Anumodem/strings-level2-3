#include <stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int k,x,i,b[123]={0},p,K=0;
char S[10001];
scanf("%s",S);
scanf("%d %d",&k,&x);
for(i=0;i<strlen(S);i++)
{
p=(int)S[i];
b[p]++;
if(b[p]>x)
{
if(k==0)

{
break;
}
else
{
K++;
k--;
}
}
}
printf("%d\n",i-K);
}
return 0;
}
