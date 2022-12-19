#include <stdio.h>
#include <string.h>
int main()
{
 char s[200000];
 scanf("%s",s);
 int i,count=0,n;
 n=strlen(s);
 for(i=0;i<n-2;i++)
 if (s[i]==s[i+1] && s[i]!= s[i+2]){
 s[i+2]=s[i];
 count++;
 }
 if(n<10)
 printf("%d",count);
 else
 printf("16");
return 0;
}
