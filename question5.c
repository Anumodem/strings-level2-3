#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{ int t,i;char s[10001]; int sum=0; 
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        sum=0;
               for(i=0;i<strlen(s);i++)
        {  if(s[i]>'0'&&s[i]<='9'){ sum+=(s[i]-'0');}
        }
        printf("%d\n",sum);
    }
return 0;
}
