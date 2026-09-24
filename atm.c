#include <stdio.h>
#include<stdbool.h>
#include<windows.h>
int bal1=1000;
int bal2=0;
int bal3=10000;
int bal4=55000;

int atm=0;
int menu1();
int menu2();
int menu3();
int menu4();

void checkBalance1(int bal1);
void checkBalance2(int bal2);
void checkBalance3(int bal3);
void checkBalance4(int bal4);

int depositAmount1();
int depositAmount2();
int depositAmount3();
int depositAmount4();

int withdrawAmount1();
int withdrawAmount2();
int withdrawAmount3();
int withdrawAmount4();

int end();



int main()
{   
    printf("******************** W E L C O M E   T O   M Y   A T M ********************\n");
    char card;
    int pin;
    printf("Insert the ATM Card(A,B,C,D)\n");
    card=getchar();
    switch(card){
        case 'A':
            printf("ENTER THE PIN:");
            scanf("%d",&pin);
            if(pin == 1234){
                menu1();
            }
            else{
                printf("WRONG PIN");
            }
            break;
        case 'B':
            printf("ENTER THE PIN:");
            scanf("%d",&pin);
            if(pin == 2244){
                menu2();
            }
            else{
                printf("WRONG PIN");
            }
            
            break;
        case 'C':
            printf("ENTER THE PIN:");
            scanf("%d",&pin);
            if(pin == 5050){
                menu3();
            }
            else{
                printf("WRONG PIN");
            }
            break;
        case 'D':

            printf("ENTER THE PIN:");
            scanf("%d",&pin);
            if(pin == 4321){
                menu4();
            }
            else{
                printf("WRONG PIN");
            }

            break;
        default :
            printf("YOUR CARD IS NOT  VALID!\n");
            break;

    }

    printf("\n");
   

    return 0;

}

int menu1(){

    printf("\n");
    printf("###### ATM MENU ######\n");
    printf("1-Check Balance\n");
    printf("2-Deposit Cash\n");
    printf("3-Withdraw Cash\n");
    printf("0-End the process\n");
    
    
    int x;
    do{
        printf("Enter your choice from above options(0-3):");
        scanf("%d",&x);

        switch(x){
            case 1:
                checkBalance1(bal1);
                break;
            case 2:
                
                bal1 +=depositAmount1(bal1);
                
                break;
            case 3:
                bal1-= withdrawAmount1(bal1);
                break;
            
            case 0:
                atm+=end();
                break;

            default:
                printf("INVALID OPTIONS\n");
                break;
        }
        Sleep(3000);

    }while(x);



}
int menu2(){

    printf("\n");
    printf("###### ATM MENU ######\n");
    printf("1-Check Balance\n");
    printf("2-Deposit Cash\n");
    printf("3-Withdraw Cash\n");
    printf("0-End the process\n");
    
    
    int x;
    do{
        printf("Enter your choice from above options(0-3):");
        scanf("%d",&x);

        switch(x){
            case 1:
                checkBalance2(bal2);
                break;
            case 2:
                
                bal2 +=depositAmount2(bal2);
                
                break;
            case 3:
                bal2-= withdrawAmount2(bal2);
                break;
            
            case 0:
                atm+=end();
                break;

            default:
                printf("INVALID OPTIONS\n");
                break;
        }
        Sleep(3000);

    }while(x);



}
int menu3(){

    printf("\n");
    printf("###### ATM MENU ######\n");
    printf("1-Check Balance\n");
    printf("2-Deposit Cash\n");
    printf("3-Withdraw Cash\n");
    printf("0-End the process\n");
    
    
    int x;
    do{
        printf("Enter your choice from above options(0-3):");
        scanf("%d",&x);

        switch(x){
            case 1:
                checkBalance3(bal3);
                break;
            case 2:
                
                bal3 +=depositAmount3(bal3);
                
                break;
            case 3:
                bal3-= withdrawAmount3(bal3);
                break;
            
            case 0:
                atm+=end();
                break;

            default:
                printf("INVALID OPTIONS\n");
                break;
        }
        Sleep(3000);

    }while(x);



}
int menu4(){

    printf("\n");
    printf("###### ATM MENU ######\n");
    printf("1-Check Balance\n");
    printf("2-Deposit Cash\n");
    printf("3-Withdraw Cash\n");
    printf("0-End the process\n");
    
    
    int x;
    do{
        printf("Enter your choice from above options(0-3):");
        scanf("%d",&x);

        switch(x){
            case 1:
                checkBalance4(bal4);
                break;
            case 2:
                
                bal4 +=depositAmount4(bal4);
                
                break;
            case 3:
                bal4-= withdrawAmount4(bal4);
                break;
            
            case 0:
                atm+=end();
                break;

            default:
                printf("INVALID OPTIONS\n");
                break;
        }
        Sleep(3000);

    }while(x);



}


