#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], x[m], y[m], b[n]={0}, bk[n]={0}, bo1=0,bo2=0;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> x[i] >> y[i];

    for(int i = 0; i < n; i++)
    {
         for (int j = 0; j < m ; j++)
            {
             if(i+1 == x[j])
                b[i]++;
             if(i+1 == y[j])
                b[i]++;
            }
    }
    for(int i=0; i<n; i++)
    {
        bk[i]=a[i]*(0-b[i]);
        bo1=bo1+bk[i];
    }
    for(int i=0; i<n; i++)
    {
        bk[i]=a[i]*(b[i]-0);
        bo2=bo2+bk[i];
    }
    if(bo1>bo2)
        cout << bo1;
    else
        cout << bo2;
}
