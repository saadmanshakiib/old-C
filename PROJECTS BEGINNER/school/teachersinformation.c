#include<stdio.h>
#include<conio.h>
void school(){
printf("\n\tSCHOOL LEVEL CO-ORDINATOR :");
printf("\nNURUL ISLAM BHUIYA\nCONTACT NO. - 01614642891");
printf("\n\tHEAD TEACHER : ");
printf("\nROKSANA BEGUM ");
printf("\nCONTACT NO. - 01874204310\n");
printf("\n\tOTHER TEACHERS - " );
printf("\n1.KARIM UDDIN (Bangla)");
printf("\nCONATCT NO. 01327803126\n");
printf("\n2.SHARIF UDDIN (Bangla)");
printf("\nCONATCT NO. 01527205006\n");
printf("\n3.MOSTAK UDDIN (Social science)");
printf("\nCONATCT NO. 01827805441\n");
printf("\n4.TAZ UDDIN (English)");
printf("\nCONATCT NO. 09955124301\n");
printf("\n5.HASAN AHAMED (science)");
printf("\nCONATCT NO. 01788990001\n");
printf("\n6.ABBAS AHAMED (English)");
printf("\nCONATCT NO. 01627883129\n");
printf("\n7.FOYSAL SHAH (Social Scince) ");
printf("\nCONATCT NO. 01715828990\n");
printf("\n8.SHOWAIBUL AHAMED (Math)");
printf("\nCONATCT NO. 01615828887\n");
printf("\n9.NASRIN SULTANA (Social science)");
printf("\nCONATCT NO. 01900651289\n");
printf("\n10.NAZMOON NAHAR (Science)");
printf("\nCONATCT NO. 01557781329\n");
printf("\n11. SONIA SULATANA (Religion)");
printf("\nCONATCT NO. 01328865201\n");
printf("\n12.AZIZ UDDIN (Science)");
printf("\nCONATCT NO. 01527503152\n");
printf("\n13.SAIFULLAH HOSSAIN (Religion)");
printf("\nCONATCT NO. 016267993126\n");
printf("\n14.HOSSAN UDDIN (Religion)");
printf("\nCONATCT NO. 01322803126");
}
void college(){
    printf("\n\tCOLLEGE LEVEL HEAD TEACHER : PROBIR CHOWDHURY ");
    printf("\n\tCONTACT NO. - 01589915234");
    printf("\n\tCOLLEGE LEVEL CO ORDINATOR : MOHAMMED IQBAL ");
    printf("\n\tCONATCT NO. 01389541034");
    printf("\n\tOTHER TEACHERS OF COLLEGE SECTION - ");
    printf("\n\t1.BELAL AHAMED (Math)");
    printf("\n\tCONTACT NO. 01744190513\n");
    printf("\n\t2.SUSHANTA KUMAR DEY (Math)");
    printf("\n\tCONTACT NO. 01799510513\n");
    printf("\n\t3.SANJAY KUMAR DHAR (Chemistry) ");
    printf("\n\tCONTACT NO. 01815192195\n");
    printf("\n\t4.SHILPI NAHAR (Biology) ");
    printf("\n\tCONTACT NO. 01780198534\n");
    printf("\n\t5.SHIU MOTIN (Bangla) ");
    printf("\n\tCONTACT NO. 01665109242\n");
    printf("\n\t6.FARZANA HAQUE (English) ");
    printf("\n\tCONTACT NO. 01924977513\n");
    printf("\n\t7.DIDARUL ALAM (Sports) ");
    printf("\n\tCONTACT NO. 01096513492\n");
    printf("\n\t7.KUTUBUDDIN SIKDAR (SOCIAL SCIENCE) ");
    printf("\n\tCONTACT NO. 01909753729\n");
    printf("\n\t8.FAZAL UDDIN (ARTS) ");
    printf("\n\tCONTACT NO. 01744190513\n");
    printf("\n\t9.ABDULLAH TAQI (FINANCE)");
    printf("\n\tCONTACT NO. 01884190803\n");
    printf("\n\t10.ABDULLAH SHAFI AHAMED (Commercial Business) ");
    printf("\n\tCONTACT NO. 01875109330\n");
    printf("\n\t11.FAIZUNNAHAR (Commercial Business) ");
    printf("\n\tCONTACT NO. 01615990241\n");
    printf("\n\t12.AHAMED TANVIR (Arts) ");
    printf("\n\tCONTACT NO. 01775109339");
}
int main(){
    printf("\n\n\tTEACHERS INFORMATION : ");
    printf("\n\tPLEASE SELECT YOUR SECTION :");
    printf("\n\t1.SCHOOL\n\t2.COLLEGE");
    int sec;
    scanf("%d",&sec);
    if(sec==1){
        school();
    }
    else if(sec==2){
        college();
    }
    else{
        printf("\n\tTRY AGAIN LATER ");
    }
}