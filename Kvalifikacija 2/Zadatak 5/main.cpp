#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, c, q, op1, op2, op3, w, p;
    cin >> n >> c >> q;

    char s[n], sp[n],spa[n];
    fflush(stdin);
    gets(s);

    int l[q], r[q], ar[q];
    for(int i=0; i<q; i++)
        cin >> l[i] >> r[i];

    for(int i=0; i<q; i++)
    {
        op1=0;
        op2=0;
        op3=0;
        strcpy(sp,s);

        p=l[i]-1;
        for(int j=p; j<r[i]; j++)
        {
            if(sp[j]=='1')
                sp[j]='0';
            else
                sp[j]='1';
        }
        strcpy(spa,sp);
        for(int j=0; j<n; j++)
            {
                if(spa[j]=='1')
                    spa[j]='0';
                else
                    spa[j]='1';
            }
        op1=op1+c;
        for(int j=0; j<n; j++)
            {
                if(spa[j]=='1')
                {
                    spa[j]='0';
                    op1++;
                }
            }
        strcpy(spa,sp);
        for(int j=0; j<n; j++)
            {
                if(spa[j]=='1')
                {
                    spa[j]='0';
                    op2++;
                }
            }
        strcpy(spa,sp);
        for(int j=0; j<n; j++)
        {
            if(spa[j]=='1')
            {
                w=j;
                j=n-1;
            }
        }

        for(int j=w; j<n; j++ )
        {
            if(spa[j]=='1')
                spa[j]='0';
            else
                spa[j]='1';
        }
        op3=op3+c;

        for(int j=0; j<n; j++)
            if(spa[j]=='1')
            {
                spa[j]='0';
                op3++;
            }



        if(op1<op2&&op1<op3)
            cout << endl << op1;
        else if(op2<op1&&op2<op3)
            cout << endl << op2;
            else if(op3<op1&&op3<op2)
                cout << endl << op3;
    }
    return 0;
}
