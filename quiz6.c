#include <stdio.h>

void triangle(int height, int base){
    int triangleArea = (height * base) / 2;
    printf("The area of the triangle is %d\n", triangleArea);
}

void square(int side){
    int squareArea = (side * side);
    printf("The area of the square is %d\n", squareArea);
}

void rectangle(int firstSide, int secondSide){
    int rectangleArea = (firstSide * secondSide);
    printf("The area of the rectangle is %d\n", rectangleArea);
}

void circle(int radius){
    float pi = 3.14;
    float circleArea = (pi * radius * radius);
    printf("The area of the circle is %.2f\n", circleArea);
}

int main(void){
    int choice;
    printf("CALCULATION \n");
    printf("1. Triangle \n");
    printf("2. Square \n");
    printf("3. Rectangle \n");
    printf("4. Circle \n");
    printf("Enter a number: \n");
    scanf("%d", &choice);
    
    int height, base, side, firstSide, secondSide, radius;  // Değişkenleri burada bildiriyoruz
    
    switch(choice){
        case 1:
            printf("Enter the magnitude of height: ");
            scanf("%d", &height);
            printf("Enter the magnitude of base: ");
            scanf("%d", &base);
            triangle(height, base);
            break;
        case 2:
            printf("Enter the magnitude of side: ");
            scanf("%d", &side);
            square(side);
            break;
        case 3:
            printf("Enter the magnitude of the first side: ");
            scanf("%d", &firstSide);
            printf("Enter the magnitude of the second side: ");
            scanf("%d", &secondSide);
            rectangle(firstSide, secondSide);
            break;
        case 4:
            printf("Enter the magnitude of the radius: ");
            scanf("%d", &radius);
            circle(radius);
            break;
        default:
            printf("Invalid value type.\n");
    }
}
