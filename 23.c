
// 1-D array

/*
#include<stdio.h>
int main(){
    int marks[4];
    marks[0] = 34;
    marks[1] = 96;
    marks[2] = 45;
    marks[3] = 36;
    marks[4] = 16;
    marks[5] = 86;
    marks[6] = 66;
    printf("Marks of student 0 is %d\n",marks[0]);
    printf("Marks of student 1 is %d\n",marks[1]);
    printf("Marks of student 2 is %d\n",marks[2]);
    printf("Marks of student 3 is %d\n",marks[3]);
    printf("Marks of student 4 is %d\n",marks[4]);
    printf("Marks of student 5 is %d\n",marks[5]);
    printf("Marks of student 6 is %d\n",marks[6]);

return 0;
}
*/


/*
#include <stdio.h>

int marks[4];

int main()
{
    int n;
    printf("Enter how many marks do you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of %d student: ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The marks of %d student is %d\n", i, marks[i]);
    }

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int marks[4] = {46,56,25,65};      // We can assign value like this
    for (int i = 0; i < 4; i++)
    {
        printf("The marks of %d student is %d\n", i, marks[i]);
    }

return 0;
}

*/

// 2-D array

#include<stdio.h>
int main(){
   int marks[2][4]={{36,45,96,36},{89,65,76,36}};
   for (int i = 0; i < 2; i++)
   {
    for (int j = 0; j < 4; j++)
    {
        printf("The marks of %d %d student is %d\n", i,j, marks[i][j]);
    }
    
   }
   
return 0;
}




