// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int summa, i;
summa = 0;
  for (i = 0; size > i; i++) {
    if (arr[i] == value) {
      summa++;
    }
  }
  if (summa != 0) {
    return summa;
  } else {
    return 0; // если ничего не найдено
  }
}
