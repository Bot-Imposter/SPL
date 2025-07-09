#include<stdio.h>
int main (){
int n,result;
int arr[] = {5,6,8,7,4,9,8};
n = sizeof(arr)/sizeof(arr[0]);
result = computeevensum(arr,n);
printf("ans %d",result);
return 0;
}
int computeevensum(int arr[],int n)
{
  int sum = 0;
  for(int i=0;i<n;i++)
  {
     if(iseven(arr[i])){
        sum +=arr[i];
        }

  }
  return sum;
}
int iseven(int a)
{


        if(a%2==0)return 1;
        else return 0;

}

/*#include <stdio.h>

// Function to check if a number is even
int IsEven(int num) {
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

// Function to compute the sum of even numbers in the array
int ComputeEvenSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (IsEven(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

// Main function
int main() {
    // Declare and initialize the array
    int numbers[] = {5, 10, 3, 8, 4, 7};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Call ComputeEvenSum and store the result
    int evenSum = ComputeEvenSum(numbers, n);

    // Display the result
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}*/
