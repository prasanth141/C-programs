 #include<stdio.h>
    int x,amnt,amnt1,num,num1,amnt2,amnt3,a;
    char type;
    void repay()
    {
        printf("2nd TRY:");
        scanf("%d",&amnt2);
        a=num1-amnt2;
        if(amnt2==amnt1)
        {
            printf("SUCESSFULL\n");
        }
        else
        {
        if(amnt2<amnt1)
        {
            printf("BALENCE AMOUNT:%d\n",a);
        }
        }
        printf("3rd TRY:");
        scanf("%d",&amnt3);
        if(a==amnt3)
        {
            printf("SUCESSFULL THANK YOU\n");
        }
        else
        {
        if(a>amnt3)
        {
            printf("DECLINED RETRY AGAIN");
        }
        }

    }
    void car()
    {
        printf("YOUR TOTAL AMOUNT FOR %d DAYS IS: %d\n",x,amnt);
        printf("PAY %d TO CONFIRM YOUR BOOKING\n",amnt);
        scanf("%d",&amnt1);
         if(amnt1==amnt)
        {
            printf("PAYMENT SUCCESSFUL,THANK YOU.\n");
        }
        else if(amnt1>amnt)
        {
          num=amnt1-amnt;
          printf("PLEASE COLLECT YOUR BALANCE AMOUNT:%d\n",num);
          printf("PAYMENT SUCCESSFUL,THANK YOU.\n");
        }
          else if(amnt1<amnt)
        {
          num1=amnt-amnt1;
          printf("YOU NEED TO PAY THE REMAINING AMOUNT %d\n",num1);
          repay();
        }
    }
int main()
{
    printf("WELCOME TO MIA CAR PARKING\nKINDLY ENTER YOUR DETAILS\n");
    printf("WHAT IS YOUR CAR TYPE\nLUXURY / STANDARD / NORMAL:\n");
    scanf(" %c",&type);
    if(type=='L')
    {
        printf("FOR LUXURY CAR THE AMOUNT IS 300 PER DAY\n");
        printf("HOW MANY DAYS YOU WANT TO PARK YOUR CAR:\n");
        scanf("%d",&x);
        amnt=x*300;
        car();
    }
    if(type=='S')
    {
        printf("FOR STANDARD CAR THE AMOUNT IS 200 PER DAY\n");
        printf("HOW MANY DAYS YOU WANT TO PARK YOUR CAR:\n");
        scanf("%d",&x);
        amnt=x*200;
        car();
    }
    if(type=='N')
    {
        printf("FOR NORMAL CAR THE AMOUNT IS 100 PER DAY\n");
        printf("HOW MANY DAYS YOU WANT TO PARK YOUR CAR:\n");
        scanf("%d",&x);
        amnt=x*100;
        car();
    }
}

