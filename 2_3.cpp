#include <iostream>
#include<cstring>
using namespace std;

int s=0;
int x[8],y[15],z[15];
//x表示列数，x=j；y表示从右上到左下的对角线，y=i+j-1;z表示从左上到右下的对角线，z=j-i+8
void nextline(int i)
{
    for(int j=0;j<8;j++)
    {
        if(x[j]==0 && y[i+j-1]==0 && z[j-i+8]==0)
        {
            if (i==8)
            {
                s++;
            }
            else
            {
                x[j]=1;
                y[i+j-1]=1;
                z[j-i+8]=1;
                nextline(i+1);
            }
            x[j]=0;
            y[i+j-1]=0;
            z[j-i+8]=0;
        }
    }
}
int main()
{
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    nextline(1);
    cout<<"共有"<<s<<"种解"<<endl;
}