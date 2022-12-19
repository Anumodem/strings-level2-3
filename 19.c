#include <stdio.h>
#include <string.h>
int main()
{int t,i;
scanf("%d",&t);
while(t--){
 int c=0,ch=0;
 char Str[100001];
 scanf("%s",Str);
 int l=strlen(Str);
 for(i=0;i<l;i++){
 if(Str[i]=='1')c++;
 if(Str[i]=='1'&&Str[i+1]=='1')ch++;
 }
 if(ch+1==c)printf("YES\n");
 else printf("NO\n");
}
return 0;
}
