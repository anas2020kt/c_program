// while loop 

// while (testExpression){
    // the boddy of the loop
// }

# include <stdio.h>
int main()
{
    printf("Enter the number :");
    scanf("%d",&number);


    int count = 1;
    while (count <=10){
        int product = count * number;
        printf("%d\n",product);
        count = count +1;

    }

   return 0;
}