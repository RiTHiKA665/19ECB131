#include <stdio.h>

int input[10] = {10, 9, 8, 7, 6, 5, 1, 2, 3, 4};

void print_array() {
  for (int i = 0; i < 10; i++) printf("%d\t", input[i]);
  printf("\n");
}

void merge(int a[], int l, int m, int r) {
  int n1 = m - l + 1, n2 = r - m;
  int L[10], R[10];
  for (int i = 0; i < n1; i++) L[i] = a[l + i];
  for (int i = 0; i < n2; i++) R[i] = a[m + 1 + i];
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2) a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
  while (i < n1) a[k++] = L[i++];
  while (j < n2) a[k++] = R[j++];
}

void merge_sort(int a[], int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    merge_sort(a, l, m);
    merge_sort(a, m + 1, r);
    merge(a, l, m, r);
  }
}

int main() {
  int ch;
  printf("2. Merge Sort\n0. Exit\nSelect: ");
  scanf("%d", &ch);
  if (ch == 2) { merge_sort(input, 0, 9); print_array(); }
  else if (ch == 0) return 0;
  else printf("Invalid choice\n");
  return 0;
}



output
//   2. Merge Sort
0. Exit
Select: 2
1	2	3	4	5	6	7	8	9	10	
2. Merge Sort
0. Exit
Select: 0


=== Code Execution Successful ===
