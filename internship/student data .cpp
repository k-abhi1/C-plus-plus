//student data recoder 
#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
    
int i = 0;  
  
struct student_info  
{  
    char f_name[50];  
    char l_name[50];  
    int r_no;  
    float cgpa;  
    int cid[10];  
}st[55];  
  
void add_student()  
{  
    printf("You can add the Student data now !! \n");  
  
    printf("Enter the first name of the Student: ");   
    scanf("%s", st[i].f_name);  
    
    printf("Enter the last name of the Student: ");  
    scanf("%s", st[i].l_name);  

    printf("Enter the roll number of the Student: ");    
    scanf("%d", &st[i].r_no);  
   
    printf("Enter the CGPA that the student achieved: ");  
    scanf("%f", &st[i].cgpa);  
  
    printf("List of courses with their respective course ids: ");  
      
    for(int j = 0; j<5; j++)  
    {  
       
        scanf("%d", &st[i].cid[j]);  
    }  
    
    i = i+1;  
  
}  
  
void find_using_roll()  
{  
    int roll;  
    printf("You can find the Student data ");  
    printf("by entering a roll number now !! \n");  
  
    printf("Enter the roll number of the Student: ");  
    scanf("%d", &roll);  
    
    for (int j = 1; j <= i; j++)   
    {  
     
        if (roll == st[i].r_no)   
        {  
            printf("The details of the Student ");  
            printf("with the roll given number are\n");  
  
            // printing the first name of the student  
            printf("The First name of the student is %s\n", st[j].f_name);  
            printf("The Last name of the student is %s\n", st[j].l_name);  
            printf("The CGPA of the student is %f\n", st[j].cgpa);  
              
        }  
        for (int j = 0; j < 5; j++)   
        {  
            printf("The course ID is %d\n", st[i].cid[j]);  
        }  
        break;  
    }  
}  
void find_using_fname()  
{  
    char name[50];  
    printf("You can find the Student data ");  
    printf("by entering the first name now !! \n");  
  
    // scanning the first name of the student  
    printf("Enter the first name of the Student: ");  
    scanf("%s", name);  
   
    for (int j = 0; j <= i; j++) {  
   
        if (!strcmp(st[j].f_name, name))   
        {  
   
            printf("The details of the student are displayed below\n");  
            printf("The First name of the student is %s\n", st[j].f_name);  
            printf("The Last name of the student is %s\n", st[j].l_name);  
            printf("The Roll Number of the student is %d\n ", st[j].r_no);  
            printf("The CGPA of the student is %f\n", st[j].cgpa);  
              
           
            for (int k = 0; k < 5; k++)   
            {  
                printf("The course ID is %d\n", st[j].cid[k]);  
            }  
             
        }  
          
    }  
}  
   
void find_using_course()  
{  
    int id;  
    printf("You can find the Student data ");  
    printf("who have enrolled in the course. ");  
    printf("Enter the course ID of the desired course: \n");  
   
   
    scanf("%d",&id);  
  
    
    for (int j = 0; j <= i; j++)   
    {  
   
        
        for (int d = 0; d < 5; d++)   
        {  
            
            if (id == st[j].cid[d])   
            {  
   
                printf("The details of the Students ");  
                printf("who have registered with the ");  
                printf("corresponding course id: \n");  
                printf("The first name of the student is %s\n", st[j].f_name);  
                printf("The last name of the student is %s\n", st[j].l_name);  
                printf("The Roll number of the student is %d\n", st[j].r_no);  
                printf("The CGPA of the student is %f\n", st[j].cgpa);  
                break;  
            }  
        }  
    }  
}      
  

void delete()  
{  
    int roll;  
    printf("Enter the roll number of the student ");  
    printf("that you want to delete: ");  
   
    scanf("%d", &roll);  
  
     
    for(int j =0; j<= i; j++)  
    {  
         
        if(roll == st[j].r_no)  
        {  
            for(int k = j; k < 49; k++)  
            {  
                st[k] = st[k + 1];  
            }  
            i--;  
        }  
    }  
  
    printf("The details of the student ");  
    printf("bearing the given roll number are successfully ");  
    printf("removed");  
  
}  
  

void update()  
{  
   
    int roll;  
    printf("Enter the roll number of the student ");  
    printf("that you want to update: ");  
      
    
    scanf("%d\n", &roll);  
  
    
    
    for (int j = 1; j <= i; j++)   
    {  
        
        if (st[j].r_no == roll)   
        {  
            printf("Enter the number ");  
            printf("for which details you want to update: \n");  
            printf("1. First name of the student\n");  
            printf("2. Last name of the student\n");  
            printf("3. Roll number of the student\n");  
            printf("4. CGPA of the student\n");  
            printf("5. Courses registered by the student\n");  
            int z;  
   
            scanf("%d", &z);  
            switch (z)   
            {  
            case 1:  
                printf("Enter the first name ");  
                printf("that you want to update : \n");  
                scanf("%s", st[j].f_name);  
                break;  
            case 2:  
                printf("Enter the last name ");  
                printf("that you want to update : \n");  
                scanf("%s", st[j].l_name);  
                  
                break;  
            case 3:  
                printf("Enter the first name ");  
                printf("that you want to update : \n");  
                scanf("%d", &st[j].r_no);  
                break;  
            case 4:  
                printf("Enter the new CGPA : \n");  
                
                scanf("%f", &st[j].cgpa);  
               
                break;  
            case 5:  
                printf("Enter the new courses \n");  
                scanf("%d%d%d%d%d", &st[j].cid[0], &st[j].cid[1], &st[j].cid[2], &st[j].cid[3], &st[j].cid[4]);  
                break;  
            }  
            printf("The Details of the Student ");   
            printf("are updated successfully !!\n");  
        }  
    }  
}  
void count()  
{  
    
    printf("The total number");  
    printf(" of Students is: %d\n",i);  
  
    printf("\nThe maximum number ");  
    printf("of students is 50\n");  
  
   
    printf("%d more students can be added\n",50-i);  
      
}  
void main()  
{  
    int choice;  
    while (i = 1)  
    {  
        
        printf("\n\n\n1. Add the details of the student\n");  
        printf("2. Find the details of the");  
        printf(" student by using roll number\n");  
        printf("3. Find the details of the");  
        printf(" student by using first name\n");  
        printf("4. Find the details of the");  
        printf(" student by using course id\n");  
        printf("5. Update the details of the");  
        printf(" student by using roll number\n");  
        printf("6. Delete the details of the");  
        printf(" student by using roll number\n");  
        printf("7. Find the total number ");  
        printf("of students\n");  
        printf("8. Exit\n");  
          
        printf("Enter the choice number");  
        printf(" that you want to perform: ");  
        scanf("%d", &choice);  
                    
        // use switch cases to  
        // access the method  
        switch (choice)  
        {  
            case 1:  
                add_student();  
                break;

            case 2:  
                find_using_roll();  
                break;  
  
            case 3:  
                find_using_fname();  
                break;  
              
            case 4:  
                find_using_course();  
                break;  
             
            case 5:  
                update();  
                break;  
     
            case 6:  
                delete();  
                break;  
     
            case 7:  
                count();  
                break;  
              
            case 8:  
                printf("Exit successful!!");  
                exit(0);  
                break;     
        }  
  
    }  
}  