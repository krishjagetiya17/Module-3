//16. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below: 
//Temp < 0 then Freezing 
//weather Temp 0-10 then Very 
//Cold weather Temp 10-20 then 
//Cold weather Temp 20-30 
//then Normal in Temp Temp 
//30-40 then Its Hot 
//Temp >=40 then Its Very Hot 
#include<stdio.h>
int main()
{
	int temp;
	
	printf("\n\n\t Enter the Temprature :");
	scanf("%d",&temp);
	
	printf("\n\n\t Temprature = %d C",temp);
	
	if(temp<0){
		printf("\n-----------------------------------");
		printf("\n Its Freezing Wheather....");
		printf("\n-----------------------------------");
	}
	else if(0<=temp<=10){
		printf("\n-----------------------------------");
		printf("\n Its Very Cold Wheather....");
		printf("\n-----------------------------------");
	}
    else if(10<=temp<=20){
		printf("\n-----------------------------------");
		printf("\n Its Cold wheather....");
		printf("\n-----------------------------------");
	}
}
