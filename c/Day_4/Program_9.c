//Food bill using loop

#include<stdio.h>
void main(){
int i,n,code=0,qua=0,Total=0,bur=0,piz=0,vad=0,san=0,item=0;

for(i=1;i>0;i++)
{
printf("Do you want to add Something ? \n if Yes enter 1 if No enter 0 : ");
scanf("%d",&n);
if(n==0)
break;

if(n==1){

printf("Items : \n");
printf("101	Burger		150 \n");
printf("102	Pizza		200 \n");
printf("103	vadapav		30 \n");
printf("104	Sandwitch	100 \n");
printf("Enter the code of item : ");
scanf("%d",&code);

printf("Enter Quantity of Item : ");
scanf("%d",&qua);


switch(code)
{
case 101:
	Total=Total+150*qua;
	item=item+qua;
	bur = bur + qua;
break;
case 102:
	Total=Total+200*qua;
	item=item+qua;
	piz=piz+qua;
break;
case 103:
	Total=Total+30*qua;
	item=item+qua;
	vad=vad+qua;
break;
case 104:
	Total=Total+100*qua;
	item=item+qua;
	san=san+qua;
break;
default:
	printf("Enter Valid Input.");
break;

}

}

}

printf("Total Number of Burger is %d\n",bur);
printf("Total Number of Pizza is %d\n",piz);
printf("Total Number of Vadapav is %d\n",vad);
printf("Total Number of Sandwitch is %d\n",san);
printf("total Number of Items : %d\n",item);
printf("Your Total bill is %d\n",Total);

}
