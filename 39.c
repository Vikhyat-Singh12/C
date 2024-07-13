#include<stdio.h>
#include<string.h>

/*
struct  student
{
    int id;
    int marks;
    char fav_name;
    char name[43];

};

int main(){
    struct student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_name = 'u';
    strcpy(s1.name,"Vikhyat");


    printf("The id is  %d \n",s1.id);
    printf("The marks is  %d \n",s1.marks);
    printf("The fav_name is  %c \n",s1.fav_name);
    printf("The name is  %s \n",s1.name);

   
    
    return 0;
}
*/




union  student
{
    int id;
    int marks;
    char fav_name;
    char name[43];

};

int main(){
    union student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_name = 'u';
    strcpy(s1.name,"Vikhyat");

    // which is wriiten at last will give accurate value and other become corrupt


    printf("The id is  %d \n",s1.id);
    printf("The marks is  %d \n",s1.marks);
    printf("The fav_name is  %c \n",s1.fav_name);
    printf("The name is  %s \n",s1.name);

   
    
    return 0;
}