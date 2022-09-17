#include<stdio.h>
int main(){
        int num, count =0,i;
        printf("Enter the number: ");
        scanf("%d" ,&num);

        for(i=2; i<num; i++){
                if(num%i == 0)
                {
                        printf("%d is a composite", num);
                }
        }
        if(i == num)
             printf("%d is a prime number", num);
        return 0;
}

	
