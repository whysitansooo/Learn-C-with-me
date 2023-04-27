//! DATE - 21-4-2023
//! Author - Sitansu Sekhar

// #include <stdio.h>
// int main()
// {
// struct pokemon{  //* User defined data type
//     int hp;
//     int speed;
//     int attack;
//     char tier; //* S,A,B,C,D
// } pikachu; //* We can define variables also like this

// pikachu.attack;
// printf("Enter the attack of pikachu: ");
// scanf("%d",&pikachu.attack);
// pikachu.hp = 50;
// pikachu.speed = 100;
// pikachu.tier = 'A';

// struct pokemon charizard;
// charizard.attack = 130;
// charizard.hp = 80;
// charizard.speed = 80;
// pikachu.tier = 'S';

// struct pokemon mewtwo;
// mewtwo.attack = 170;
// mewtwo.hp = 150;
// mewtwo.speed = 200;
// mewtwo.tier = 'G';

// printf("%d",pikachu.attack);
// }


//? Create a structure type 'Book' with name, price and number of pages as its attributes

// #include<stdio.h>
// #include<string.h>
// int main(){
//     struct book{
//         char name[50];
//         int price;
//         int pages;
//     }a,b,c;

//     strcpy(a.name,"A Man Called Ove");
//     a.price = 399;
//     a.pages = 300;
    

//     strcpy(b.name,"The Adventures Of Huckleberry Finn");
//     b.price = 400;
//     b.pages = 200;

//     strcpy(c.name,"Secret Seven");
//     c.price = 100;
//     c.pages = 500;

//     printf("%s\n",c.name);
//     printf("%d\n",c.price);
//     printf("%d",c.pages);
// }


//? Create a structure type 'Person' with name, salary and age as its attributes. Declare and initialize 2 variables for this. Print the name of first person and age of the other

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     struct Person {
//         char name[20];
//         int salary;
//         int age;
//     }p1,p2;

//     strcpy(p1.name,"Sitansu Sekhar");
//     p1.salary = 300000;
//     p1.age = 18;

//     strcpy(p2.name,"Anurag Chaohan");
//     p2.salary = 500000;
//     p2.age = 18;

//     printf("%s",p1.name);
//     printf("\n%d",p2.salary);
// }

