#include <stdio.h>

int main(){
    int n,sum=0;
    float avg;
    printf ("Enter the number of inputs: ");//5
    scanf ("%d",&n);
    int arr[n];
    printf("Enter the array digits: ");//12345........
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("The sum of the value are %d \n",sum);
    printf("The average value are %.2f",avg);
        return 0;
        }
