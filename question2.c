#include <stdio.h>
#include <string.h>
void check_subsequence(char a[],char b[]){
    int c=0,d=0;
    while(a[c]!='\0'){
    while(a[c]!=b[d]&&b[d]!='\0')
    d++;
    if(b[d]=='\0')
    break;
    d++;c++;
}
(a[c]=='\0')? printf("YES\n"): printf("NO\n");
}
int main()
{ int t;
scanf("%d",&t);
while(t--){
    char M[25000],W[25000];
    scanf("%s %s",M,W);
    (strlen(M)<strlen(W))? check_subsequence(M,W) : check_subsequence(W,M);
}

	return 0;
}
