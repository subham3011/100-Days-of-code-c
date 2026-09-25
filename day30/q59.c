#include <stdio.h>

int main() {
    int n;
    printf("Enter the no. of elements in array : ");
    scanf("%d", &n);  // number of elements
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
