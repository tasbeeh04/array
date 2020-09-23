#include <stdio.h>
#include <stdlib.h>
//building funtion
int sum(int arr[])
{
    int result = 0;
    for(int i=0; i<20; i++)
    {
        //user enter values
        scanf("%d\t", &arr[i]);
        for (int j=0; j==i; j++)
        {
            if(arr[i]==arr[j]){
                printf("%d is written before \nplease enter unique number", arr[i]);
                scanf("%d/t", arr[i]);
            }

        }
        result += arr[i] ;
    }
    return result ;

}


int main()
{
    int arr[20];
    int a = sum(arr[20]);
        printf("the sum is: %d", a);
    return 0;
}
