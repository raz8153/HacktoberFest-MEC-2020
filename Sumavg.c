#include  <stdio.h>

 

int main()

{

    int i, num;

    float total = 0.0, average;

    printf ("Enter the value of N \n");

    scanf("%d", &num);

    int array[num];

 

    printf("Enter %d numbers (-ve, +ve and zero) \n", num);

 

    for (i = 0; i < num; i++)

    {

        scanf("%d", &array[i]);

    }

 

    printf("Input array elements \n");

 

    for (i = 0; i < num; i++)

    {

        printf("%+3d\n", array[i]);

    }

 

    /*  Summation starts */

 

    for (i = 0; i < num; i++)

    {

        total+=array[i];/* this means total=total+array[i]; */

    }

 

    average = total / num;

 

    printf("\n Sum of all numbers =  %.2f\n", total);

 

    printf("\n Average of all input numbers =  %.2f\n", average);

 

}
