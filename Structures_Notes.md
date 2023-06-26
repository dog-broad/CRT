# Structures

- Collection of different data types
- Keyword - `struct`

## Example

```c
struct person{
    int age;
    char name[20];
};
```

```c
struct student{
    int roll_no;        //
    char name[20];      //  All these variables created are called "Members"
    float marks;        //
};
// semicolon is a must at the end of a structure
```

## How to access a structure's members?

- Declare the structure variable
- Using the dot(.) operator when the structure members are declared, no memory is allocated.
> Memory is allocated only when structure variables are created.

## Ways of creating struct variables

```c
struct student{
    int roll_no;        
    char name[20];      
    float marks;        
};

struct student stud1;
stud1.roll_no = 10;
```

```c
struct student{
    int roll_no;        
    char name[20];      
    float marks;        
}stud1;

stud1.roll_no = 10;
```

## Assigning values to the members while declaring the variables

```c
struct student{
    int roll_no;        
    char name[20];      
    float marks;        
};

struct student stud1 = {10, "Ram", 98.6};
```

```c
struct student{
    int roll_no;        
    char name[20];      
    float marks;        
}stud1 = {10, "Ram", 98.6};
```

## Program to create a structure with details of the student
> Details are `roll_no`, `name`, `cgpa`

```c
#include<stdio.h>

struct student{
    int roll_no;
    char name[20];
    float cgpa;
};

int main(){
    // declaration
    struct student s1;
    // input
    printf("Enter the roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Enter the cgpa: ");
    scanf("%f", &s1.cgpa);
    // output
    printf("\nGiven details are: \n");
    printf("Roll number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %f\n", s1.cgpa);
    return 0;
}
```

## Program to get Name and RollNo of n students
> Also perform linear search on this array with roll no and print name of the student

```c
#include<stdio.h>

struct student{
    int roll_no;
    char name[20];
};

int main(){
    struct student s[20];
    int i, n, roll_no;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter the roll no of student %d: ", i+1);
        scanf("%d", &s[i].roll_no);
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("\n");
    }
    printf("\n");
    printf("Enter the roll no to search: ");
    scanf("%d", &roll_no);
    for(i=0; i<n; i++){
        if(s[i].roll_no == roll_no){
            printf("Name of student with roll no %d is %s", roll_no, s[i].name);
            break;
        }
    }
}
```

## Structure pointer

- Pointer to a structure
- Syntax: `struct structure_name *pointer_name;`

```c
struct student{
    int roll_no;
    char name[20];
};

int main(){
    struct student s1 = {103, "Rushi"};
    struct student *ptr;
    ptr = &s1;
    printf("Roll no: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    return 0;
}
```

## Structure and Union

```c
union marks{
    int mat;
    int phy;
    int chem;
};

int main(){
    union marks s1;
    s1.mat = 89;
    s1.phy = 95;
    S1.chem = 93;
    printf("%d %d %d", s1.mat, s1.phy, s1.chem);
    return 0;
}
```



