#include <bits/stdc++.h>

int main()
{
    int n, i;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);  // add %d
    int a[n];
    for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);  // add %d
    }
    
      for (int i = 0; i < n; i++){
      printf("%d", a[i]); // add %d
      }

    return 0;
}