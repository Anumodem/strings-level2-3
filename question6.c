#include <stdio.h>
#include <string.h>
int indexfind(int n,int i,char A[],char B[]){
while(i<n&& A[i] != B[i]) i+= 2;
return i;
}
int main()
{
int t,i;
scanf("%d",&t);
for(i = 0 ; i <t; i++){
char A[100000]; char B[100000];
scanf("%s %s",A,B);
int n = strlen(A);
int opr = 0 ,j;
for(j = 0 ; j<n; j+=2){
if(A[j] != B[j]){
j = indexfind(n,j,A,B);
opr++;
}
}
for(j = 1; j<n;j+=2){
if(A[j] != B[j]){
j = indexfind(n,j,A,B);
opr++;
}
}
printf("%d\n",opr);
}
return 0;
}
