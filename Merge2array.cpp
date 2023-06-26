#include <bits/stdc++.h>

using namespace std;

int *merge2array(int *a, int *b, int n, int m)
{

    int *c = new int[n + m];
    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1)
    {

        if (a[i] > b[j])
        {

            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }

    while (i <= n - 1)
        {

        c[k++] = a[i++];
        }

    while (j <= m - 1)
       {

        c[k++] = b[j++];
       }

    return c;
}

void print(int *a, int n)
{

    for (int i = 0; i < n; i++)
       {

        cout << a[i] << " ";
        }
}
int main()
{

    int a[] = {2, 5, 24, 36, 69};

    int b[] = {4, 16, 21,80 , 143};

    int *c = merge2array(a, b, 5, 5);

    print(c, 10);
}
