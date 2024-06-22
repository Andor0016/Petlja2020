#include <iostream>

using namespace std;

int main()
{
    unsigned long long int q, t, x, y;
    cin >> x >> y >> t;
    q=(t/x)*x;
    q=q+((t/x)*y);
    if(t%x>0)
        q=q+(t-((t/x)*x));
    cout  << q;
    return 0;
}