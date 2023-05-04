//! Basic Stuff

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     typedef struct pokemon {
//         char name[15];
//         int attack;
//         int hp;
//         int speed;
//         char tier;
//     } pokemon;

//     pokemon arr[3];  //* arr[0],arr[1],arr[2]
//     strcpy(arr[0].name,"Pikachu");
//     printf("Enter attack of Pikachu: ");
//     scanf("%d",&arr[0].attack);
//     arr[0].hp = 70;
//     arr[0].speed = 100;
//     arr[0].tier = 'A'; 

//     strcpy(arr[1].name,"Charizard");
//     arr[1].attack = 130;
//     arr[1].hp = 100;
//     arr[1].speed = 80;
//     arr[1].tier = 'S';

//     for(int i=0;i<2;i++){
//         printf("%s\n",arr[i].name);
//         printf("Attack: %d\n",arr[i].attack);
//         printf("HP: %d\n",arr[i].hp);
//         printf("SPEED: %d\n",arr[i].speed);
//         printf("Tier: %c\n",arr[i].tier);
//     }
// }


//? A record contains name of cricketer, his age,
//? number of test matches that he has played and
//? the average runs that he has scored in each 
//? test match. Create an array of structure to hold
//? records of 20 such cricketer and then write a
//?  a program to read these records

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     typedef struct cricketer{
//         char FirstName[20];
//         char LastName[20];
//         int age;
//         int matches;
//         float averageRuns;
//     }cricketer;

//     cricketer arr[2];
//     for(int i=0;i<2;i++){
//         scanf("%s",arr[i].FirstName);
//         scanf("%s",arr[i].LastName);
//         scanf("%d",&arr[i].age);
//         scanf("%d",&arr[i].matches);
//         scanf("%f",&arr[i].averageRuns);
//     }

//     for(int i=0;i<2;i++){
//         printf("Name: %s %s\n",arr[i].FirstName,arr[i].LastName);
//         printf("Age: %d\n",arr[i].age);
//         printf("Matches Played: %d\n",arr[i].matches);
//         printf("Average Runs: %f\n",arr[i].averageRuns);
//     }
//     }
    
//cow Copying entire structure variable to another of same type

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     typedef struct Pokemon{
//         char name[20];
//         int attack;
//         int speed;
//         int hp;
//     } Pokemon;
//     Pokemon a,b;
//     strcpy(a.name,"Charizard");
//     a.attack = 130;
//     a.speed = 70;
//     a.hp = 100;

//     b = a; //* deep copy
//     strcpy(b.name,"Blastoise");
//     printf("Name: %s\n",b.name);
//     printf("Attack: %d\n",b.attack);
//     printf("Speed: %d\n",b.speed);
//     printf("HP: %d\n",b.hp);
// }


//? Create a structure 'date' that contains three
//? members namely date,month and year. Create 2
//? structure variables with different dates and now
//? compare the two. If the dates are equal then display
//? message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date {
        int date;
        int month;
        int year;
    } date;
    date a,b;

    //* a -> 19-12-2003
    //* b -> 22-4-2023
    a.date = 19;
    a.month = 12;
    a.year = 2003;

    b.date = 19;
    b.month = 12;
    b.year = 2003;

    bool flag = true;
    if(a.date != b.date){
        flag = false;
    }
    else if(a.month != b.month)flag = false;
    else if(a.year != b.year)flag = false;
    else flag = true;
    if(flag==true) printf("Equal");
    else printf("Unequal");
    
    

}

