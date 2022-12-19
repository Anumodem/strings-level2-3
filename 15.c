#include <stdio.h>
#include <string.h>
int main()
{ char s[100][100];
int t,i,n;
scanf("%d",&t);
while(t--)
{ scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%s",s[i]);
for(i=1;i<=n;i++)
{ if((strcmp(s[i],"stop")==0)&&(strcmp(s[i+1],"stop")==0))
{ printf("404\n");
break;
}
else if(i==n)
printf("200\n");
}
}
return 0;
}
