#include<stdio.h>
#include<string.h>

struct  student{
    int id;
    int marks;
    char fav_char;
    char name[34];

};


// We can define like this 


/*
int main(){
    struct  student Vikhyat, Sachin, Shubham;
    Vikhyat.id = 1;
    Sachin.id = 2;
    Shubham.id =3;
    Vikhyat.marks = 95;
    Sachin.marks = 90;
    Shubham.marks = 75;
    Vikhyat.fav_char = 'V';
    Sachin.fav_char = 'S';
    Shubham.fav_char = 'A';
    strcpy(Vikhyat.name,"Vishu");

    printf("Vikhyat got %d marks\n",Vikhyat.marks);
    printf("Shubham got %d marks\n",Shubham.marks);
    printf("Sachin got %d marks\n",Sachin.marks);
    printf("Vikhyat name  is %s",Vikhyat.name);
    
    return 0;
}
*/


                   // Or like this

int main()
{
    struct student Vikhyat ={1,95,'v'};
    printf("Vikhyat got %d marks\n",Vikhyat.marks);
    printf("Vikhyat Id is: %d",Vikhyat.id);
    // printf("Vikhyat name  is %s",Vikhyat.name);

    return 0;
}
