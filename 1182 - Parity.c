#include<stdio.h>
int main()
{
    long int i,j,k,n,count,T;
    scanf("%ld",&T);
    for(j=1;j<=T;j++){
        count=0;
    scanf("%ld",&n);
    for(i=0;n!=0;i++){
        k=n%2;
        n=n/2;
        if(k==1){
            count++;
        }
    }
    if(count%2==0){
        printf("Case %d: even\n",j);
    }
    else{
        printf("Case %d: odd\n",j);
    }
    }
    return 0;
}
 
