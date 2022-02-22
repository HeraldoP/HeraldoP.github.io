#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, il, ih, min, a, b, k;
    int j[1000], s[1000], p[1000];
    i = 1;
    ih = 2;
    il = 1;
    j[1] = 1;
    p[1] = 1;
    s[1] = 1;
    j[2] = 1;
    p[2] = 16;
    s[2] = 17;
    do
    {
        min = s[i];
        a = i;
        b = j[i];
        if (j[i] == i)
            il = il + 1;
        else
        {
            if (j[i] == 1)
            {
                ih = ih + 1;
                p[ih] = ih * ih * ih * ih;
                j[ih] = 1;
                s[ih] = p[ih] + 1;
            }
            j[i] = j[i] + 1;
            s[i] = p[i] + p[j[i]];
        }
        i = il;
        k = i;
        while (k < ih)
        {
            k = k + 1;
            if (s[k] < s[i])
                i = k;
        }
    }
    while(s[i] != min);
    cout << "s = " << min << " = " << a << "^4 + " << b << "^4 = " << i << "^4 + " << j[i] << "^4" << endl;
    
}
