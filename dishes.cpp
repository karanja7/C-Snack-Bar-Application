#include <stdio.h>
#include <stdlib.h>
// masterpiece !!
int menu();
int main()
{
printf("\thello customer welcome to your snackshop!\n");
menu();
return 0;

}

int menu(){
int item;
printf("1. chipo- ksh 50\n");
printf("2. samosa - ksh 30\n");
printf("3. Hotdog  - ksh 70\n");
printf("4. smokie- ksh 25\n");
printf("5. tea - ksh 30\n");
printf("6. fruit juice - ksh 70\n");
printf("7. Mandazi- ksh 10\n");
printf("8. toast bread - ksh 20\n");
printf("9. mayai - ksh 20\n");
printf("enter item number:");
scanf("%d",&item);
if(item > 0 && item<=9)
{
	printf("items added to cart\n");
}
else{
	printf("invalid \n");
	menu();
}
return item;
}

