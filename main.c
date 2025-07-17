#include <stdio.h>
#include <math.h> // using this makes you able to use special functions related to math liek the below function
#include <stdlib.h>

void userinput() {
    int input;
    printf("Please enter a number: ");
    //scanf works the same as printf where you can have multiple inputs at once
    scanf("%d", &input); //this is the scan function
                                //it reads from the CLI and puts it into the variable stated in
                                //the second parameter. %i is the datatype using formatting
    //also note the & is how we assign the value directly to the variable.
    //it makes use of pointers since we are telling it to go to the memory address and not the value
    //note that you must always point to the memory adress in scanf

    printf("You entered: %d\n", input);

    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name); // note that with strings you dont need to point to the memory address
    //it is special cause it is an array
    printf("You entered: %s\n", name);
    //scanf also considers whitespace as a terminating character so use underscores if wanted space
}

void mathStuff() {
    int c = sqrt(9); // square root
    int d = ceil(9); //this rounds up to the nearest integer
    int e = floor(9); //rounds down to the nearest integer
    int f = pow(10,2);//this the power function that puts the 10 to the power of 2 in this case
}

//scopes
int x = 5;
//this is a global variable
//so it can be seen by the whole program
//if the variable is inside a function
//it cannot be seen by other functions, we call that local variables


//returning values in func
//the use of return is how it works
//when you call the function you must do it in such a way where it will be
//assigned to another value or outputted
int add(int a, int b) {
    return a + b;
}

void Dynamic_Array() {
    //create a pointer of the type you want
    int* ptr;
    //have a size to set it by default
    int size = 10;

    //assign the size using type and malloc
    ptr = (int*)malloc(size * sizeof(int));

    //checks if it returns null cause it sometimes does if there is an issue
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
    }else {
        printf("Memory successfully allocated using "
               "malloc.\n");
        //assigns values to the array
        for (int i = 0; i < size; i++) {
            ptr[i] = i +1;
        }
        //prints the values to the array
        printf("The elements of the array are: ");
        for (int i = 0; i < size; i++) {
            printf("%d, ", ptr[i]);
        }
    }
}

//arrays
void arrs() {
    //this is the main way of declaring an array
    //just change the data type and name and values inside {}
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}

//function parameters
//this is an example with multiple parameters
//if u only want 1 just use your brain gang
void funcparms(char name[], int age) {
    printf("Enter your name: %s",name);
    printf("Enter your age: %d",age);
}

void dataTypes() {
    int age; // standard int
    double height;
    float weight; //float and double are both decimal stuff, but genrally we use double
    char gender = 'B'; // standard char make sure you use single quotes not double
    char name[100] = "Matthew"; // this is the standard way of storing a string, make sure you use double quotes

    printf("%s %c ", name, gender);
}

//These are different ways of storing variables
void variables() {
    char name[20] = "Matthew"; // note that C does not have any Strings
                                //so we use an array of char to store strings
    int age = 20; // this is standard with ints, nothing enw here

    printf("%s\n", name); // note that with the format we use %s for string of where it should be
    printf("He is %d years old\n", age); // here it is %d. these change based on what data type you are inputting
}

// this is how you would right a function
//void is a place holder for a datatype you want to return
//if you dont want to return anything
//use void like done below
void myFunction() {
    printf("Hello World!\n");//printf is the standard way of displaying to CLI
}
//note that any function that you want to call must be above the function you call it in
//that is why myFucntion is placed above of main
//since we call myFunction in main
int main(void) {
    userinput();
    myFunction(); // this is calling the function
    variables();
    dataTypes();
    funcparms("School", 100);
    return 0; // this return basically tells where and when and how the program begins ends and dies pretty much
}



