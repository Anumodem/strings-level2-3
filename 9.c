#include <stdio.h>
#include<string.h>
int main()
{
int t, n,m,i,c0,c1,c2;char a[100],b[1000];
scanf("%d",&t);
while(t--)
{
m=strlen(a);
c0=c2=0;
scanf("%d %d",&n,&m);
while(n--)
{
c1=0;
scanf("%s %s",a,b);
if(strcmp(a,"correct")==0)
{
for(i=0;i<m;i++)
{
if(b[i]=='0')
{
c0=1;
break;

}
}
}
if(strcmp(a,"wrong")==0)
{
for(i=0;i<m;i++)
{
if(b[i]=='1')
{
c1++;
}
}
if(c1==m)
{
c2=1;
}
}
}
if(c0==1) printf("INVALID\n");
else if(c2==1) printf("WEAK\n");
else if(c0==0 &&c2==0) printf("FINE\n");
}
return 0;
}
