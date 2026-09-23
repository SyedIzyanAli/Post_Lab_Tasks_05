#include<stdio.h>
int main(){

int Restaurant_Open,Item_Available,Balance_Sufficient;

printf("Is the Restaurant Open? (1--Yes,0--No) ");
scanf("%d",&Restaurant_Open);

printf("Is the Item Available? (1--Yes,0--No) ");
scanf("%d",&Item_Available);

printf("Is Your Balance Sufficient? (1--Yes,0--No) ");
scanf("%d",&Balance_Sufficient);

if (Restaurant_Open==1)
{
    if (Item_Available==1)
    {
        if (Balance_Sufficient==1)
        {
            printf("Your Order is in Process.");
        }
        else
        printf("Order Denied due to low Balance.");
        
    }
    else
    printf("Order Denied due to unavailability of Item you Ordered.");
    
}
else
printf("We are Closed.");



    return 0;
}