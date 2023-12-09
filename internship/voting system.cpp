//voting system eligible for aur not eligible for vote
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int age;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
}
