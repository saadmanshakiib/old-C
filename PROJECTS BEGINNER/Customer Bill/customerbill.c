 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
        void foods()
{
printf("\n\tPlease select your foods for order");
char* food1 = "Rice";
char* food2 = "Milk";
char* food3 = "Fish";
char* food4 = "Meat";

        int food_code;
        int kg1;
        int kg2;
        int kg3;
        int kg4;
        int food_1_price = 100;
        int food_2_price = 150;
        int food_3_price = 500;
        int food_4_price = 400;
        int taka1;
        int taka2;
        int taka3;
        int taka4;
printf("\n\tChoose one of them ");
printf("\n\t1.Rice\t2.Milk\t3.Meat\t4.Fish");
printf("\n\tEnter the corresponding number of the items for selection\n");
scanf("%d",&food_code);
if(food_code==1){
    printf("\n\tYour selected item is %s",food1);
    printf("\nThe price for 1 kg %s is %d ",food1,food_1_price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg1);
    if(kg1<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg1,food1,food_1_price*kg1); 
    }
    printf("\n\tEnter the amount of %d taka ",food_1_price*kg1);
    scanf("%d",&taka1);
    if(taka1<food_1_price*kg1){
        printf("\n\tPlease enter more %d amount of money",food_1_price*kg1-taka1);
    }
    else if(taka1>food_1_price*kg1){
        printf("\n\tRecieve your %d extra taka ",taka1-food_1_price*kg1);
    }
    
    else{
        printf("\n\tError");
        exit(0);
    }
}
else if(food_code==2){
        printf("\n\tYour selected item is %s",food2);
    printf("\nThe price for 1 kg %s is %d ",food2,food_2_price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg2);
    if(kg2<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg2,food2,food_2_price*kg2); 
    }
    printf("\n\tEnter the amount of %d taka ",food_2_price*kg2);
    scanf("%d",&taka2);
    if(taka2<food_2_price*kg2){
        printf("\n\tPlease enter more %d amount of money",food_2_price*kg2-taka2);
    }
    else if(taka2>food_2_price*kg2){
        printf("\n\tRecieve your %d extra taka ",taka2-food_2_price*kg2);
    }
    else{
        printf("\n\tError");
        exit(0);
    }
}
else if(food_code==3){
        printf("\n\tYour selected item is %s",food3);
    printf("\nThe price for 1 kg %s is %d ",food3,food_3_price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg3);
    if(kg3<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg3,food3,food_3_price*kg3); 
    }
    printf("\n\tEnter the amount of %d taka ",food_3_price*kg3);
    scanf("%d",&taka3);
    if(taka3<food_3_price*kg3){
        printf("\n\tPlease enter more %d amount of money",food_3_price*kg3-taka3);
    }
    else if(taka3>food_3_price*kg3){
        printf("\n\tRecieve your %d extra taka ",taka3-food_3_price*kg3);
    }
    else{
        printf("\n\tError");
        exit(0);
    }
}
else if(food_code==4){
            printf("\n\tYour selected item is %s",*food4);
    printf("\nThe price for 1 kg %s is %d ",food4,food_4_price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg4);
    if(kg4<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg4,food4,food_4_price*kg4); 
    }
    printf("\n\tEnter the amount of %d taka ",food_4_price*kg4);
    scanf("%d",&taka4);
    if(taka4<food_4_price*kg4){
        printf("\n\tPlease enter more %d amount of money",food_4_price*kg4-taka4);
    }
    else if(taka4>food_4_price*kg4){
        printf("\n\tRecieve your %d extra taka ",taka4-food_4_price*kg4);
    }
    else{
        printf("\n\tError");
        exit(0);
    }
}
}
    void fruits(){
printf("\n\tSelect your items...");
char fruit1[10] = "Mango";
char fruit2[10] = "Strawberry";
char fruit3[10] = "Apple";
char fruit4[10] = "Orange";
int fruit1price;
int fruit2price;
int fruit3price;
int fruit4price;
int taka1;
int taka2;
int taka3;
int taka4;
int kg1;
int kg2;
int kg3;
int kg4;
int fruitcode;
printf("\n\t1.Mango\t2.Strawberry\t3.Apple\t4.Orange");
printf("\n\tEnter your corresponding number to select items");
scanf("%d",&fruitcode);
if(fruitcode==1){
        printf("\n\tYour selected item is %s",fruit1);
    printf("\nThe price for 1 kg %s is %d ",fruit1,fruit1price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg1);
    if(kg1<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg1,fruit1,fruit1price*kg1); 
    }
    printf("\n\tEnter the amount of %d taka ",fruit1price*kg1);
    scanf("%d",&taka1);
    if(taka1<fruit1price*kg1){
        printf("\n\tPlease enter more %d amount of money",fruit1price*kg1-taka1);
    }
    else if(taka1>fruit1price*kg1){
        printf("\n\tRecieve your %d extra taka ",taka1-fruit1price*kg1);
    }

}
else if(fruitcode==2){
        printf("\n\tYour selected item is %s",fruit2);
    printf("\nThe price for 1 kg %s is %d ",fruit2,fruit2price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg2);
    if(kg2<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg2,fruit2,fruit2price*kg2); 
    }
    printf("\n\tEnter the amount of %d taka ",fruit2price*kg2);
    scanf("%d",&taka2);
    if(taka2<fruit2price*kg2){
        printf("\n\tPlease enter more %d amount of money",fruit2price*kg2-taka2);
    }
    else if(taka2>fruit2price*kg2){
        printf("\n\tRecieve your %d extra taka ",taka2-fruit2price*kg2);
    }
}
   else if(fruitcode==3){
        printf("\n\tYour selected item is %s",fruit3);
    printf("\nThe price for 1 kg %s is %d ",fruit3,fruit3price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg3);
    if(kg3<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg3,fruit3,fruit3price*kg3); 
    }
    printf("\n\tEnter the amount of %d taka ",fruit3price*kg3);
    scanf("%d",&taka3);
    if(taka3<fruit3price*kg3){
        printf("\n\tPlease enter more %d amount of money",fruit3price*kg3-taka3);
    }
    else if(taka3>fruit3price*kg3){
        printf("\n\tRecieve your %d extra taka ",taka3-fruit3price*kg3);
    }
   }
else if(fruitcode==4){
        printf("\n\tYour selected item is %s",fruit4);
    printf("\nThe price for 1 kg %s is %d ",fruit4,fruit4price);
    printf("\nEnter the kg amount of your selected item for bill ");
    scanf("%d",&kg4);
    if(kg4<0){
        printf("\n\tEnter a valid number of kg please ");
    }
    else{
        printf("\n\tThe price for your %d kg %s is %d Taka ",kg4,fruit4,fruit4price*kg4); 
    }
    printf("\n\tEnter the amount of %d taka ",fruit4price*kg4);
    scanf("%d",&taka4);
    if(taka4<fruit4price*kg4){
        printf("\n\tPlease enter more %d amount of money",fruit4price*kg4-taka4);
    }
    else if(taka4>fruit4price*kg4){
        printf("\n\tRecieve your %d extra taka ",taka4-fruit4price*kg4);
    }
}
else {
    printf("\n\tError");
}
}

 int main(){
     printf("\n\tEnter any key to start...");
     getchar();
     printf("\n\tSelect your Product type please ");
     printf("\n\t1.Foods\t2.Fruits");
     printf("\n\tPress 1 for foods or press 2 for fruits.");
     int response;
     scanf("%d",&response);
     if(response==1)
     foods();
     else if(response==2)
     fruits();
    else 
    printf("\n\tError!!!");
    exit(0);
printf("\n\tProgramme ended.");
 }