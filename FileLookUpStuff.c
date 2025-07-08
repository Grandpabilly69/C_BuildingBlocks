#include <stdio.h>

void createfile() {
    //With files in C. U must first create a pointer that is of type FILE like shown below.
    FILE *fptr;
    //fopen is tellign the file to open. The first parameter is the name of the file
    //the second parameter is the mode. Basically what you want to do to the file
    //w - write
    //a - append
    //r - read
    fptr = fopen("file.txt", "a");

    //you also need to remember to close the file once you are done using it.
    fclose(fptr);
}

//note that if the file already exists then it will delete all that was stored in the file originally.
//you can fix this by reading and storing in a string and adding it back when you write to the file
//Or you can use mode a for just adding without deleting
void writefile() {
    FILE *fptr;
//do you see how im using the mode w for writing
    fptr = fopen("file.txt", "w");

    //using fprintf is formatted printing to file.
    //basically writes whatever i put as the second parameter into the file in the first parameter
    fprintf(fptr, "Hello World\n");

    fclose(fptr);
}

void readfile() {
    char filecontents[100];
    FILE *fptr;
    fptr = fopen("file.txt", "r");

    //this is good practice to make sure you return something to the user
    //generally it will be an if else statement
    //so everything in the if in this case will be if it cant find the file
    //the else will be the actual reading and stuff for it
    if(fptr == NULL) {
        printf("Not able to open the file.");
    }

    //this reads from file and stores in the string
    //first parameter is the string to store contents
    //second is the max size of the string
    //third parameter is the file pointer
    //note that this only reads the first line
    //to read all lines you must use a while loop
    fgets(filecontents, 100, fptr);

    //while loop to store and print all contents of the file
    //it is the same as the above but it does it until there are no more characters that are detected
    while(fgets(filecontents, 100, fptr)) {
        printf("%s", filecontents);
    }

    fclose(fptr);
}
