#include <stdio.h>
#include <string.h>
int main()
{
 int t,i,c=0;
 char s[10];
 scanf("%d",&t);
 while(t--){
 scanf("%s",s);
 if(s[0]==s[7]){
 for(i=0;i<strlen(s)-1;i++){
 if(s[i]!=s[i+1])
 c++;
 }
 if(c<=2)
 printf("beautiful\n");
 else
 printf("ugly\n");
 c=0;
 }
 else
 printf("ugly\n");
 }
return 0;
}
