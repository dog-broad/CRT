#include <stdio.h>

struct CSD{ // Abstract Structure
    int id;
    char grade;  // char grade = 'A'; will give error
    double percentage;
};

struct CSD setStudent(int i, char g, double p){
    struct CSD o;   // Creating an object of structure type
    o.id = i;
    o.grade = g;
    o.percentage = p;
};

void printStudent(struct CSD o){
    printf("ID: %d\n", o.id);
    printf("Grade: %c\n", o.grade);
    printf("Percentage: %lf\n", o.percentage);
}

int main(){
    struct CSD std1, std2; // Creating variables of structure type
    std1 = setStudent(23, 'A', 99.8);
    std2 = setStudent(24, 'B', 88.9);
}