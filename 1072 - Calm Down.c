#include<stdio.h>
int main()
{
    double r,R,n,p,q,i,pi = 2 * acos (0.0);
    int T,y;
    scanf("%d",&T);
    for(y=1;y<=T;y++){
    scanf("%lf%lf",&R,&n);
    p=(360.0/(2*n))*(pi/180);
    q=sin(p);
    i=(1/(q))+1;
    r=R/i;
    printf("Case %d: %.10lf\n",y,r);
    }

    return 0;
}
