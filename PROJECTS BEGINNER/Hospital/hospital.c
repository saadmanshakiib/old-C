#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
        int patient(){
            start:
            printf("\n\tCode\tName\tBed No.");
            printf("\n\t-------------------------");
            printf("\n\t1176\tSaiful\t2");
            printf("\n\t1236\tSalam\t24");
            printf("\n\t1216\tRifat\t12");
            printf("\n\t1256\tAbdul\t11");
            printf("\n\t2136\tRafiul\t8");
            printf("\n\t7632\tShakib\t18");
            printf("\n\t2277\tAhmed\t9");
            printf("\n\t1379\tWasim\t4");
            printf("\n\t2212\tMotiur\t7");
            printf("\n\t1123\tRahim\t2");

            printf("\n\n\tEnter the code for more info.");
            int code;
            scanf("%d",&code);
            if(code==1176){
printf("\n\tName : Saiful Islam ");
printf("\n\tAge : 28");
printf("\n\tAdmitted since 10 October 2020");
printf("\n\tWard No. 2 \t Bed No.2");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available\n\n ");
goto start;
            }
            else if(code==1236){
printf("\n\tName : Ariful Islam Salam ");
printf("\n\tAge : 33");
printf("\n\tAdmitted since 10 May 2021");
printf("\n\tWard No. 2 \t Bed No.24");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available\n\n ");
goto start;
            }
            else if(code==1216){
printf("\n\tName : Rifatul Islam ");
printf("\n\tAge : 34");
printf("\n\tAdmitted since 23 March 2021");
printf("\n\tWard No. 3 \t Bed No.12");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : 3 June 2021 \n\n");
goto start;
            }
            else if(code==1256){
printf("\n\tName : Abdbul Rahman ");
printf("\n\tAge : 33");
printf("\n\tAdmitted since 6 May 2021");
printf("\n\tWard No. 4 \t Bed No.11");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available \n\n");
goto start;
            }
            else if(code==2136){
printf("\n\tName : Rafiul Ahmed");
printf("\n\tAge : 37");
printf("\n\tAdmitted since 1 May 2020");
printf("\n\tWard No. 5 \t Bed No.8");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : 4 June 2021 \n\n");
goto start;
            }
            else if(code==7632){
               printf("\n\tName : Shakibul Islam ");
printf("\n\tAge : 28");
printf("\n\tAdmitted since 1 March 2021");
printf("\n\tWard No. 2 \t Bed No.18");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available \n\n"); 
goto start;
            }
            else if(code==2277){
                printf("\n\tName : Rabbi Ahmed");
printf("\n\tAge : 28");
printf("\n\tAdmitted since 17 February 2021");
printf("\n\tWard No. 5 \t Bed No.9");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available\n\n ");
goto start;
            }
            else if(code==1379){
                printf("\n\tName : Wasim ");
printf("\n\tAge : 28");
printf("\n\tAdmitted since 10 May 2020");
printf("\n\tWard No. 6 \t Bed No.4");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : 10 June 2021 \n\n");
goto start;
            }
            else if(code==2212){
                printf("\n\tName : Motiur Alam ");
printf("\n\tAge : 28");
printf("\n\tAdmitted since 10 January 2020");
printf("\n\tWard No. 1 \t Bed No.7");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : Not Available \n\n");
goto start;
            }
            else if(code==1123){
                    printf("\n\tName : Rahim ");
printf("\n\tAge : 24");
printf("\n\tAdmitted since 23 May 2021");
printf("\n\tWard No. 1 \t Bed No.2");
printf("\n\tDisease Type : Normal ");
printf("\n\tRelease Date : 5 June 2021 \n\n");
            }
            else{
                printf("\n\tError!!!");
            }

        }
int bed(void){
printf("\n\t1.ICU?\t2.Normal");
int bed;
int bed_icu;
long long int tk;
int bed_normal;
int taka;

scanf("%d",&bed);
if(bed==1){
    printf("\n\tAvailable bed(s) in ICU is - 3,8,12");
scanf("%d",&bed_icu);
if(bed_icu==3||bed_icu==8||bed_icu==12){
    printf("\n\tYour bed has been booked ");
    printf("\n\tPay TK10000 to confirm booking");
    scanf("%lld",&tk);
    if(tk==10000){
        printf("\n\tBed no %d is yours for 3 days from today ",bed_icu);
    }
    else if(tk<10000){
        printf("\n\tYou have to pay %d TK more ",10000-tk);
    }
    else if(tk>10000){
        printf("\n\tHere is your extra %d tk ",tk-10000);
    }
    else{
        printf("\n\tError!!!!!!");
        abort();
    }
}
else{
    printf("\n\tPlease try to select your bed from the bed number of 3,8,12");
    abort();
}
}
        else if(bed==2){
printf("\n\tAvailable sits in other wards - 2,19,20,21");
scanf("%d",&bed_normal);
if(bed_normal==2||bed_normal==19||bed_normal==20||bed_normal==21){
printf("\n\tYou have selected the bed no - %d ",bed_normal);
printf("\n\tPay TK5000 to confirm your booking ");
    scanf("%lld",&taka);
    if(taka==10000){
        printf("\n\tBed no %d is yours for 3 days from today ",bed_normal);
    }
    else if(taka<10000){
        printf("\n\tYou have to pay %d TK more ",10000-taka);
    }
    else if(taka>10000){
        printf("\n\tHere is your extra %d tk ",taka-10000);
    }
    else{
        printf("\n\tError!!!!!!");
        abort();
    }
}
else{
        printf("\n\tPlease try to select your bed from the bed number of 2,29,20,21");
    abort();
}
}
else{
    printf("\n\tSomething went wrong!!!");
    abort();
}

                }
        
int main(){
    time_t currenttime;
    time(&currenttime);
    printf(" %s ",ctime(&currenttime));
printf("\n\tEnter the name to continue ");
char name[10];
gets(name);
printf("\n\tWelcome %s ",name);
sleep(1);
printf("\n\tWhat you want to do ?");
    printf("\n\t1.Find a Bed");
        printf("\n\t2.Look for a patient");
int option;
scanf("%d",&option);
    if(option==1){
        bed();
    }
    else if(option==2){
        patient();
    }
    else{
        printf("\n\tError!!!!");
    }
    getch();
    return 0;
}