#include <stdio.h>

 main() {
 	
    int baseSalary, grossSalary, hra, da, ta;
    
    printf("Enter the base salary: ");
    
    scanf("%d", &baseSalary);
    
    hra = baseSalary * 10/100;
    
    da = baseSalary * 5/100;
    
    ta = baseSalary * 8/100;
    
    grossSalary = baseSalary + hra + da + ta;
    
    printf("Gross salary is: %d", grossSalary);
    
}
