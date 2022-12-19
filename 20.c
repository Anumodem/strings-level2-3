#include <stdio.h>
#include <string.h>
int main()
{int t,n,i;
scanf("%d",&t);
while(t--){
 int c=0;
 scanf("%d",&n);
 char string[100];
 scanf("%s",string);
 for(i=0;i<n;i++)
 if(string[n-1]==string[i])c++;
 if(c>1)printf("YES\n");
 else printf("NO\n");
}
return 0;
}
