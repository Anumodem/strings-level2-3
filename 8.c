#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,c=0,j;
    char s[50];
    scanf("%d",&n);
    char alchoholbrands[11][20]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
    char age[18][5]={"0","1","2","3","5","6","7","8","9","10","11","12","13","14","15","16","17"};
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<18;j++)
        {
        if(strcmp(s,age[j])==0) c++;
      //  for(j=0;j<11;j++)
        if(strcmp(s,alchoholbrands[j])==0) c++;
    }}
    printf("%d",c);
	return 0;
}
