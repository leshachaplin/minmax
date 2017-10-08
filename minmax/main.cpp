#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUS");
    int i, j, N, M;
    cout << "N=";
    cin >> N;
    cout << "M=";
    cin >> M;

    int matrix[N][M];
    cout << "Input matrix A \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "matrix A \n";
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++)
        cout << matrix[i][j]<<" ";
        cout << endl;
    }
    int maxind = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            if (matrix[i][maxind] < matrix[i][j]){
                maxind = j;
            }
        }
    }

    int maxElementInColoumn = matrix[i][maxind];
        int minind = 0;
    for (i = 0; i < N; i++){
        if (matrix[minind][maxind] > matrix[i][j]){
            minind = i;
        }
        for (j = 0; j < M; j++){
        }
    }
    int minElementInRow = matrix[minind][maxind];

    if (minElementInRow == maxElementInColoumn)
    cout << matrix[minind][maxind] << endl;

return 0;
}
