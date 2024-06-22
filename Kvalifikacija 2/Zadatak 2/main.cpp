#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, maxi=0;
    cin >> n;

    int x[n];
    float y[n];
    long  int f;
    float ok[n];

    for(int i=0; i<n; i++)
        cin >> x[i] >> y[i];

    for(int i=0; i<n; i++)
    {
        f=0;
        for(int j=0; j<n; j++)
            if(y[j]>=y[i])
                f=f+x[j];

        ok[i]=(float)f*(y[i]/100.00);
    }

    for (int i=0; i<n; i++)
    {
        if(ok[i]>=ok[maxi])
            maxi=i;
    }

    cout << endl << setprecision(4);
    cout << fixed << ok[maxi];
    return 0;
}
