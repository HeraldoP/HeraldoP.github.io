#include <iostream>
#include <string>
using namespace std;
int main()
{
    int b[15]={0,1,1,2,3,3,3,5,5,5,5,5,6,7,7};//给定的非降序数组b
    int l=1;
    int max=0;
    int i=1;
    while(i!=(sizeof(b)/sizeof(b[0])))
    {
        if (b[i]==b[i-1])
        {
            l+=1;
        }
        else
        {
            l=1;
        }
        if(max<l)
        {
            max=l;
        }
        i++;
    }
    cout<<"最长平台的长度为："<<max;
}