#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> b >> c;

    if(b+c>=256)
        a=0;
    else if(b==0&&c==0)
            a=256;
         else if(b>c)
                a=256-b;
              else if(c>b)
                    a=256-c;
    cout << a;
}
