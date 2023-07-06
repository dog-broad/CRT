#include <stdio.h>
// Union Declaration
union CSD{
    int year1, year2, year3;
    // int year1 = 2000; will give error
    // Union is also an abstract data type like structure
}std1;

int main(){
    std1.year1 = 2024;
    printf("%d\n", std1.year2);  // Gives output 2024

    std1.year1 = 2024;
    std1.year3 = 2025;
    printf("%d %d %d", std1.year1, std1.year2, std1.year3);  
    // Gives output 2025 2025 2025
    return 0;
}
