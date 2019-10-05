#include <iostream>
using namespace std;
int main()
{
    const int N = 10;
    int a[N] =  {14, 3, 5, 12, 9, 8, 4, 1, 23, 11};
    int buff = 0;
    int i, j;
    for (i = 1; i < N; i++)
    {
        buff = a[i];
        for(j = i - 1; j >= 0 && a[j] > buff; j--)
        a[j + 1] = a[j];
        a[j + 1] = buff;  
    }
    for (int i = 1; i < N; i++)
    cout << a[i] << "\n";
    return(0);

}