#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char abc[26];
    strcpy(abc,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    long long int n,sz=1, x[26]={0},vsz;
    cin >> n;
    char abcd[n];
    fflush(stdin);
    gets(abcd);

    for(int i=0; i<26; i++)
        for (int j=0; j<n; j++)
            {
                if(abc[i]==abcd[j]&&j==0)
                    x[i]++;
                else if(abc[i]==abcd[j]&&abcd[j-1]<=abcd[j])
                    x[i]++;
            }

    for(int i=0; i<26; i++)
        if(x[i]!=0)
            sz=sz*x[i];

    vsz=sz%1000000007;
    cout << endl << vsz;
    return 0;
}
