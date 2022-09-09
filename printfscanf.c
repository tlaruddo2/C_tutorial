#include <stdio.h>

int main(void)
{
    // // variable
    // int age = 12;
    // printf("%d\n", age);

    // float f = 46.5f;
    // printf("%f\n", f);
    // printf("%.2f\n", f); //.2: two decial point
    // double d = 4.428;
    // printf("%.2lf\n", d);

    // // contant
    // const int YEAR = 2000;
    // printf("%d\n", YEAR);

    // // scanf (get input from user)
    // int input;
    // printf("enter input");
    // // scanf("%d", &input); //(data type, variable)
    // scanf("%d", &input);
    // printf("three %d\n", input);

    // int one, two, three;
    // printf("enter three int");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("First %d", 2one);
    // printf("second %d", two);
    // printf("three %d", three);

    // //char, string
    // char c = 'a';
    // printf("%c\n", c);

    // char str[256];
    // scanf ("%s", str, sizeof(str));
    // printf("%s\n", str);

    // exmaple: get name, age, weight, height from user
    char name[256];
    printf("enter your name\n");
    scanf("%s", name, sizeof(name));

    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    float weight;
    printf("enter your weight\n");
    scanf("%f", &weight);

    float height;
    printf("enter your height\n");
    scanf("%f", &height);

    printf("========\n");
    printf("name: %s\n", name);
    printf("age: %d\n", age);
    printf("height: %.2f\n", weight);
    printf("weight: %.2f\n", height);

    return 0;
}