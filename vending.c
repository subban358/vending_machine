#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int breverage, count1=4, count2=5, count3=6, sum1, sum2, sum3, money, change, num,option,i,check=1;
void start();
void coke()
{
	             if(count1>=num)
				 {
				 printf("Enter amount %d cents \n", sum1);
		         while(sum1!=0)
				 {
				 printf("\nEnter coins here:");
		         scanf("%d",& money);
				 if(money==1 || money==5 || money==10 || money==25)
				 {
					 sum1=sum1-money;
					 if(sum1>0)
					 {printf("Enter more %d", sum1);}
					 else if(sum1<0)
					 {
						 change=sum1*(-1);
						 sum1=0;
					 }
				 }
				 else{printf("Only penny, nickel, dime and quarters are accepted \n");}
				 }
				 printf("Here is your %d coke(s)", num);
				 printf("\nHere is you change: %d", change);
				 count1-=num;
				 }
				 else
					 printf("Insufficient amount of Coke available! :( \n");
}

void pepsi()
{
	             if(count2>=num)
				 {
				 printf("Enter amount %d cents \n", sum2);
		         while(sum2!=0)
				 {
				 printf("\nEnter coins here:");
		         scanf("%d",& money);
				 if(money==1 || money==5 || money==10 || money==25)
				 {
					 sum2=sum2-money;
					 if(sum2>0)
					 {printf("Enter more %d", sum2);}
					 else if(sum2<0)
					 {
						 change=sum2*(-1);
						 sum2=0;
					 }
				 }
				 else{printf("Only penny, nickel, dime and quarters are accepted \n ");}
				 }
				 printf("Here is your %d Pepsi(s)", num);
				 printf("\nHere is you change: %d", change);
				 count2-=num;
				 }
				 else
					 printf("Insufficient amount of Pepsi available! :( \n");
}
void soda()
{
	             if(count3>=num)
				 {
				 printf("Enter amount %d cents \n", sum3);
		         while(sum3!=0)
				 {
				 printf("\nEnter coins here:");
		         scanf("%d",& money);
				 if(money==1 || money==5 || money==10 || money==25)
				 {
					 sum3=sum3-money;
					 if(sum3>0)
					 {printf("Enter more %d", sum3);}
					 else if(sum3<0)
					 {
						 change=sum3*(-1);
						 sum3=0;
					 }
				 }
				 else{printf("Only penny, nickel, dime and quarters are accepted !!\n");}
				 }
				 printf("Here is your %d soda(s)", num);
				 printf("\nHere is you change: %d", change);
				 count3-=num;
				 }
				 else
					 printf("Insufficient amount of Soda available! :( \n");
}

void menu()
{
	while(1)
	{
		printf("\n\n***** CUSTOMER MENU *****\n");
		printf("1. Coke   ( 25 cents )          (%d left)\n",count1);
		printf("2. Pepsi  ( 35 cents )          (%d left)\n",count2);
		printf("3. Soda   ( 45 cents )          (%d left)\n",count3);
		printf("4. Return to Main Menu \n");

		printf("Enter the number of your choice of beverage:");
		scanf("%d" ,& breverage);


			/*sum1=num*25;
			sum2=num*35;
			sum3=num*45;*/

		switch(breverage)
		{
			case 1 : printf("\nEnter how many do you want:");

					scanf("%d" ,& num);
					sum1=num*25;
					coke();
					break;
			case 2 : printf("\nEnter how many do you want:");

					scanf("%d" ,& num);
					sum2=num*35;
					pepsi();
					break;
			case 3 : printf("\nEnter how many do you want:");

					scanf("%d" ,& num);
					sum3=num*45;
					soda();
					break;
			case 4 :
					start();
					break;
			default:
					printf("Invalid Entry");
		}
	}
}

void access()
{

	int stock, c1, c2, c3;
	while(1)
	{
	printf("***** VENDOR MENU *****");
	printf("\n1. Coke");
	printf("\n2. Pepsi");
	printf("\n3. Soda");
	printf("\n4. Return to Main Menu");
	printf("\n\n Enter the choice of beverage that you want to edit the stock of: ");
	scanf("%d" ,& stock);
	if(stock==1)
	{
		printf("Enter new stock amount for Coke: ");
		scanf("%d",&c1);
		count1+=c1;
	}
	else if(stock==2)
	{
		printf("Enter new stock amount for Pepsi: ");
		scanf("%d",&c2);
		count2+=c2;
	}
	else if(stock==3)
	{
		printf("Enter new stock amount for Soda: ");
		scanf("%d",&c3);
		count3+=c3;
	}
	else if(stock==4)
		start();
	else
		printf("Invalid Entry!");
	}
}

void vendor()
{
	const char password[15] = "qwerty";
    char pass[15];
    int x;
    int log = 1;


	   printf("Enter your password: ");
       scanf("%s", &pass);

	log=strcmp(password,pass);

	if(log==0){
		printf("\nLogin Successful\n");
	access();}
	else{
		printf("\nInvalid password try again !!\n");
	start();}

}
void start()
{
	printf("\n***** MAIN MENU *****\n");
	printf("\n1. Vendor Login");
	printf("\n2. Customer Login");
	printf("\n3. Exit");
	printf("\n\nEnter any following vending option: ");
	scanf("%d",& option);
	if(option==2)
		menu();
	else if (option==1)
		vendor();
	else if (option==3)
		exit(0);
	else
		printf("Invalid Entry");
}
void main()
{
	start();
}
