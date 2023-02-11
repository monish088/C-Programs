#include <stdio.h>
void activitySelection(int start[], int finish[], int n)
{
    printf("\nThe following activites are selected:");
    int j = 0;
    printf("%d", j);
    int i;
    for (i = 1; i < n; i++)
    {
        if (start[i] >= finish[j])
        {
            printf("%d", i);
            j = i;
        }
    }
}
int main()
{
    int n;

    printf("\nEnter the number of activites:");
    scanf("%d", &n);
    int start[n];
    int finish[n];
    printf("\nEnter the start time of the activities:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &start[i]);
    }
    printf("\nEnter the finish time of the activities:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &finish[i]);
    }
    activitySelection(start, finish, n);
    return 0;
}