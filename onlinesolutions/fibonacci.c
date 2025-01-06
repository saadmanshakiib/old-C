#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int array[100];
    array[0] = 0;
    array[1] = 1;
                printf("\n\tHOW MANY NUMBERS DO YO WANT TO USE ?");
    int number;
                scanf("%d",&number);
                printf("\n\tENTER THE ARRAY ELEMENTS ");
    int index;
    for(index=2;index<=number;index++){
                scanf("%d",&array[index]);
    }

    for(index=2;index<=number;index++)
    array[index]= array[index-2] + array[index-1];

                printf("\n\tFIBONACCI SERIES IS ");
  for(index=2;index<=number;index++){
                printf("%d ",array[index]);
  }
  getch();
  return 0;
}
