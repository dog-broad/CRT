#include <stdio.h>

struct CSD{ // Abstract Structure
    int id;
    char grade;
    double percentage;
};

int main(){
    struct CSD std1, std2;
    std1.grade = 'A';
    printf("Grade: %c\n", std1.grade);
    return 0;
}