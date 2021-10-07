//code for simple understanding of struct//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[100];
    int age;
    unsigned long long mobile; 
};

int main()
{
    
    int n;
    scanf("%d", &n);
    struct student student[n];
    for(int i=0; i<n; i++){
        printf("Hello\n");
        printf("Enter student name: \n");
        gets(student[i].name);
        printf("Enter student age: ");
        scanf("%d", &student[i].age);
        printf("Enter student mobile: ");
        scanf("%llu", &student[i].mobile);
        getchar();
    }
    for (int i=0; i<n; i++){
        printf("Student name: %s\n", student[i].name);
        printf("Student age: %d\n", student[i].age);
        printf("Student mobile: %llu\n\n", student[i].mobile);
    }
    return 0;
}

