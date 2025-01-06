#include<stdio.h>
#include<conio.h>
void class6(){
    printf("\n\tENTER YOUR ROLL NO. ");
    int roll;
    scanf("%d",&roll);
    if(roll>0&&roll<100){
        secA();
    }
    else if(roll>100&&roll<200){
        secB();
    }
    else if(roll>200&&roll<300){
        secC();
    }
    else if(roll>300&&roll<400){
        secD();
    }
    else if(roll>400&&roll<500){
        secE();
    }
    else{
        printf("\n\tERROR!!!");
    }
}
                void secA(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.MATH(10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.BANGLA (9.30 -  10.30)\n3.SCIENCE(10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.ENGLISH (12.30 - 1.30)");
                }  
                void secB(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.SCIENCE (9.30 - 10.30)\n3.MATH(10.30 - 11.30)\n4.ENGLISH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.MATH (9.30 -  10.30)\n3.SCIENCE(10.30 - 11.30)\n4.BANGLA (11.30 - 12.30)\n5.ENGLISH (12.30 - 1.30)");
                } 
void secC(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.SOCIAL SCIENCE (8.30 - 9.30)\n2.MATH (9.30 - 10.30)\n3.BANGLA(10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n5.ENGLISH (12.30 - 1.30)");
printf("\nCLASS ROUTINE OF TUES,WED,THURS DAYS :");
printf("\n1.ENGLISH (8.30 - 9.30)\n2.BANGLA (9.30 -  10.30)\n3.SCIENCE(10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.RELIGION (12.30 - 1.30)");
} 
void secD(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.MATH(10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.BANGLA (9.30 -  10.30)\n3.SCIENCE(10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.ENGLISH (12.30 - 1.30)"); 
} 
void secE(){
    printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.MATH (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.BANGLA (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.BANGLA (9.30 -  10.30)\n3.SCIENCE(10.30 - 11.30)\n4.ENGLISH (11.30 - 12.30)\n5.MATH (12.30 - 1.30)");
}    
void class7(){
    printf("\n\tENTER YOUR ROLL NO. ");
    int roll7;
    scanf("%d",&roll7);
    if(roll7>0&&roll7<100){
        secA7();
    }
    else if(roll7>100&&roll7<200){
        secB7();
    }
    else if(roll7>200&&roll7<300){
        secC7();
    }
    else if(roll7>300&&roll7<400){
        secD7();
    }
    else if(roll7>400&&roll7<500){
        secE7();
    }
    else{
        printf("\n\tERROR!!!");
    }
}
void secA7(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secB7(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.RELIGION (8.30 - 9.30)\n2.MATH (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.ENGLISH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.SOCIAL SCIENCE (8.30 - 9.30)\n2.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secC7(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.SCIENCE (9.30 -  10.30)\n3.MATH (10.30 - 11.30)\n4.ENGLISH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secD7(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.RELIGION (8.30 - 9.30)\n2.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secE7(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.MATH (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.ENGLISH (11.30 -  12.30)\n5.SOCIAL SCIENCE(12.30 - 1.30)");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.MATH (8.30 - 9.30)\n2.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.RELIGION (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void class8(){
    printf("\n\tENTER YOUR ROLL NO. ");
    int roll8;
    scanf("%d",&roll8);
    if(roll8>0&&roll8<100){
        secA8();
    }
    else if(roll8>100&&roll8<200){
        secB8();
    }
    else if(roll8>200&&roll8<300){
        secC8();
    }
    else if(roll8>300&&roll8<400){
        secD8();
    }
    else if(roll8>400&&roll8<500){
        secE8();
    }
    else{
        printf("\n\tERROR!!!");
    }
}
void secA8(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n2.SCIENCE (10.30 - 11.30)\n3.MATH (11.30 - 12.30)\n4.BANGLA (12.30 - 1.30)");
}
void secB8(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.MATH (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.ENGLISH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n2.SCIENCE (10.30 - 11.30)\n3.BANGLA (11.30 - 12.30)\n4.MATH (12.30 - 1.30)");
}
void secC8(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n2.SCIENCE (10.30 - 11.30)\n3.MATH (11.30 - 12.30)\n4.BANGLA (12.30 - 1.30)");
}
void secD8(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.BANGLA (9.30 -  10.30)\n2.SCIENCE (10.30 - 11.30)\n3.MATH (11.30 - 12.30)\n4.ENGLISH (12.30 - 1.30)");
}
void secE8(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void class9(){
    printf("\n\tENTER YOUR ROLL NO. ");
    int roll9;
    scanf("%d",&roll9);
    if(roll9>0&&roll9<100){
        secA9();
    }
    else if(roll9>100&&roll9<200){
        secB9();
    }
    else if(roll9>200&&roll9<300){
        secC9();
    }
    else if(roll9>300&&roll9<400){
        secD9();
    }
    else if(roll9>400&&roll9<500){
        secE9();
    }
    else{
        printf("\n\tERROR!!!");
    }
}
void secA9(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secB9(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.ENGLISH (8.30 - 9.30)\n2.BANGLA (9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secC9(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secD9(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.BANGLA (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.ENGLISH (12.30 - 1.30)");
}
void secE9(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH(9.30 - 10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void class10(){
    printf("\nENTER YOUR ROLL NO. ");
    int roll10;
    scanf("%d",&roll10);
    if(roll10>0&&roll10<100){
        secA10();
    }
    else if(roll10>100&&roll10<200){
        secB10();
    }
    else if(roll10>200&&roll10<300){
        secC10();
    }
    else if(roll10>300&&roll10<400){
        secD10();
    }
    else if(roll10>400&&roll10<500){
        secE10();
    }
    else{
        printf("\n\tERROR!!!");
    }
}
void secA10(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
void secB10(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}void secC10(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}void secD10(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}void secE10(){
printf("\nCLASS ROUTINE : (SAT,SUN,MON) ");
printf("\n1.BANGLA (8.30 - 9.30)\n2.ENGLISH (9.30 - 10.30)\n3.MATH (10.30 - 11.30)\n4.SCIENCE (11.30 -  12.30)\n");
printf("\nCLASS ROUTINE : (TUES,WED,THURS)");
printf("\n1.ENGLISH (9.30 -  10.30)\n3.SCIENCE (10.30 - 11.30)\n4.MATH (11.30 - 12.30)\n5.BANGLA (12.30 - 1.30)");
}
int main(){
    printf("\n\tENTER YOUR CLASS NO ");
    int class;
    scanf("%d",&class);
    if(class<6&&class>0){
        printf("\n\tYOU ARE IN THE WRONG SECTION !");
    }
    else if(class==6){
        class6();
    }
    else if(class==7){
        class7();
    }
    else if(class==8){
        class8();
    }
    else if(class==9){
        class9();
    }
    else if(class==10){
        class10();
    }
    else{
        printf("\n\tERROR!!!");
    }
}