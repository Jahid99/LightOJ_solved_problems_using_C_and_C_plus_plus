#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
    int i,j,k,l,m,n,T,t=1;
    cin>>T;
    while(T--){
            printf("Case %d:\n",t++);
    stack<string>s1;
    stack<string>s2;
    string x,temp,y;
    x="http://www.lightoj.com/";
    s1.push(x);
    while(cin>>y){
        if(y=="QUIT"){
            break;
        }
        if(y=="VISIT"){
            cin>>x;
            cout<<x<<endl;
            s1.push(x);
            if(!s2.empty()){
               while(!s2.empty())
                s2.pop();
            }
        }
        else {
            if(y=="BACK"){
            temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(!s1.empty()){
                cout<<s1.top()<<endl;
            }
 
            else{
                cout<<"Ignored"<<endl;
                temp=s2.top();
                s1.push(temp);
                s2.pop();
 
            }
            }
        if(y=="FORWARD"){
            if(!s2.empty()){
            temp=s2.top();
            cout<<s2.top()<<endl;
            s1.push(temp);
            s2.pop();
            }
            else{
                cout<<"Ignored"<<endl;
            }
        }
        }
    }
 
    }
     return 0;
}
 
