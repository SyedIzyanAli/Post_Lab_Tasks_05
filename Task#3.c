#include<stdio.h>
int main(){

    int Appointment,Doc_Available,Reg_completed;
    printf("Do you have an Appointment? ");
    scanf("%d",&Appointment);
    
    printf("Is the Doctor Available? ");
    scanf("%d",&Doc_Available);

    printf("Is you Registration Completed? ");
    scanf("%d",&Reg_completed);

    if ((Appointment==1))
    {
        if (Doc_Available==1)
        {
            if (Reg_completed==1)
            {
                printf("You can meet the Doctor.");
            }
            else
            printf("Please Complete Your Registration First!");
            
        }
        else
        printf("The Doctor is not available right now. Please Wait.");
        
    }
    else
    printf("Please Book an Appointment First.");
    
    return 0;
}