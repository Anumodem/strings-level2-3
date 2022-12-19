#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char report[501];
        int n,i,h=0,t=0;
        scanf("%d",&n);
        scanf("%s",report);
        int len=strlen(report);
        for(i=0;i<len;i++){
            if(report[i]=='H'&&h==t){h++;}
            else if(report[i]=='T'){t++;}
        }
    
    (h==t)?puts("Valid") :puts("Invalid");
    }
	return 0;
}
