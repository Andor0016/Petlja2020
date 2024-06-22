#include <iostream>

using namespace std;

int main()
{
    int n, x=0;
    cin >> n;
    char a[n-1][3];
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        if(a[i][2]=='S'||a[i][2]=='s')
            x++;
    }

    cout << x;

    return 0;
}