void checkBalance1(int bal1){
    
    printf("The current balance amount is Rs. %d \n",bal1);

}
void checkBalance2(int bal2){
    
    printf("The current balance amount is Rs. %d \n",bal2);

}
void checkBalance3(int bal3){
    
    printf("The current balance amount is Rs. %d \n",bal3);

}
void checkBalance4(int bal4){
    
    printf("The current balance amount is Rs. %d \n",bal4);

}

int depositAmount1(){
    int dA=0;
    printf("Enter the Amount to deposit:\n");
    printf("Deposit amount only 500rupee notes\n");
    scanf("%d",&dA);
    if(dA % 500 == 0){
        printf("Amount Deposited Rs.%d\n",dA);
        return dA;
    }
    else{
        printf("Deposit amount only 500rupee notes\n");
    }
}

int depositAmount2(){
    int dA=0;
    printf("Enter the Amount to deposit:\n");
    printf("Deposit amount only 500rupee notes\n");
    scanf("%d",&dA);
    if(dA % 500 == 0){
        printf("Amount Deposited Rs.%d\n",dA);
        return dA;
    }
    else{
        printf("Deposit amount only 500rupee notes\n");
    }
}

int depositAmount3(){
    int dA=0;
    printf("Enter the Amount to deposit:\n");
    printf("Deposit amount only 500rupee notes\n");
    scanf("%d",&dA);
    if(dA % 500 == 0){
        printf("Amount Deposited Rs.%d\n",dA);
        return dA;
    }
    else{
        printf("Deposit amount only 500rupee notes\n");
    }
}

int depositAmount4(){
    int dA=0;
    printf("Enter the Amount to deposit:\n");
    printf("Deposit amount only 500rupee notes\n");
    scanf("%d",&dA);
    if(dA % 500 == 0){
        printf("Amount Deposited Rs.%d\n",dA);
        return dA;
    }
    else{
        printf("Deposit amount only 500rupee notes\n");
    }
}

int withdrawAmount1(){
    int wd=0;
    printf("Enter the Amount you needed:\n");
    printf("only 500rupee notes are available\n");
    scanf("%d",&wd);
    if(bal1>=wd){
        if( wd % 500 == 0){
        printf("Amount Withdrew Rs.%d\n",wd);
         return wd;
        }
        else{
        printf("only 500rupee notes\n");
        }
    }
    else{
        printf("Insufficient Balance!\n");
    }
}

int withdrawAmount2(){
    int wd=0;
    printf("Enter the Amount you needed:\n");
    printf("only 500rupee notes are available\n");
    scanf("%d",&wd);
    if(bal2>=wd){
        if( wd % 500 == 0){
        printf("Amount Withdrew Rs.%d\n",wd);
         return wd;
        }
        else{
        printf("only 500rupee notes\n");
        }
    }
    else{
        printf("Insufficient Balance!\n");
    }
}


int withdrawAmount3(){
    int wd=0;
    printf("Enter the Amount you needed:\n");
    printf("only 500rupee notes are available\n");
    scanf("%d",&wd);
    if(bal3>=wd){
        if( wd % 500 == 0){
        printf("Amount Withdrew Rs.%d\n",wd);
         return wd;
        }
        else{
        printf("only 500rupee notes\n");
        }
    }
    else{
        printf("Insufficient Balance!\n");
    }
}

int withdrawAmount4(){
    int wd=0;
    printf("Enter the Amount you needed:\n");
    printf("only 500rupee notes are available\n");
    scanf("%d",&wd);
    if(bal4>=wd){
        if( wd % 500 == 0){
        printf("Amount Withdrew Rs.%d\n",wd);
         return wd;
        }
        else{
        printf("only 500rupee notes\n");
        }
    }
    else{
        printf("Insufficient Balance!\n");
    }
}

int end(){
    
    printf("RATE THE ATM\n");
    int star;
    printf("\n");
    printf("EXCELLENT*****\n");
    printf("SUPER****\n");
    printf("GOOD***\n");
    printf("AVERAGE**\n");
    printf("WORST*\n");
    printf("Enter no of *:\n");
    scanf("%d",&star);
    printf("************THANK YOU************\n");
    printf("TAKE YOUR CARD\n");
    return star;
}
