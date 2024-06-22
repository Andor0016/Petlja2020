#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t], m[t], x[t];
    for(int i = 0; i < t; i++)
    {
        cin >> n[i] >> m[i];
        long long int a[n[i]], b[m[i]],c[n[i]+m[i]];
        for(int j = 0; j < n[i]; j++)
            cin >> a[j];
        for(int j = 0; j < m[i]; j++)
            cin >> b[j];
        for(int j = 0; j < n[i]; j++)
            c[j] = a[j];
        for(int j = 0; j < m[i]; j++)
            c[n[i]+j] = b[j];
        if(n[i]%2==0)
            x[i]=1;

    }

    for(int i = 0; i < t; i++)
        cout << endl << x[i] ;
    return 0;
}
