#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

    int fruits(){
        printf("\n\tYour selected catagory is 'Fruits' ");
        printf("\n\tChoose your product - ");
        printf("\n\t1.Apple\t2.Mango\t3.strawberry\t4.Chocolates");
        int product;
        scanf("%d",&product);
        if(product==1){
            printf("\n\tYou Want to buy apple ? please select your amount of apple");
            printf("\n\t1kg price : 60tk");
            int amount;
            scanf("%d",&amount);
            if(amount<0||amount>10){
                printf("\n\tYou cant buy apple less than 1kg or more than 10kg at a time!!!");
            }
            else if(amount<=1&&amount<9){
                printf("\n\t%d kg apple(s) price is %d taka.",amount,amount*60);
            }
            else{
                printf("\n\tError!!!");
            }
            printf("\n\tplease pay %d taka to confirm ",amount*60);
            int payment;
            scanf("%d",&payment);
            if(payment==amount*60)
            printf("\n\tThanks for your service!!!");
            else if(payment<amount*60)
            printf("\n\t Please pay more %d taka !! ", amount*60-payment);
            else if(payment>amount*60)
            printf("\n\tHere is your extra %d taka ",payment-amount*60);
            else{
                printf("\n\tError!!!!!!");
            }
        }
////mango
        else if(product==2){
            printf("\n\tYou Want to buy Mango ? please select your amount of Mango");
                       printf("\n\t1kg price : 80tk");
            int amount2;
            scanf("%d",&amount2);
            if(amount2<0||amount2>10){
                printf("\n\tYou cant buy Mango less than 1kg or more than 10kg at a time!!!");
            }
            else if(amount2<=1&&amount2<9){
                printf("\n\t%d kg Mango(s) price is %d taka.",amount2,amount2*80);
            }
            else{
                printf("\n\tError!!!");
            }
            printf("\n\tplease pay %d taka to confirm ",amount2*80);
            int payment2;
            scanf("%d",&payment2);
            if(payment2==amount2*80)
            printf("\n\tThanks for your service!!!");
            else if(payment2<amount2*80)
            printf("\n\t Please pay more %d taka !! ", amount2*80-payment2);
            else if(payment2>amount2*80)
            printf("\n\tHere is your extra %d taka ",payment2-amount2*80);
            else{
                printf("\n\tError!!!!!!");
            }

        }

        ///strawberry

        else if(product==3){

                        printf("\n\tYou Want to buy apple ? please select your amount of Strawberry");
                       printf("\n\t1kg price : 120tk");
            int amount3;
            scanf("%d",&amount3);
            if(amount3<0||amount3>10){
                printf("\n\tYou cant buy strawberry less than 1kg or more than 10kg at a time!!!");
            }
            else if(amount3<=1&&amount3<9){
                printf("\n\t%d kg strawberry(s) price is %d taka.",amount3,amount3*80);
            }
            else{
                printf("\n\tError!!!");
            }
            printf("\n\tplease pay %d taka to confirm ",amount3*120);
            int payment3;
            scanf("%d",&payment3);
            if(payment3==amount3*120)
            printf("\n\tThanks for your service!!!");
            else if(payment3<amount3*120)
            printf("\n\t Please pay more %d taka !! ", amount3*120-payment3);
            else if(payment3>amount3*120)
            printf("\n\tHere is your extra %d taka ",payment3-amount3*120);
            else{
                printf("\n\tError!!!!!!");
            }
        }

        //chocolate

        else if(product==4){
            printf("\n\tPlease select your chocolates : ");
            printf("\n\t1.Dairy Milk\t2.Sneakers\t3.Kitkat");
            int choose;
            if(choose==1){
                printf("\n\t Enter the amount of piece(s) you want to buy : ");
                    int amount4;
                    scanf("%d",&amount4);
                    printf("\n\tThe price for %d Dairy Milk(s) is %d taka. ",amount4,amount4*150);
                    printf("\n\tPlease the amount of %d taka to confirm. ",amount4*150);
                    int payment4;
                    scanf("%d",payment4);
                    if(payment4==amount4*150)
            printf("\n\tThanks for your service!!!");
            else if(payment4<amount4*150)
            printf("\n\t Please pay more %d taka !! ", amount4*150-payment4);
            else if(payment4>amount4*150)
            printf("\n\tHere is your extra %d taka ",payment4-amount4*150);
            else{
                printf("\n\tError!!!!!!");
            }
            }
        }
return 0;

    }

        int meat(){
            printf("\n\tYou Want to buy Meat ? please select your amount.");
            printf("\n\t1kg price : 250tk");
            int amount;
            scanf("%d",&amount);
            if(amount<0||amount>10){
                printf("\n\tYou cant buy meat less than 1kg or more than 10kg at a time!!!");
            }
            else if(amount<=1&&amount<9){
                printf("\n\t%d kg meat(s) price is %d taka.",amount,amount*250);
            }
            else{
                printf("\n\tError!!!");
            }
            printf("\n\tplease pay %d taka to confirm ",amount*250);
            int payment;
            scanf("%d",&payment);
            if(payment==amount*250)
            printf("\n\tThanks for your service!!!");
            else if(payment<amount*250)
            printf("\n\t Please pay more %d taka !! ", amount*250-payment);
            else if(payment>amount*250)
            printf("\n\tHere is your extra %d taka ",payment-amount*250);
            else{
                printf("\n\tError!!!!!!");
            }
            return 0;
        }

            int fish(){

                printf("\n\tYou Want to buy fish ? please select your amount.");
            printf("\n\t1kg price : 200tk");
            int amount;
            scanf("%d",&amount);
            if(amount<0||amount>10){
                printf("\n\tYou cant buy fish less than 1kg or more than 10kg at a time!!!");
            }
            else if(amount<=1&&amount<9){
                printf("\n\t%d kg fish(es) price is %d taka.",amount,amount*200);
            }
            else{
                printf("\n\tError!!!");
            }
            printf("\n\tplease pay %d taka to confirm ",amount*200);
            int payment;
            scanf("%d",&payment);
            if(payment==amount*200)
            printf("\n\tThanks for your service!!!");
            else if(payment<amount*200)
            printf("\n\t Please pay more %d taka !! ", amount*200-payment);
            else if(payment>amount*200)
            printf("\n\tHere is your extra %d taka ",payment-amount*200);
            else{
                printf("\n\tError!!!!!!");
            }
            return 0;
            }


                int electronics(){

                        printf("\n\tPlease select your catagory : ");
                        printf("\n\t1.Mobile\t2.PC");
                        int category;
                        scanf("%d",&category);
                        if(category==1){
                            //mobile();
printf("\n\tPlease select your phone Model.");
                    printf("\n\t1.Redmi\t2.Samsung\t3.Realme");
                    int model;
                    scanf("%d",&model);
                    printf("\n\tPlease Select : ");
                    if(model==1){
                        printf("\n\tAvailable Products - ");
                        printf("\n\t1.Redmi K20 Pro ");
                        printf("\n\tRam 8GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -2160p with 860 Snap Dragon ");
                        printf("\n\tPrice - 29,990Tk");
                        printf("\n");

                        printf("\n\t2.Redmi note 10  ");
                        printf("\n\tRam 8GB / Rom 126GB ");
                        printf("\n\tCamera 108MP Resolution -2160p with 830 Snap Dragon ");
                        printf("\n\tPrice - 27,990Tk");
                        printf("\n");

                        printf("\n\t3.Redmi Note 11 Lite ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -2160p with 880 Snap Dragon ");
                        printf("\n\tPrice - 31,990Tk");
                        printf("\n");

                        printf("\n\t4.Redmi Note 8  ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 670 Snap Dragon ");
                        printf("\n\tPrice - 18,990Tk");
                        printf("\n");

                        printf("\n\t5.Redmi poco x3 ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 730 Snap Dragon ");
                        printf("\n\tPrice - 29,000Tk");
                        printf("\n");

                        printf("\n\t6.Redmi Note 11s ");
                        printf("\n\tRam 8GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 730 Snap Dragon ");
                        printf("\n\tPrice - 26,999Tk");
                        printf("\n");

                        printf("\n\t7.Redmi 9 Power ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 650 Snap Dragon ");
                        printf("\n\tPrice - 13,990Tk");
                        printf("\n");

                        printf("\n\t8.Redmi poco c3 ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 48MP Resolution -1080p with 880 Snap Dragon ");
                        printf("\n\tPrice - 12,000Tk");
                        printf("\n");

                        printf("\n\t9.Redmi Note 9 ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 680 Snap Dragon ");
                        printf("\n\tPrice - 27,999Tk");
                        printf("\n");

                        printf("\n\t10.Redmi 11 power ");
                        printf("\n\tRam 6GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -2160p with 780 Snap Dragon ");
                        printf("\n\tPrice - 30,990Tk");
                        printf("\n");
                        
                        int select;
                        long long int price1,price2,price3,price4,price5,price6,price7,price8,price9,price10;
                        scanf("%d",&select);
                        if(select==1){
                            printf("\n\tPlease pay tk 29,990 to confirm ");
                            scanf("%lld",&price1);
                            if(price1<29990)
                            printf("\n\tPlease pay more %d taka ",29990-price1);
                            else if(price1>29990)
                            printf("\n\tReceive your extra %d taka ",price1-29990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                        }
                            else if(select==2){
                                printf("\n\tPlease pay tk 27,990 to confirm ");
                            scanf("%lld",&price2);
                            if(price2<27990)
                            printf("\n\tPlease pay more %d taka ",27990-price2);
                            else if(price2>27990)
                            printf("\n\tReceive your extra %d taka ",price2-27990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==3){
                                printf("\n\tPlease pay tk 31,990 to confirm ");
                            scanf("%lld",&price3);
                            if(price3<31990)
                            printf("\n\tPlease pay more %d taka ",31990-price3);
                            else if(price3>31990)
                            printf("\n\tReceive your extra %d taka ",price3-31990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==4){
                                printf("\n\tPlease pay tk 18,990 to confirm ");
                            scanf("%lld",&price4);
                            if(price4<18990)
                            printf("\n\tPlease pay more %d taka ",18990-price4);
                            else if(price4>18990)
                            printf("\n\tReceive your extra %d taka ",price4-18990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==5){
                                printf("\n\tPlease pay tk 29,000 to confirm ");
                            scanf("%lld",&price5);
                            if(price5<29000)
                            printf("\n\tPlease pay more %d taka ",29000-price5);
                            else if(price5>29000)
                            printf("\n\tReceive your extra %d taka ",price5-29000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==6){
                                printf("\n\tPlease pay tk 26,999 to confirm ");
                            scanf("%lld",&price6);
                            if(price6<26999)
                            printf("\n\tPlease pay more %d taka ",26999-price6);
                            else if(price6>26999)
                            printf("\n\tReceive your extra %d taka ",price6-29990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==7){
                                printf("\n\tPlease pay tk 13,990 to confirm ");
                            scanf("%lld",&price7);
                            if(price7<13990)
                            printf("\n\tPlease pay more %d taka ",13990-price7);
                            else if(price7>13990)
                            printf("\n\tReceive your extra %d taka ",price7-13990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==8){
                                printf("\n\tPlease pay tk 12,000 to confirm ");
                            scanf("%lld",&price8);
                            if(price8<12000)
                            printf("\n\tPlease pay more %d taka ",12000-price8);
                            else if(price8>12000)
                            printf("\n\tReceive your extra %d taka ",price8-12000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==9){
                                printf("\n\tPlease pay tk 27,999 to confirm ");
                            scanf("%lld",&price9);
                            if(price9<27999)
                            printf("\n\tPlease pay more %d taka ",27999-price9);
                            else if(price9>27999)
                            printf("\n\tReceive your extra %d taka ",price9-27999);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select==10){
                                printf("\n\tPlease pay tk 30,990 to confirm ");
                            scanf("%lld",&price10);
                            if(price10<30990)
                            printf("\n\tPlease pay more %d taka ",30990-price10);
                            else if(price10>29990)
                            printf("\n\tReceive your extra %d taka ",price10-30990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            //main else of select
                            else{
                                printf("\n\tSomething went wrong!!");
                            }
                    }
                    //samsung
                    else if (model==2){
 printf("\n\tAvailable Products - ");
                        printf("\n\t1.Samsung S20 Pro ");
                        printf("\n\tRam 8GB / Rom 128GB ");
                        printf("\n\tCamera 72MP Resolution -2160p with 880 Snap Dragon ");
                        printf("\n\tPrice - 44,990Tk");
                        printf("\n");

                        printf("\n\t2.Samsung note 10  ");
                        printf("\n\tRam 8GB / Rom 126GB ");
                        printf("\n\tCamera 108MP Resolution -2160p with 730 Snap Dragon ");
                        printf("\n\tPrice - 46,990Tk");
                        printf("\n");

                        printf("\n\t3.Samsung Ultra 10s plus ");
                        printf("\n\tRam 12GB / Rom 256GB ");
                        printf("\n\tCamera 108MP Resolution -2160p with 2.6ghz processor ");
                        printf("\n\tPrice - 111,000Tk");
                        printf("\n");

                        printf("\n\t4.Samsung 5G Ultra   ");
                        printf("\n\tRam 12GB / Rom 256GB ");
                        printf("\n\tCamera 86MP Resolution -1080p with 880 Snap Dragon ");
                        printf("\n\tPrice - 118,990Tk");
                        printf("\n");

                        printf("\n\t5.Samsung M3 ");
                        printf("\n\tRam 3GB / Rom 32GB ");
                        printf("\n\tCamera 48MP Resolution -1080p with 670 Snap Dragon ");
                        printf("\n\tPrice - 19,000Tk");
                        printf("\n");

                        printf("\n\t6.Samsung Note 30s ");
                        printf("\n\tRam 8GB / Rom 128GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 830 Snap Dragon ");
                        printf("\n\tPrice - 26,999Tk");
                        printf("\n");

                        printf("\n\t7.Samsung M31s ");
                        printf("\n\tRam 6GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 880 Snap Dragon ");
                        printf("\n\tPrice - 21,990Tk");
                        printf("\n");

                        printf("\n\t8.Samsung Galaxy s30 ");
                        printf("\n\tRam 6GB / Rom 128GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 720 Snap Dragon ");
                        printf("\n\tPrice - 28,000Tk");
                        printf("\n");

                        printf("\n\t9.Samsung Galaxy M9 ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 720 Snap Dragon ");
                        printf("\n\tPrice - 27,999Tk");
                        printf("\n");

                        printf("\n\t10.Samsung  11 power ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 48MP Resolution -1080p with 830 Snap Dragon ");
                        printf("\n\tPrice - 24,990Tk");
                        printf("\n");

                        int select2;
                        long long int price21,price22,price23,price24,price25,price26,price27,price28,price29,price210;
                        scanf("%d",&select2);
                        if(select2==1){
                            printf("\n\tPlease pay tk 44,990 to confirm ");
                            scanf("%lld",&price21);
                            if(price21<44990)
                            printf("\n\tPlease pay more %d taka ",44990-price21);
                            else if(price21>44990)
                            printf("\n\tReceive your extra %d taka ",price21-44990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                        }
                            else if(select2==2){
                                printf("\n\tPlease pay tk 46,990 to confirm ");
                            scanf("%lld",&price22);
                            if(price22<46990)
                            printf("\n\tPlease pay more %d taka ",46990-price22);
                            else if(price22>46990)
                            printf("\n\tReceive your extra %d taka ",price22-46990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==3){
                                printf("\n\tPlease pay tk 111,000 to confirm ");
                            scanf("%lld",&price23);
                            if(price23<111000)
                            printf("\n\tPlease pay more %d taka ",1110000-price23);
                            else if(price23>111000)
                            printf("\n\tReceive your extra %d taka ",price23-111000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==4){
                                printf("\n\tPlease pay tk 118,990 to confirm ");
                            scanf("%lld",&price24);
                            if(price24<118990)
                            printf("\n\tPlease pay more %d taka ",118990-price24);
                            else if(price24>118990)
                            printf("\n\tReceive your extra %d taka ",price24-118990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==5){
                                printf("\n\tPlease pay tk 19,000 to confirm ");
                            scanf("%lld",&price25);
                            if(price25<19000)
                            printf("\n\tPlease pay more %d taka ",19000-price25);
                            else if(price25>19000)
                            printf("\n\tReceive your extra %d taka ",price25-19000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==6){
                                printf("\n\tPlease pay tk 26,999 to confirm ");
                            scanf("%lld",&price26);
                            if(price26<26999)
                            printf("\n\tPlease pay more %d taka ",26999-price26);
                            else if(price26>26999)
                            printf("\n\tReceive your extra %d taka ",price26-29990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==7){
                                printf("\n\tPlease pay tk 21,990 to confirm ");
                            scanf("%lld",&price27);
                            if(price27<21990)
                            printf("\n\tPlease pay more %d taka ",21990-price27);
                            else if(price27>21990)
                            printf("\n\tReceive your extra %d taka ",price27-21990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==8){
                                printf("\n\tPlease pay tk 28,000 to confirm ");
                            scanf("%lld",&price28);
                            if(price28<28000)
                            printf("\n\tPlease pay more %d taka ",28000-price28);
                            else if(price28>28000)
                            printf("\n\tReceive your extra %d taka ",price28-28000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==9){
                                printf("\n\tPlease pay tk 27,999 to confirm ");
                            scanf("%lld",&price29);
                            if(price29<27999)
                            printf("\n\tPlease pay more %d taka ",27999-price29);
                            else if(price29>27999)
                            printf("\n\tReceive your extra %d taka ",price29-27999);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select2==10){
                                printf("\n\tPlease pay tk 24,990 to confirm ");
                            scanf("%lld",&price210);
                            if(price210<24990)
                            printf("\n\tPlease pay more %d taka ",24990-price210);
                            else if(price210>24990)
                            printf("\n\tReceive your extra %d taka ",price210-24990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            //main else of select2
                            else{
                                printf("\n\tSomething went wrong!!");
                            }

                    }
                    //realme
                    else if(model==3){
printf("\n\tAvailable Products - ");
                        printf("\n\t1.Realme S20 ");
                        printf("\n\tRam 6GB / Rom 128GB ");
                        printf("\n\tCamera 72MP Resolution -2160p with 880 Snap Dragon ");
                        printf("\n\tPrice - 24,990Tk");
                        printf("\n");

                        printf("\n\t2.Realme  10i  ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 108MP Resolution -1080p with 730 Snap Dragon ");
                        printf("\n\tPrice - 36,990Tk");
                        printf("\n");

                        printf("\n\t3.Realme 10s  ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 2.6ghz processor ");
                        printf("\n\tPrice - 21,000Tk");
                        printf("\n");

                        printf("\n\t4.Realme 5i   ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 680 Snap Dragon ");
                        printf("\n\tPrice - 18,990Tk");
                        printf("\n");

                        printf("\n\t5.Realme Note 6 ");
                        printf("\n\tRam 3GB / Rom 32GB ");
                        printf("\n\tCamera 48MP Resolution -1080p with 1.6hz cpu ");
                        printf("\n\tPrice - 17,000Tk");
                        printf("\n");

                        printf("\n\t6.Realme Narzo 10 ");
                        printf("\n\tRam 6GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 670 Snap Dragon ");
                        printf("\n\tPrice - 18,999Tk");
                        printf("\n");

                        printf("\n\t7.Realme Shadow 5  ");
                        printf("\n\tRam 6GB / Rom 64GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 670 Snap Dragon ");
                        printf("\n\tPrice - 21,990Tk");
                        printf("\n");

                        printf("\n\t8.Realme 7 pro ");
                        printf("\n\tRam 6GB / Rom 128GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 720 Snap Dragon ");
                        printf("\n\tPrice - 28,000Tk");
                        printf("\n");

                        printf("\n\t9.Realme 9x  ");
                        printf("\n\tRam 6GB / Rom 126GB ");
                        printf("\n\tCamera 64MP Resolution -1080p with 720 Snap Dragon ");
                        printf("\n\tPrice - 27,999Tk");
                        printf("\n");

                        printf("\n\t10.Realme 11 Lite ");
                        printf("\n\tRam 4GB / Rom 64GB ");
                        printf("\n\tCamera 48MP Resolution -1080p with 830 Snap Dragon ");
                        printf("\n\tPrice - 24,990Tk");
                        printf("\n");

                        int select3;
                        long long int price31,price32,price33,price34,price35,price36,price37,price38,price39,price310;
                        scanf("%d",&select3);
                        if(select3==1){
                            printf("\n\tPlease pay tk 24,990 to confirm ");
                            scanf("%lld",&price31);
                            if(price31<24990)
                            printf("\n\tPlease pay more %d taka ",24990-price31);
                            else if(price31>24990)
                            printf("\n\tReceive your extra %d taka ",price31-24990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                        }
                            else if(select3==2){
                                printf("\n\tPlease pay tk 36,990 to confirm ");
                            scanf("%lld",&price32);
                            if(price32<36990)
                            printf("\n\tPlease pay more %d taka ",36990-price32);
                            else if(price32>46990)
                            printf("\n\tReceive your extra %d taka ",price32-36990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==3){
                                printf("\n\tPlease pay tk 21,000 to confirm ");
                            scanf("%lld",&price33);
                            if(price33<21000)
                            printf("\n\tPlease pay more %d taka ",21000-price33);
                            else if(price33>21000)
                            printf("\n\tReceive your extra %d taka ",price33-21000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==4){
                                printf("\n\tPlease pay tk 18,990 to confirm ");
                            scanf("%lld",&price34);
                            if(price34<18990)
                            printf("\n\tPlease pay more %d taka ",18990-price34);
                            else if(price34>118990)
                            printf("\n\tReceive your extra %d taka ",price34-18990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==5){
                                printf("\n\tPlease pay tk 17,000 to confirm ");
                            scanf("%lld",&price35);
                            if(price35<17000)
                            printf("\n\tPlease pay more %d taka ",17000-price35);
                            else if(price35>17000)
                            printf("\n\tReceive your extra %d taka ",price35-17000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==6){
                                printf("\n\tPlease pay tk 18,990 to confirm ");
                            scanf("%lld",&price36);
                            if(price36<18990)
                            printf("\n\tPlease pay more %d taka ",18990-price36);
                            else if(price36>18990)
                            printf("\n\tReceive your extra %d taka ",price36-18990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==7){
                                printf("\n\tPlease pay tk 21,990 to confirm ");
                            scanf("%lld",&price37);
                            if(price37<21990)
                            printf("\n\tPlease pay more %d taka ",21990-price37);
                            else if(price37>21990)
                            printf("\n\tReceive your extra %d taka ",price37-21990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==8){
                                printf("\n\tPlease pay tk 28,000 to confirm ");
                            scanf("%lld",&price38);
                            if(price38<28000)
                            printf("\n\tPlease pay more %d taka ",28000-price38);
                            else if(price38>28000)
                            printf("\n\tReceive your extra %d taka ",price38-28000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==9){
                                printf("\n\tPlease pay tk 27,999 to confirm ");
                            scanf("%lld",&price39);
                            if(price39<27999)
                            printf("\n\tPlease pay more %d taka ",27999-price39);
                            else if(price39>27999)
                            printf("\n\tReceive your extra %d taka ",price39-27999);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select3==10){
                                printf("\n\tPlease pay tk 24,990 to confirm ");
                            scanf("%lld",&price310);
                            if(price310<24990)
                            printf("\n\tPlease pay more %d taka ",24990-price310);
                            else if(price310>24990)
                            printf("\n\tReceive your extra %d taka ",price310-24990);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            //main else of select3
                            else{
                                printf("\n\tSomething went wrong!!");
                            }
                    }

                        }
                        else if(category==2){
                            //pc();
                             printf("\n\tAvailable Models of PC ");
                        printf("\n\t1.HP 15s du1025tx ");
                        printf("\n\tRam 8GB 556GB HDD");
                        printf("\n\t1.69ghz cpu");
                        printf("\n\tPrice - 69000");
                        printf("\n");
                        printf("\n\t2.HP 15s du1025sx ");
                        printf("\n\tRam 4GB 556GB HDD");
                        printf("\n\tIntel core i5 with 10th generation ");
                        printf("\n\t1.3ghz cpu");
                        printf("\n\tPrice - 59000");
                        printf("\n");
                        printf("\n\t3.Dell 29M30tx ");
                        printf("\n\tRam 8GB 1TB HDD");
                        printf("\n\tIntel core i5 with 10th generation ");
                        printf("\n\t2.6ghz cpu");
                        printf("\n\tPrice - 64000");
                        printf("\n");
                        printf("\n\t4.HP Probook se1267 ");
                        printf("\n\tRam 4GB 256GB HDD");
                        printf("\n\tIntel core i7 with 11th generation ");
                        printf("\n\t2.69ghz cpu");
                        printf("\n\tPrice - 79000");
                        printf("\n");
                        printf("\n\t5.Asus Notebook S30 ");
                        printf("\n\tRam 8GB 556GB HDD");
                        printf("\n\tRyzen 7 with 11th generation ");
                        printf("\n\t2.30ghz cpu");
                        printf("\n\tPrice - 88000");
                        printf("\n");
                         //printf("\n\tAvailable Models of PC ");
                        printf("\n\t6.Samsung 15M Notebook 47s ");
                        printf("\n\tRam 12GB 1TB SDD");
                        printf("\n\t2.69ghz cpu");
                        printf("\n\tPrice - 132000");
                        printf("\n");
                        printf("\n\t7.HP Probook he4258ss ");
                        printf("\n\tRam 4GB 556GB HDD");
                        printf("\n\t1.6ghz cpu");
                        printf("\n\tPrice - 59000");
                        printf("\n");
                        printf("\n\t8.HP 49s 5352dhs ");
                        printf("\n\tRam 4GB 256GB HDD");
                        printf("\n\t1.62ghz cpu");
                        printf("\n\tPrice - 56000");
                        printf("\n");
                        printf("\n\t9.Dell Model 45s ");
                        printf("\n\tRam 8GB 556GB SDD");
                        printf("\n\t2.3ghz cpu");
                        printf("\n\tPrice - 89000");
                        printf("\n");
                         //printf("\n\tAvailable Models of PC ");
                        printf("\n\t10.Lenevo x30s 11qw ");
                        printf("\n\tRam 4GB 256GB HDD");
                        printf("\n\t1.3ghz cpu");
                        printf("\n\tPrice - 52000");
                        printf("\n");
                        int select4;
                        long long int price41,price42,price43,price44,price45,price46,price47,price48,price49,price410;
                        scanf("%d",&select4);
                        if(select4==1){
                            printf("\n\tPlease pay tk 69,000 to confirm ");
                            scanf("%lld",&price41);
                            if(price41<69000)
                            printf("\n\tPlease pay more %d taka ",69000-price41);
                            else if(price41>69000)
                            printf("\n\tReceive your extra %d taka ",price41-69000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                        }
                            else if(select4==2){
                                printf("\n\tPlease pay tk 59,000 to confirm ");
                            scanf("%lld",&price42);
                            if(price42<59000)
                            printf("\n\tPlease pay more %d taka ",59000-price42);
                            else if(price42>59000)
                            printf("\n\tReceive your extra %d taka ",price42-59000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==3){
                                printf("\n\tPlease pay tk 64,000 to confirm ");
                            scanf("%lld",&price43);
                            if(price43<64000)
                            printf("\n\tPlease pay more %d taka ",64000-price43);
                            else if(price43>64000)
                            printf("\n\tReceive your extra %d taka ",price43-64000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==4){
                                printf("\n\tPlease pay tk 79,000 to confirm ");
                            scanf("%lld",&price44);
                            if(price44<79000)
                            printf("\n\tPlease pay more %d taka ",79000-price44);
                            else if(price44>79000)
                            printf("\n\tReceive your extra %d taka ",price44-79000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==5){
                                printf("\n\tPlease pay tk 88,000 to confirm ");
                            scanf("%lld",&price45);
                            if(price45<88000)
                            printf("\n\tPlease pay more %d taka ",88000-price45);
                            else if(price45>17000)
                            printf("\n\tReceive your extra %d taka ",price45-88000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==6){
                                printf("\n\tPlease pay tk 132,000 to confirm ");
                            scanf("%lld",&price46);
                            if(price46<132000)
                            printf("\n\tPlease pay more %d taka ",132000-price46);
                            else if(price46>132000)
                            printf("\n\tReceive your extra %d taka ",price46-132000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==7){
                                printf("\n\tPlease pay tk 59,000 to confirm ");
                            scanf("%lld",&price47);
                            if(price47<59000)
                            printf("\n\tPlease pay more %d taka ",59000-price47);
                            else if(price47>59000)
                            printf("\n\tReceive your extra %d taka ",price47-59000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==8){
                                printf("\n\tPlease pay tk 56,000 to confirm ");
                            scanf("%lld",&price48);
                            if(price48<56000)
                            printf("\n\tPlease pay more %d taka ",56000-price48);
                            else if(price48>56000)
                            printf("\n\tReceive your extra %d taka ",price48-56000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==9){
                                printf("\n\tPlease pay tk 89,000 to confirm ");
                            scanf("%lld",&price49);
                            if(price49<89000)
                            printf("\n\tPlease pay more %d taka ",89000-price49);
                            else if(price49>89000)
                            printf("\n\tReceive your extra %d taka ",price49-89000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            else if(select4==10){
                                printf("\n\tPlease pay tk 52,000 to confirm ");
                            scanf("%lld",&price410);
                            if(price410<52000)
                            printf("\n\tPlease pay more %d taka ",52000-price410);
                            else if(price410>52000)
                            printf("\n\tReceive your extra %d taka ",price410-52000);
                            else{
                                printf("\n\tSomething went wrong");
                            }
                            }
                            //main else of select4
                            else{
                                printf("\n\tSomething went wrong!!");
                            }
                            
                        }
                        else{
                            printf("\n\tError!!!");
                        }
                        return 0;
                }
                    



int main(void){
      time_t currenttime;
    time(&currenttime);
    printf("\n\n ");
    printf(" %s ",ctime(&currenttime));
    printf("\n\tEnter your name to continue : ");
    char name[10];
    gets(name);
    printf("\n\tWelcome %s ",name);
    printf("\n\tWelcome to our super shop !");
    printf("\n\tWhat kind of product do you want ? ");
    printf("\n\t1.Fruits\t2.Electronics\t3.Meat\t.Fish");
    int product;
        scanf("%d",&product);
        if(product==1){
            fruits();
        }
        else if(product==2){
            electronics();
        }
        else if(product==3){
            meat();
        }
        else if(product==4){
            fish();
        }
        else{
            printf("\n\tTry to enter a valid number ");
            abort();
        }
    getch();
    return 0; 

    }