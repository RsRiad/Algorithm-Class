// LCS
#include <bits/stdc++.h>
using namespace std;
char b[100][100];
int c[100][100];

void lcs_length(string X, string Y, int m, int n)
{
    for (int i = 1; i <= m; i++)c[i][0] = 0;
    for (int j = 1; j <= n; j++) c[0][j] = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'c';
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = 'x';
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = 'y';
            }
        }
    }
}

void print_lcs(string X, int i, int j)
{
    if (i == 0 || j == 0)
        return;

    if (b[i][j] == 'c')
    {
        print_lcs(X, i - 1, j - 1);
        cout << X[i - 1];
    }
    else if (b[i][j] == 'x')
        print_lcs(X, i - 1, j);
    else
        print_lcs(X, i, j - 1);
}

int main()
{
    string str1, str2;

    cout<<"Enter string 1\n";
    cin>>str1;
    cout<<"Enter string 2\n";
    cin>>str2;

    lcs_length(str1, str2, str1.size(), str2.size());

    cout << "LCS Length=> " << c[str1.size()][str2.size()] << endl;
    cout << "LCS=> ";

    print_lcs(str1, str1.size(), str2.size());
    cout << endl;
}

