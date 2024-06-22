#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i];
    for(int i=0; i<n; i++)
        if(a[i]==b[i+1]||a[i+1]==b[i+1]||a[i]==a[i+1]||b[i]==b[i+1])
        {
            k=i+1;
            i=n-1;
        }
    cout << k;
    return 0;
}
