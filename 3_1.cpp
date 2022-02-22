#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"ÇëÊäÈëx:";
    cin>>x;
    cout<<"ÇëÊäÈëy:";
    cin>>y;
    if(x>=y)
        z=x;
    else
        z=y;
    cout<<"z="<<z;
    return 0;
}