#include <stdio.h>

int main(void)

{
	int height, length, area;
	float profit;
	height=2;
	length=2;
	profit=1.718;
	printf("Height: %dcm\nLength: %dcm\nProfit: RM%.3f\n", height, length, profit);
	area=height*length;
	printf("Area: %dcm^2\n", area);
	return 0;

}
