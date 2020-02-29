#include<stdio.h>
#include<stdlib.h>

int main(){

    int floors [16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(floors)/sizeof(floors[0]);

    int currentFloor;
    int playerFloor;


    printf("Choose a floor: ");
    scanf("\n%d", &playerFloor);

    for(int i = 0; i < size; i++)
    {
        if(playerFloor >= i)
        {
            printf(i); 
        }
    }

    return 0;
}