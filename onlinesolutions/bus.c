#include<stdio.h>
#include<conio.h>
int main(){
    printf("\n\tENTER YOUR NAME ");
    char name[10];
    gets(name);
    printf("\n\tWELCOME %s",name);
    printf("\n\tCHOOSE YOUR DESTINATION...");
    printf("\n1.DHAKA\n2.KHULNA");
    printf("\n\t(PRESS 1 FOR DHAKA AND 2 FOR KHULNA)");
    int choose;
    scanf("%d",&choose);
    int bus;
    int bus2;
    int sit;
    int sit_2ndbus;
    int sit2;
    int sit3;
    if(choose==1){
        printf("\n\tYOU WANT TO GO TO DHAKA.");
        printf("\n\tAVAILABLE BUS FOR DHAKA - ");
        printf("\n1.SHAYMOLI\n2.ENA");
        scanf("%d",&bus);
        if(bus==1){
            printf("\n\tAVAILABLE SITS FOR SHAYMOLI - ");
            printf("\n1,2,3,4,5,6,7,8,9");
            scanf("%d",&sit);
            if(sit==1||sit==2||sit==3||sit==4||sit==5||sit==6||sit==7||sit==8||sit==9){
                printf("\n\tYOU HAVE SELECTED THE SIT NO %d",sit);
                                printf("\n\tYOUR BUS WILL START AT 10PM ON SUNDAY");
            }
            else{
                printf("\n\tERROR!!!!!!");
            }
        }
        else if(bus==2){
            printf("\n\tAVAILABLE SITS FOR ENA - ");
            printf("\n1,2,3,4,5,6,7,8,9");
            scanf("%d",&sit_2ndbus);
                        if(sit_2ndbus==1||sit_2ndbus==2||sit_2ndbus==3||sit_2ndbus==4||sit_2ndbus==5||sit_2ndbus==6||sit_2ndbus==7||sit_2ndbus==8||sit_2ndbus==9){
                printf("\n\tYOU HAVE SELECTED THE SIT NO %d",sit_2ndbus);
                                printf("\n\tYOUR BUS WILL START AT 10PM ON SUNDAY");
            }
            else{
                printf("\n\tERROR!!!!!!");
            }
        }
        else{
            printf("\n\tPLEASE CHOOSE BETWEEN 1 OR 2");
        }

    }
    else if(choose==2){
        printf("\n\tYOU HAVE WANT TO GO TO KHULNA");
        printf("\n\tAVAILABLE BUSES FOR KHULNA - ");
        printf("\n1.ENA\n2.ROHAN");
        scanf("%d",&bus2);
        if(bus2==1){
            printf("\n\tAVAILABLE SITS FOR ENA -");
            printf(" 1,2,3,4,5,6,7,8,9");
            scanf("%d",&sit2);
                        if(sit2==1||sit2==2||sit2==3||sit2==4||sit2==5||sit2==6||sit2==7||sit2==8||sit2==9){
                printf("\n\tYOU HAVE SELECTED THE SIT NO %d",sit2);
                printf("\n\tYOUR BUS WILL START AT 10PM ON SUNDAY");
            }
            else{
                printf("\n\tERROR!!!!!!");
            }
        }
        else if(bus2==2){
            printf("\n\tAVAILABLE SITS FOR ROHAN - 1,2,3,4,5,6,7,8,9");
            scanf("%d",&sit3);
                                    if(sit3==1||sit3==2||sit3==3||sit3==4||sit3==5||sit3==6||sit3==7||sit3==8||sit3==9){
                printf("\n\tYOU HAVE SELECTED THE SIT NO %d",sit3);
                                printf("\n\tYOUR BUS WILL START AT 10PM ON SUNDAY");
            }
            else{
                printf("\n\tERROR!!!!!!");
            
        }
    }
    else{
        printf("\n\tPLEASE SELECT BETWEEN 1 OR 2");
    }

        }
        system("COLOR 0C");
        printf("\n\tTHANKS");
    getch();
    return 0;
    }
