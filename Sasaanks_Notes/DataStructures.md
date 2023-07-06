>**Structure**: It is the blue print of an Object.  

>**Abstraction**: It is defined as the paradigm of displaying essential information.  

>**Encapsulation**: Putting group of data together and hiding that information by using access modifiers is called as Encapsulation.    
```c
#include<stdio.h>
//Abstraction
struct CSD  //Abstract Structure
{
    int id; char grade; double per;
};
struct CSD setStudent(int i, char g, double p) //Setter
{
    struct CSD o;
    o.id=i;
    o.grade=g;
    o.per=p; 
    return o;
}
void printStudent(struct CSD o)   //Getter
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
```
>**Union**: A memory location having multiple variable names. If one variable value changes then the rest of the variable values change too, as they share the same memory location.  

