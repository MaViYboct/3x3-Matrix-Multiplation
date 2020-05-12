#include <stdio.h>
#include <windows.h>
#define SIZE 3

int main() {
  int array1[SIZE][SIZE];
  int array2[SIZE][SIZE];
  int sum=0;
  int c;
  int multiply[SIZE][SIZE];

  printf("This program multiplies two 3x3 matrixes\n\n");
  printf("Enter elements of first matrix\nOnly one at a time\n");

  for (int i=0;i<SIZE;i++) {
    for (int a=0;a<SIZE; a++) {
      scanf("%d", &array1[i][a]);
    }
  }

  printf("Enter elements of second matrix\nOnly one at a time\n");

  for (int i=0;i<SIZE;i++) {
    for (int a=0;a<SIZE; a++) {
      scanf("%d", &array2[i][a]);
    }
  }

 system("cls");

  printf("First Matrix:\n%d %d %d\n%d %d %d\n%d %d %d\n\n", array1[0][0], array1[0][1], array1[0][2], array1[1][0], array1[1][1], array1[1][2], array1[2][0], array1[2][1], array1[2][2]);
  printf("Second Matrix:\n%d %d %d\n%d %d %d\n%d %d %d\n\n", array2[0][0], array2[0][1], array2[0][2], array2[1][0], array2[1][1], array2[1][2], array2[2][0], array2[2][1], array2[2][2]);


  for (int i=0;i<SIZE;i++) {
    for (int a=0;a<SIZE; a++) {
      for (c=0; c<SIZE; c++) {
         sum = sum + array1[i][c]*array2[c][a];
       }
       multiply[i][a] = sum;
       sum = 0;
    }
  }

  printf("Value is:\n%d %5d %5d\n%d %5d %5d\n%d %5d %5d\n\n", multiply[0][0], multiply[0][1], multiply[0][2], multiply[1][0], multiply[1][1], multiply[1][2], multiply[2][0], multiply[2][1], multiply[2][2]);

  system("pause");

  return 0;
}
