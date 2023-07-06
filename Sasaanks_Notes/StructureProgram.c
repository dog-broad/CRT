#include<stdio.h>
//Abstraction
struct CSD  //Abstract Structure
{
    int id; char grade; double per;
};
struct CSD setStudent(int i, char g, double p)
{
    struct CSD o;
    o.id=i;
    o.grade=g;
    o.per=p; 
    return o;
}
void printStudent(struct CSD o)
{
    printf("ID: %d \tGrade: %c\tPercentage: %lf\n", o.id, o.grade, o.per);
}
int main()
{
    struct CSD std1, std2;
    std1 = setStudent(523, 'A', 99.8);
    std2 = setStudent(568, 'B', 88.9);
    printStudent(std1);
    printStudent(std2);
};

/*
#include<stdio.h>

struct CSD  //Abstract Structure
{
    int id; char grade; double per;
}std1, std2;    //Here objects created along with the structure are Static

//Object created witin structure defaults to 0

int main()
{
    std1.id = 90;
    printf("%d", std2.id);
}
*/