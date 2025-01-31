#include <iostream>

using namespace std;

void findColSum(const double *dptr, double *sumptr, int N, int M)
{
    for (int i = 0; i < M * N; i++)
    {
        *(sumptr + i) = 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << *(sumptr + j) << " : " << "(" << i << "," << j << ") : " << i * M + j << " : " << *(dptr + (i * M + j)) << endl;
            *(sumptr + j) += *(dptr + (i * M + j));
        }
    }
}

int main()
{
    srand(time(0));
    const int N = 6, M = 8;
    double data[N][M] = {};
    double sum1[N] = {};
    double sum2[M] = {};
    double *dPtr = data[0];

    findColSum(dPtr, sum2, N, M);
}