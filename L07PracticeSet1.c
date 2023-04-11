// Q1 (a)-Area of Rectangle

#include<stdio.h>
int main()
{
    int length = 30;
    int breadth = 10;
    printf("The area of the rectangle is %d\n",length*breadth);
    return 0;
}

// Q1 (b)-Area of Rectangle taking user input!

#include<stdio.h>
int main()
{
    int length,breadth;
    printf("Enter length \n");
    scanf("%d",&length);
    printf("Enter breadth \n ");
    scanf("%d",&breadth);
    printf("The area of the rectangle is %d",length*breadth);
    return 0;
}

// Q2 (a)-Area of a circle

#include<stdio.h>
int main()
{
    float pi = 3.14;
    int radius;
    printf("Enter the radius of your circle:\n");
    scanf("%d",&radius);
    printf("The area of the circle is %f \n",pi*radius*radius);
    return 0;

}

// Q2 (b) - Area of the Cylinder

#include <stdio.h>
int main()
{
    int two = 2;
    float pi = 3.14159;
    int height;
    int radius;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Enter the radius\n");
    scanf("%d", &radius);
    printf("The area of the cylinder is %f", two * pi * radius * height + two * pi * radius * radius);

    return 0;
}


//Q3 - Converting Celsius to Fahrenheit

#include<stdio.h>
int main() 
{
    float celsius;
    float formula = 1.8;
    printf("What's the Celsius?\n");
    scanf("%f",&celsius);
    printf("In Fahrenheit it is:\n%f",celsius*formula+32);
    return 0;

}

//Q4 - Calculating Simple Interest

#include<stdio.h>
int main()
{
    int principle;
    float interest;
    int time;

    printf("Enter the principle amount:\n");
    scanf("%d",&principle);
    printf("Enter the interest:\n");
    scanf("%f",&interest);
    printf("Enter the time\n");
    scanf("%d",&time);

    printf("The Simple Interest is:\n %f",principle*interest*time/100);
    return 0;
    
}
