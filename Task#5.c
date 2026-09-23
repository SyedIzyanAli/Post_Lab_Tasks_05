#include<stdio.h>
// This source code is uploaded on the github repo whose link has been given to you. Here it is not possible to show all 107 lines of code in one ss.
int main(){

int Number;

printf("Select the Operation You Want to Perform:\n1 for Balance Inquiry\n2 for Cash Withdrawal\n3 for Cash Deposit\n4 for PIN Change.\nYou Entered: ");
scanf("%d",&Number);

switch (Number)
{
case 1:
    printf("1 for Savings Account\n2 for Current Account.\nYou Entered: ");
    int Number2;
    scanf("%d",&Number2);
    switch (Number2)
    {
    case 1:
        printf("Available Balance: $3000.");
        break;
    case 2:
        printf("Available Balance: $2500.");
        break;
    
    default:
        printf("Enter Valid Input!");
        break;
    }
    break;
case 2:
    printf("1 for Savings Account\n2 for Current Account.\nYou Entered: ");
    int Num2;
    scanf("%d",&Num2);
    switch(Num2){
        case 1:
        printf("Available Balance: $3000.");
        int withdraw;
        printf("Enter Amount to Withdraw: ");
        scanf("%d",&withdraw);
        break;

        case 2:
        printf("Available Balance: $2500.");
        int withdraw1;
        printf("Enter Amount to Withdraw: ");
        scanf("%d",&withdraw1);
        break;

        default:
        printf("Enter Valid Input.");
        break;
        
    }
    break;
case 3:
    printf("1 for Savings Account\n2 for Current Account.\nYou Entered: ");
    int num3;
    scanf("%d",&num3);
    switch (num3)
    {
    case 1:
        int PIN1;
        printf("Please Enter Your PIN to Authenticate: ");
        scanf("%d",&PIN1);
        break;

    case 2:
        int PIN2;
        printf("Please Enter Your PIN to Authenticate: ");
        scanf("%d",&PIN2);
        break;
    
        default:
        printf("Enter Valid Input.");
        break;
    }
    break;
case 4:
    int change_pin;
    printf("1 for Savings Account\n2 for Current Account.\nYou Entered: ");
    scanf("%d",&change_pin);
    switch (change_pin)
    {
    case 1:
    int prev_pin;
    printf("Enter Your Prebious Pin to Authenticate: ");
    scanf("%d",prev_pin);
    break;
    
    case 2:
    int prev_pin2;
    printf("Enter Your Previous Pin to Authenticate: ");
    scanf("%d",prev_pin2);
    break;
    
    default:
    printf("Enter Valid Input!");
    break;
    }
    break;
default:
    printf("Enter Valid Number.");
    break;
}

    return 0;
}