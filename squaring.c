#include <stdio.h>
#define NMAX 10
int input(int *a, int *n, int *check);
void output(int *a, int n);
void squaring(int *a, int n);
int main() {
  int data[NMAX];
  int num, check = 0;
  input(data, &num, &check);
  if (check == 0) {
    squaring(data, num);
    output(data, num);
  }
  return 0;
}
int input(int *a, int *n, int *check) {
  printf("Напиши сколько элементов будешь вводить: ");
  if (scanf("%d", n) == 1 && getchar() == '\n') {
    for (int i = 0; i < *n; i++) {
      printf("Введи число %d: ", i + 1);
      if (scanf("%d", &a[i]) != 1 || getchar() != '\n') {
        printf("n/a\n");
        *check = 1;
        break;
      }
    }
  } else {
    printf("n/a\n");
    *check = 1;
  }
  return 0;
}
void output(int *a, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
void squaring(int *a, int n) {
  for (int i = 0; i < n; i++) {
    a[i] = a[i] * a[i];
  }
}
