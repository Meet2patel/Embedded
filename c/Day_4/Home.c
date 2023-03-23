// Menu Of restaurant

#include <stdio.h>
void main(){
char c,temp;
int item=0,qua=0,Total=0,par=0,total_item=0,kas_p=0,kas_b=0,aal=0,oni=0,sev=0,las=0,rin=0,und=0,locho=0,pan_t=0,pan_m=0,pan_c=0,pan_65=0;
int c_b=0,idli=0,mas=0,mai=0,jin=0,man=0,cost_par=0,cost_kas_p=0,cost_kas_b=0,cost_aal=0,cost_oni=0,cost_sev=0,cost_las=0,cost_rin=0,cost_und=0,cost_locho=0;
int cost_pan_t=0,cost_pan_m=0,cost_pan_c=0,cost_pan_65=0,cost_c_b=0,cost_idli=0,cost_mas=0,cost_mai=0,cost_jin=0,cost_man=0,n=1;


while(n!=0){

printf("Enter the Your Choice \n North Indian(n)\n Gujarati(g)\n Punjabi(p)\n South Indian(s) : ");
scanf("%c",&c);

switch (c)
{
case 'n':
	printf(" (0) Paratha 60/- \n (1) Kasmiri Pulav 100/-\n (2) kasmiri Biryani 150/- \n (3) Aaloo Paratha 70/- \n (4) Onion Paratha 70/- \n Enter your value : ");
	scanf("%d",&item);
	printf("Enter the quantity of item : ");
	scanf("%d",&qua);
	
	switch (item)
	{
	case 0:
		Total = Total + qua*60;
		par = par + qua;
		cost_par = cost_par + qua*60;
	break;
	case 1:
		Total = Total + qua*100;
		kas_p = kas_p + qua;
		cost_kas_p = cost_kas_p + qua*100;
	break;
	case 2:
		Total = Total + qua*150;
		kas_b = kas_b + qua;
		cost_kas_b = cost_kas_b + qua*150;
	break;
	case 3:
		Total = Total + qua*70;
		aal = aal + qua;
		cost_aal = cost_aal + qua*70;
	break;
	case 4:
		Total = Total + qua*70;
		oni = oni + qua;
		cost_oni = cost_oni + qua*70;
	break;


	}
break;

case 'g':
	printf(" (0) Sev-tameta 60/- \n (1) Lasaniya Batata 80/-\n (2) Ringan Odo 110/- \n (3) Undiyu 100/- \n (4) locho 50/- \n Enter your value : ");
	scanf("%d",&item);
	printf("Enter the quantity of item : ");
	scanf("%d",&qua);
	
	switch (item)
	{
	case 0:
		Total = Total + qua*60;
		sev = sev + qua;
		cost_sev = cost_sev + qua*60;
	break;
	case 1:
		Total = Total + qua*80;
		las = las + qua;
		cost_las = cost_las + qua*80;
	break;
	case 2:
		Total = Total + qua*110;
		rin = rin + qua;
		cost_rin = cost_rin + qua*110;
	break;
	case 3:
		Total = Total + qua*100;
		und = und + qua;
		cost_und = cost_und + qua*100;
	break;
	case 4:
		Total = Total + qua*50;
		locho = locho + qua;
		cost_locho = cost_locho + qua*50;
	break;


	}
break;

case 'p':
	printf(" (0) Paneer Tikka 120/- \n (1) Paneer 65 150/-\n (2) Chhole Bhature 70/- \n (3) Paneer Masala 100/- \n (4) Paneer Chilli 220/- \n Enter your value : ");
	scanf("%d",&item);
	printf("Enter the quantity of item : ");
	scanf("%d",&qua);
	
	switch (item)
	{
	case 0:
		Total = Total + qua*120;
		pan_t = pan_t + qua;
		cost_pan_t = cost_pan_t + qua*120;
	break;
	case 1:
		Total = Total + qua*150;
		pan_65 = pan_65 + qua;
		cost_pan_65 = cost_pan_65 + qua*150;
	break;
	case 2:
		Total = Total + qua*70;
		c_b = c_b + qua;
		cost_c_b = cost_c_b + qua*70;
	break;
	case 3:
		Total = Total + qua*100;
		pan_m = pan_m + qua;
		cost_pan_m = cost_pan_m + qua*100;
	break;
	case 4:
		Total = Total + qua*220;
		pan_c = pan_c + qua;
		cost_pan_c = cost_pan_c + qua*220;
	break;


	}
break;

case 's':
	printf(" (0) idli 60/- \n (1) Masala Dhosa 100/-\n (2) Maisur Dhosa 150/- \n (3) Jini Rol 150/- \n (4) Manduvada 70/- \n Enter your value : ");
	scanf("%d",&item);
	printf("Enter the quantity of item : ");
	scanf("%d",&qua);
	
	switch (item)
	{
	case 0:
		Total = Total + qua*60;
		idli = idli + qua;
		cost_idli = cost_idli + qua*60;
	break;
	case 1:
		Total = Total + qua*100;
		mas = mas + qua;
		cost_mas = cost_mas + qua*100;
	break;
	case 2:
		Total = Total + qua*150;
		mai = mai + qua;
		cost_mai = cost_mai + qua*150;
	break;
	case 3:
		Total = Total + qua*150;
		jin = jin + jin * qua;
		cost_jin = cost_jin + qua*150;
	break;
	case 4:
		Total = Total + qua*70;
		man = man + man * qua;
		cost_man = cost_man + qua*70;
	break;


	}
break;

}

printf("Do You want to add Another ?\n Press 1 for Yes \n Press 0 for No ");
scanf("%d",&n);
scanf("%c",&temp);
}

printf("------------------------- Bill ----------------------------\n\n");
printf("			    Quantity  Total\n");
printf("** North Indian **\n");
printf(" (0) Paratha 60/-		%d	%d \n (1) Kasmiri Pulav 100/-	%d	%d\n (2) kasmiri Biryani 150/- 	%d	%d\n (3) Aaloo Paratha 70/- 	%d	%d\n (4) Onion Paratha 70/-		%d	%d \n",par,cost_par,kas_p,cost_kas_p,kas_b,cost_kas_b,aal,cost_aal,oni,cost_oni);

printf("** Gujarati **\n");

printf(" (0) Sev-tameta 60/- 		%d	%d\n (1) Lasaniya Batata 80/-	%d	%d\n (2) Ringan Odo 110/- 		%d	%d\n (3) Undiyu 100/- 		%d	%d\n (4) locho 50/-			%d	%d\n",sev,cost_sev,las,cost_las,rin,cost_rin,und,cost_und,locho,cost_locho);

printf("** Punjabi **\n");
printf(" (0) Paneer Tikka 120/- 	%d	%d\n (1) Paneer 65 150/-		%d	%d\n (2) Chhole Bhature 70/- 	%d	%d\n (3) Paneer Masala 100/- 	%d	%d\n (4) Paneer Chilli 220/-	%d	%d\n",pan_t,cost_pan_t,pan_65,cost_pan_65,c_b,cost_c_b,pan_m,cost_pan_m,pan_c,cost_pan_c);

printf("** South Indian **\n");
printf(" (0) idli 60/-		 	%d	%d\n (1) Masala Dhosa 100/-		%d	%d\n (2) Maisur Dhosa 150/- 	%d	%d\n (3) Jini Rol 150/- 		%d	%d\n (4) Manduvada 70/-		%d	%d\n",idli,cost_idli,mas,cost_mas,mai,cost_mai,jin,cost_jin,man,cost_man);

printf("-----------------------------------------------------------\n");
printf("TOTAL 					%d\n",Total);





}
