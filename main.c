#include <stdio.h>
#include <string.h>


typedef struct {
    int BirthYear;
    char FirstName[50];
    char LastName[50];
    char City[50];
}Student;

void PrintStudent(const Student *p){
    printf("Student information:\n");
    printf("%s %s\n",p->FirstName, p->LastName);
    printf("%s Birth year:%d\n",p->City, p->BirthYear);
}


void InputStudent(Student *p){
    printf("Ny student:\n");
    printf("First name:");
    scanf(" %s", p->FirstName);
    printf("Last name:");
    scanf(" %s", p->LastName);
    printf("City:");
    scanf(" %s", p->City);
    printf("Birth year:");
    scanf(" %d", &p->BirthYear);
}


int main(){
    Student student1;
    Student student2;

    
    InputStudent(&student1);
    InputStudent(&student2);

    PrintStudent(&student1);
    PrintStudent(&student2);
    return 0;
}