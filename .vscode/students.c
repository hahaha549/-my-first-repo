#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// structure Marks
struct Marks{
    float maths;
    float physics,science;

};
//structure Student
struct Student{
    char name[25];
    struct Marks;
    float total;
    
}t[20];
int i;
int main(){
    bool choice;
//give the choice to test
    choice=True;
    while (choice=True){
    printf("do u wanna add a student?");
    scanf("%s", &choice);
// if the choice is False quit
    if(choice!=True){
        printf("okay!,goodbye :)");

    }else{
//if the choice is True the programm 
        i=0;
        do{
            printf("Enter the name");
            scanf("%s", &t[i].name);
            printf("Enter the maths mark");
            while((t[i].Marks.maths<20 && t[i].Marks.maths>0) || (t[i].Marks.physics<20 && t[i].Marks.physics>0) || (t[i].Marks.science<20 && t[i].Marks.science>0)){
                scanf("%f", &t[i].Marks.maths);
                printf("Enter the physics mark");
                scanf("%f", &t[i].Marks.physics);
                printf("Enter the science mark");
                scanf("%f", &t[i].Marks.science);
            }t[i].total=(t[i].Marks.maths+ t[i].Marks.physics+ t[i].Marks.science)/3;

            printf("Name=", t[i].name);
            printf("Maths mark=", t[i].name.maths);
            printf("physics mark=", t[i].name.physics);
            printf("science mark=", t[i].name.science);
            printf("Totale", t[i].total); 
            printf("do u wanna add another student?");
            scanf("%s", &choice);
        }while (i<20);
    }
    }
   return 0; 
}
