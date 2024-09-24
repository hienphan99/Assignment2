#include <stdio.h>
#include <string.h>
int main ()
{
	char firstName[50];
	char lastName[50];
	int age;
	char gender[10];
	char personalID [10];  
    int employeeNumber;

 
    printf("Enter first name: ");
    scanf("%s", firstName);  


    printf("Enter last name: ");
    scanf("%s", lastName);  
    
    do
    {
        printf("Enter age: ");
        scanf("%d", &age);  
    } while (age < 0 || age > 100);


    do
    {
        printf("Enter gender: ");
        scanf("%s", gender);  
    } while (strcmp(gender, "male") != 0 && strcmp(gender, "female") != 0);


    printf("Enter personal ID: ");
    scanf("%s", personalID);  
    
    printf("Enter unique Employee number: ");
 	scanf("%d", &employeeNumber); 
 	printf("-------------------------------\n");
    printf("First name: %s\n", firstName);
    printf("Last name: %s\n", lastName);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("Personal ID: %s\n", personalID);
    printf("Unique Employee number: %d\n", employeeNumber);
	 
}
