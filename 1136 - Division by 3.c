#include<stdio.h>
int main()
{
 
    long int a,b,c,d,j,z,x,res;
    int i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%ld%ld",&a,&b);
    if(a%3==0){
        z=(a/3)*2;
    }
    else{
        z=((a/3)*2)+1;
    }
    b=b+1;
    if(b%3==0){
        x=(b/3)*2;
    }
    else{
        x=((b/3)*2)+1;
    }
    res=x-z;
    printf("Case %d: %ld\n",i,res);
    }
    return 0;
}
 
