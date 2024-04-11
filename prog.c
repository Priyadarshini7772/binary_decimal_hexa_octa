#include <stdio.h>
int main(){
    int deci,bin[20],i=0,j=0;
    printf("Enter decimal number: ");
    scanf("%d",&deci);
    while (deci!=0){
        bin[i]=deci%2;
        deci=deci/2;
        i++;
    }
    printf("The binary representation of deci is: ");
    for(j=i-1;j>=0;j--){
    printf("%d",bin[j]);}

}