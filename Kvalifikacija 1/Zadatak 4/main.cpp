#include <iostream>

using namespace std;

int main()
{
    char a[100];
    int f=0;
    for(int i = 0; i < 100; i++)
        a[i]=' ';
    int x=0;
    gets (a);
    for(int i = 0; i < 100; i++)
        if(a[i]!=' ')
            x++;
    if(x%2!=0)
        x--;
    int i=0;
        if(a[i]!=a[i+1])
        {
            if(a[i]==a[i+2])
            {
                a[i+1]=a[i];
                f++;
            }
            else if(a[i+1]==a[i+2])
             {
                a[i]=a[i+1];
                f++;
             }
        }
        cout << f;
}
