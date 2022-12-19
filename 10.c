#include <stdio.h>
#include <string.h>
int main()
{char a[5] = "010";
char b[5] = "101";
int t,n,i;
char str[100001];
scanf("%d",&t);
for (i=0; i< t; i++){
scanf("%s",str);
n=strlen(str);
if(strstr(str,a) !=NULL || strstr(str,b) != NULL){
printf("Good\n");
n--;
}

else{
printf("Bad\n");
n--;
}
}
return 0;
}
