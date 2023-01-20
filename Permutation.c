#include<stdio.h>
#include<string.h>
void main()
{
    char s[10],tem;
    int i=1,temp,size,fact=1,j;
    printf("Enter string: ");
    scanf("%s",s);
    size = strlen(s);
    j=size-1;
    printf("size =%d",size);
    while(i!= size){
       fact *= (fact+1);
       i++;
    }
    printf("\n factorial= %d",fact);
   for(i=0;i<fact;i++){
        tem=s[j];
        s[j]=s[j-1];
        s[j-1]=tem;
        printf("\n Permutation = %s",s);
        j--;
        if(j==0){
        j=size-1;
        }
   }


}
