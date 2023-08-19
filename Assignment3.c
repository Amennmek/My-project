/*
 Assignment 3
 Amen Wolde
 6/8/2023
*/



#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void page140_2(void);
void page141_3(void);
void page141_4(void);
void page141_6(void);
void page141_7(void);

int main() {
    printf("Solution to page 140 #2\n");
   
    char name[100];
    printf("Enter your first name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    page140_2();
   
    printf("Solution to page 141 #3\n");
   
    float number;
    printf("Enter a floating point number: ");
    scanf("%f", &number);
    printf("The input is %.1f or %.1e\n", number, number);
    printf("The input is %+06.3f or %+06.3E\n", number, number);

    page141_3();
    
    printf("Solution to page 141 #4\n");
    
    char name2[100];
    float height_Inches, height_Feet;

    printf("Enter your name: ");
    scanf("%s", name2);
    printf("Enter your height in inches: ");
    scanf("%f", &height_Inches);
    height_Feet = height_Inches / 12.0;
    printf("%s, you are %.3f feet tall\n", name2, height_Feet);
    
    page141_4();
    
    printf("Solution to page 141 #6\n");
    
     char firstName[100];
     
	 char lastName[100];
	 
     printf("Enter your first name: ");
     
	 scanf("%s", firstName);
	 
     printf("Enter your last name: ");
     
	 scanf("%s", lastName);

    printf("%s %s\n", firstName, lastName);
    
    page141_6();

    printf("Solution to page 141 #7\n");
    
	double doubleValue = 1.0 / 3.0;
    
	float floatValue = 1.0f / 3.0f;
    
	printf("doubleValue (4 digits): %.4f\n", doubleValue);
   
    printf("doubleValue (12 digits): %.12f\n", doubleValue);
   
   	printf("doubleValue (16 digits): %.16f\n", doubleValue);
   
    printf("\n");
    
	printf("floatValue (4 digits): %.4f\n", floatValue);
    
	printf("floatValue (12 digits): %.12f\n", floatValue);
    
	printf("floatValue (16 digits): %.16f\n", floatValue);
    
	printf("\n");
    
	printf("FLT_DIG: %d\n", FLT_DIG);
    
	printf("DBL_DIG: %d\n", DBL_DIG);
    
    page141_7();

    system("pause"); // Only for DOS-based systems
    
    return 0;
}

void page140_2(void) {
    printf("Under Construction\n\n");
}

void page141_3(void) {
    printf("Under Construction\n\n");
}

void page141_4(void) {
    printf("Under Construction\n\n");
}

void page141_6(void) {
    printf("Under Construction\n\n");
}

void page141_7(void) {
    printf("Under Construction\n\n");
}


//Solution to page 140 #2
//Enter your first name: Amen
//"Amen"
//"                Amen"
//"Amen                "
//Under Construction
//
//Solution to page 141 #3
//Enter a floating point number: 3.4
//The input is 3.4 or 3.4e+000
//The input is +3.400 or +3.400E+000
//Under Construction
//
//Solution to page 141 #4
//Enter your name: Amen
//Enter your height in inches: 43
//Amen, you are 3.583 feet tall
//Under Construction
//
//Solution to page 141 #6
//Enter your first name: Amen
//Enter your last name: Wolde
//Amen Wolde
//Under Construction
//
//Solution to page 141 #7
//doubleValue (4 digits): 0.3333
//doubleValue (12 digits): 0.333333333333
//doubleValue (16 digits): 0.3333333333333333
//floatValue (4 digits): 0.3333
//floatValue (12 digits): 0.333333343267
//floatValue (16 digits): 0.3333333432674408
//
//FLT_DIG: 6
//DBL_DIG: 15
//Under Construction
//
//Press any key to continue . . .


