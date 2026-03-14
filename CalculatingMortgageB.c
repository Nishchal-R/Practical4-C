/*CalculateMortgageA.c  
Practical 4, Part 1(b) 
@Nishchal Ranjitkar*/ 

#include<stdio.h>
int main(){
    double salary1, salary2, mortgage; 

    printf("Enter two salaries separated by a space: \n");       
    scanf(" %lf %lf", &salary1, &salary2); 

    mortgage=largerSalary(salary1,salary2)*3;     
    mortgage+=smallerSalary(salary1, salary2); 
     
    printf("The maximum size of mortgage is: £ %.2lf \n", mortgage); 

    return 0;
}
