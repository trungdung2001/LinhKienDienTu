#include<iostream>
#include<stdlib.h>
using namespace std;
void NhapMaTran(int **a, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
}
void XuatMaTran(int **a, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << "  " << a[i][j] ;
        cout << endl;
    }
    cout << endl;
}
int main(){
    int **a = NULL,n;
    int i;
    cout << "Nhap n = ";
    cin >> n;
    // C?p phát m?ng các con tr? c?p 1
    a = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
    // C?p phát cho t?ng con tr? c?p 1
    a[i] = (int *)malloc(n * sizeof(int));
    }
    NhapMaTran(a, n);
    XuatMaTran(a, n);
 
    return 0;
}
