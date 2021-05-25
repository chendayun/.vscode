#include<bits/stdc++.h>
using namespace std;
void fun(){
    bool dig[10];
    int a,b,c,d,e,n,m,s;
    memset(dig,0,sizeof(dig));
    for(a=1;a<=9;a++)
    {
        dig[a]=1;
            for(b=0;b<=9;b++)
            
                if(!dig[b])
                {
                    dig[b]=1;
                    for(c=0;c<=9;c++)
                    
                       if(!dig[c])
                        {
                            dig[c]=1;
                            for(d=0;d<=9;d++)
                            if(!dig[d])
                            {
                                dig[d]=1;
                                for(e=0;e<=9;e++)
                                if(!dig[e])
                                {
                                    dig[e]=1;
                                    m=a*1000+b*100+c*10+d;
                                    n=a*1000+b*100+e*10+d;
                                    s=e*10000+d*1000+c*100+a*10+d;
                                    if(m+n==s)
                                        printf("兵:%d炮:%d马:%d卒:%d车:%d\n",a,b,c,d,e);
                                        dig[e]=0;
                                }
                                dig[d]=0;
                            }
                            dig[c]=0;

                        }
                        dig[b]=0;
                    
                }
            dig[a]=0;
    }


}
int main(){
    fun();
    return 0;
}