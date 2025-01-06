#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int ctgtodhaka(void){
printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express\n");
int train;
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else{
    printf("\n\tERORR!!!!!!!!!!!!!!!!");
}
return 0;
}


int dhakatoctg(){
    printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express");
int train;
scanf("%d",&train);
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else{
    printf("\n\tERORR!!!!!!!!!!!");
}
return 0;
}

int khultoctg(){

printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express");
int train;
scanf("%d",&train);
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else{
    printf("\n\tERROR!!!!!!!!!!!!!!!!");
}
return 0;

}
int khultodhaka(){
printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express");
int train;
scanf("%d",&train);
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else {
    printf("\n\tERROR!!!!!!!!!!!!!!");
}
return 0;
}

int dhakatokhul(){

printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express");
int train;
scanf("%d",&train);
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else {
    printf("\n\tERROR!!!!!!!!!!!!!!");
}
return 0;
}
int ctgtokhul()
 {

printf("\n\tSelect your train - ");
printf("\n\t1.Mohanagar Express\t2.Suborno Express\t3.Mohanogor Gudhuli\t4.Turna Express");
int train;
scanf("%d",&train);
int sits;
int demand;
int array[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int i;
int taka;
int loop;
scanf("\n%d",&train);
if(train==1){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
    while(demand!=0){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay %d taka confirm your ticket .",demand,500*demand);
            scanf("%d",&taka);
            if(taka==500*demand)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<demand*500)
            printf("\n\tPlease pay more %d taka ",demand*500-taka);
            else if(taka>demand*500)
            printf("\n\tReceive your extra %d taka ",taka-demand*500);
            else
            printf("\n\tError");
        }
        demand--;
    }
}
else if(train==2){
    printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==3){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }
}
else if(train==4){
        printf("\n\tAvailable Sits - ");
    printf("\n\n\t\n\t1.Available\t2.Available\t3.Availbale\t4.Available\n\t5.Available\t6.Available\t7.Available\t8.Available\n\t9.Available\t10.Available\t11.Available\t12.Available\n\t13.Available\t14.Available\t15.Availble\t16.Available\n\t17.Available\t18.Available\t19.Available\t20.Available\n\t21.Available\t22.Available\t23.Available\t24.Available\n\t25.Available\t26.Available\t27.Available\t28.Available\n\t29.Available\t30.Available\t31.Available\n");
    printf("\n\tHow many sits do you want - ");
    scanf("\n%d",&demand);
       for(loop=1;loop<=demand;loop++){
        printf("\n\tEnter the sit number you want - \t");
        scanf("%d",&sits);
        if(sits<0||sits>30){
        printf("\n\tError!!!! ");
        printf("\n\tTry Again ");
        }
        else if(sits>0&&sits<=31){
            for(i=sits-1;i<31;i++){
                array[i] = array[i+1];
            }
            printf("\n\tYour sit has been booked ");
            for(i=0;i<31-1;i++){
            printf("%d \n ",array[i]);
            }
            
            printf("\n\tPrice for 1 sit costs - 500TK. You have selected %d sits & pay 500 taka confirm your ticket .",demand);
            scanf("%d",&taka);
            if(taka==500)
            printf("\n\tYour ticket has been confirmed");
            else if(taka<500)
            printf("\n\tPlease pay more %d taka ",500-taka);
            else if(taka>500)
            printf("\n\tReceive your extra %d taka ",taka-500);
            else
            printf("\n\tError");
            
        }
    }

}
else {
    printf("\n\tERROR!!!!!!!!!!!!!!");
}
return 0;

}


int main(){
    start:
    printf("\n\tEnter your name to start ");
    char name[10];
    gets(name);
    printf("\n\tWelcome %s \n",name);
    long int pincode;
    printf("\n\tEnter the pincode to continue - ");
    scanf("%d",&pincode);
    int location;
    if(pincode==950211){
printf("\n\tSelect your current journey location : ");
printf("\n\t1.Chittagong to Dhaka \t2.Dhaka to Chittagong \t3.Khulna to Chittagong \t4.Khulna to Dhaka \t5.Dhaka to Khulna\t6.Chittagong to Khulna");
scanf("%d",&location);
if(location==1)
ctgtodhaka();
else if(location==2)
dhakatoctg();
else if(location==3)
khultoctg();
else if(location==4)
khultodhaka();
else if(location==5)
dhakatokhul();
else if(location==6)
ctgtokhul();
else {
    printf("\n\tError!!!!");
    abort();
    
}
    }
else{
    printf("\n\tWrong pin try again ");
    goto start;
}
    return 0;
}