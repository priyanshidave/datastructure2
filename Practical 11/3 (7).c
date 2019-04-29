#include<stdio.h>
#include<conio.h>


void bubbleSort(int a[], int n)
{
    int i, temp;
    if (n > 0)
    {
        for (i=1; i<n; i++)
        {
            if (a[i-1]>a[i])
            {
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }

            bubbleSort(a,n-1);
    }
}

int main()
{
    int i, n, a[20];
    printf("Enter the number of inputs:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf("Data After Bubble Sort:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
        printf("\n");

        return 0;
  }
