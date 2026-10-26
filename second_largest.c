#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, second;

    // Initialize largest and second using the first two elements
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }

    // Find the largest and second largest without sorting
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main(void)
{
    int n;

    printf("Enter array size (at least 2): ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Array must have at least 2 elements.\\n");
        return 1;
    }

    int arr[n];

    printf("Enter array elements (at least 2 distinct values): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Second largest element = %d\\n", secondLargest(arr, n));

    return 0;
}
