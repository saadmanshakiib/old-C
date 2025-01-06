#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[] = {22,33,57,89,44};
    int index,position = -1;
    printf("\n\nENTER THE VALUE - ");
    int value;
    scanf("%d",&value);
    for(index=0;index<5;index++){
        if(array[index] == value){
            position = index+1;
            break;
        }
    }
if(position== -1){
        printf("\n\nCANT FIND THE VALUE ");
}    
else{
        printf("\n\nTHE VALUE FOUNDED AT %d POSITION ",position);

}
    return 0;
    }
