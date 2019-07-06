#include <stdio.h>

int main(void)
{
    //declaration
    int height, length ,width, weight, volume;
    float fee;

    //user input
    printf("Enter the heigth of your item: ");
    scanf("%d", &height);
    printf("Enter the length of your item: ");
    scanf("%d", &length);
    printf("Enter the weight of your item: ");
    scanf("%d", &width);

    //calculation
    volume=height*width*length ;
    weight= (volume+165)/166;
    fee= weight*10.5;

    //output
    printf("Volume of your item: %dcm^3\n", volume); // print volume
    printf("Dimensional weight of your item: %dkg\n", weight);
    printf("Shipping fee = RM%.2f\n", fee);

    return 0;

}
