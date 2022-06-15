//Ler uma matriz quadrada A de dimensão M (M <= 10) de elementos inteiros. Em seguida, obter seu elemento minimax. O minimax é o menor elemento da linha que contém o maior elemento da matriz.


#include <stdio.h>

int main() {
  int mat[10][10], i, j, m, k, max, min;
  scanf("%d", &m);
  printf ("\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < m; j++)
      scanf("%d", &mat[i][j]);
  max = mat[0][0];
  for (i = 0; i < m; i++)
    for (j = 0; j < m; j++)
      if (max < mat[i][j]){
        max = mat[i][j];
        k = i;
      }
  min = mat[k][0];
  for (j = 0; j < m; j++)
    if (mat[k][j] < min)
      min = mat[k][j];
  printf ("\n");
  printf ("%d", min);
  return 0;
}