#include<stdio.h>
#include<stdlib.h>

void main(){
	char file[15];
	int n;
	printf("Enter Number of reciever : ");
	scanf("%d",&n);
	char ip[n][15];

	for(int i=0;i<n;i++){
		printf("Enter IP%d : ",i);
		scanf("%s",ip[i]);
	}

	printf("Enter file name : ");
	scanf("%s",file);
	FILE *fs;
	fs = fopen("share.sh","w+");
	printf("1");
	fprintf(fs,"#!/bin/bash\n\n");
	fprintf(fs,"s=(");
	for(int i=0;i<n;i++)
		fprintf(fs,"%s ",ip[i]);
	fprintf(fs,")\n");
	fprintf(fs,"\tfor i in ${s[@]}\n\tdo\n\t\tnc $i 4444 < %s\n\tdone\n}\n",file);
	//fprintf(fs,"fun() ");
	
	//close(fs);
	//execl("/usr/bin/gnome-terminal","./share.sh","./share.sh",0);
	
}

