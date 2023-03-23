#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ch[100];

//Define Linklist
typedef struct employee{
	char name[15];
	int id;
	float exp;
	long mobile;
	struct employee* next;
}employee;
employee* start;

// Integer To Character Convertor
char* intstr(long x){
sprintf(ch,"%ld",x);
return ch;
}

// Save Data to File Named as Data.txt
void saveData(FILE *fs){
employee* data=start;
while(data!=NULL){
	char name[50]="Name : ";
	char id[15]="id : ";
	char exp[20]= "Experience : ";
	char mobile[20]= "Mobile : ";
	char *ptr;
	ptr = strcat(name,data->name);
	ptr = strcat(id,intstr(data->id));
	ptr = strcat(exp,intstr(data->exp));
	ptr = strcat(mobile,intstr(data->mobile));
	
	int i=0;
	while(name[i]){
		putc(name[i],fs);
		i++;
	}
	i=0;
	putc('\n',fs);
	while(id[i]){
		putc(id[i],fs);
		i++;
	}
	i=0;
	putc('\n',fs);
	while(exp[i]){
		putc(exp[i],fs);
		i++;
	}
	i=0;
	putc('\n',fs);
	while(mobile[i]){
		putc(mobile[i],fs);
		i++;
	}
	putc('\n',fs);
	putc('\n',fs);
	
	data=data->next;
}
}

// Display the currently added data
void displayList(){
employee* ptr=start;
while(ptr!=NULL){
printf("Name : %s\n",ptr->name);
printf("id : %d\n",ptr->id);
printf("Experience : %f\n",ptr->exp);
printf("Mobile : %ld\n\n",ptr->mobile);
ptr=ptr->next;
}
}

// Display the Whole data
void displayData(FILE *fs){
char ch;
while(ch!=EOF){
ch=getc(fs);
printf("%c",ch);
}
}

// main function
void main(){

FILE *fs,*fp;
fs = fopen("data.txt","a+");
int n=1,m;
employee* ptr;
while(m!=0){
printf("1) Add New Employee Data\n2) Show data of Employee\n3) Delete Whole Records of Employee\n0) Exit the code\nEnter Activity Number to perform : ");
scanf("%d",&m);
if(m==1){
	employee* new=malloc(sizeof(employee));
	new->next=NULL;
	start=new;
	ptr=new;
}
switch(m){
case 1:
	while(n!=0){
		printf("Enter Name : ");
		scanf("%s",ptr->name);
		printf("Enter id : ");
		scanf("%d",&ptr->id);
		printf("Enter Experience : ");
		scanf("%f",&ptr->exp);
		printf("Enter mobile number : ");
		scanf("%ld",&ptr->mobile);
		printf("\nDo you want to add another?\n0) NO \n1) YES \nEnter Activity Number : ");
		scanf("%d",&n);
		if(n!=0){
			employee* new=malloc(sizeof(employee));
			new->next=NULL;
			ptr->next=new;
			ptr=new;
		}
	}
	saveData(fs);
	fclose(fs);
case 2:
	fp = fopen("data.txt","r+");
	printf("\n1) show Currently Added data \n2) show Previous data \n");
	scanf("%d",&n);
	switch(n){
	case 1:
		displayList();
		break;
	case 2 :
		displayData(fp);
		break;
	default:
		printf("Enter value is Invalid.");
	}
	break;
case 3:
	if(remove("data.txt")==0)
	printf("\n**** Data.txt file is Successfully Deleted. ****\n\n");
	else
	printf("Data.txt file is Not Found at this location.");
	break;
		
}
}
}
