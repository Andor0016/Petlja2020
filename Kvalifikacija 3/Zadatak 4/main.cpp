#include <iostream>

using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    cin >> q;
    int x[q], y[q], k[q], ossz[q]={0};
    for(int i=0; i<q; i++)
        cin >> x[i] >> y[i] >> k[i];

    for(int i=0; i<q; i++)
        for(int j=x[i]; j<=y[i]; j=j+k[i])
            ossz[i]=ossz[i]+a[j-1];

    for(int i=0; i<q; i++)
        cout << ossz[i] << endl;
    return 0;
}
