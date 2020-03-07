#include<stdio.h>
#include<stdlib.h>

int main(){

    int Floors [16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int sizeFloors = sizeof(Floors)/sizeof(Floors[0]);

    int chosenFloors[5];
    int sizeChosenFloors = sizeof(chosenFloors)/sizeof(chosenFloors[0]);

    int currentFloor = 0;
    int playerFloor;
    int checkValidFloor = 1;

    

    for(int i = 0; i < sizeChosenFloors; i++)
    {   
        printf("Choose a floor: ");
        scanf("\n%d", &playerFloor);

        for(int j = 0; j < sizeFloors; j++)
        {
            if(playerFloor == Floors[j])
            {
                chosenFloors[i] = playerFloor;
            }
        }
    }

    if(checkValidFloor == 1)
    {
        for(int i = 0; i < sizeChosenFloors; i++)
        {
            if(chosenFloors[i] < currentFloor)
            {
                for(int j = currentFloor; j >= chosenFloors[i]; j--)
                {
                    if(chosenFloors[i] <= Floors[j])
                    {
                        printf("%d\n",j);
                    }
                }
                
                printf("DING!\n");
                printf("Next chosen floor: \n");
            }

            if(chosenFloors[i] > currentFloor)
            {
                for(int j = currentFloor; j < sizeFloors; j++)
                {
                    if(chosenFloors[i] >= Floors[j])
                    {
                        printf("%d\n",j);
                    }
                }
                printf("DING!\n");
                printf("Next chosen floor: \n");
            }
            
            currentFloor = chosenFloors[i];
        }
    }
    else
    {
        printf("Invalid Floor Inserted !");
    }

    return 0;
}