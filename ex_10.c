/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving Licence No.
3. Route
4. Kms

your programs should be able to take n as input and your drivers will start inputting their detail one by one.
Your programe should be clean and print the data in a beautiful fashion.


*/
#include<stdio.h>
#include<string.h>

typedef struct drivers
{
    char Name[30];
    int Driving_Licence_No;
    char Route[100];
    int Kms;

}sd;

    
// int Driver_info(int i){

    

// }

// int Print(int i){
    
// }

int main(){
     
    int i;
    printf("Enter how many Drivers are there: ");
    scanf("%d",&i);

    sd n[i];
    for (int j = 1; j <= i; j++)
    {
        printf("Enter Driver Name: ");
        scanf("%s",&n[j].Name);
        printf("Enter Driving Licence Number: ");
        scanf("%d",&n[j].Driving_Licence_No);
        printf("Enter the Route taken: ");
        scanf("%s",&n[j].Route);
        printf("Enter the distance in Kms: ");
        scanf("%d",&n[j].Kms);
        
        printf("\n");

    }
    printf("\n");
    for (int p = 1; p <= i; p++)
    {
        printf("Driver name:  %s\n",n[p].Name );
        printf("Driver Driving Licence Number:  %d\n",n[p].Driving_Licence_No );
        printf("Route taken by the driver:  %s\n",n[p].Route );
        printf("Distance of the Route:  %d\n",n[p].Kms );

        printf("\n");
        
    }
    // Driver_info(i);
    // Print(i);

    
    return 0;
}