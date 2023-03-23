#include<stdio.h>
void main(){

int a[3][3],b[3][3],mul[3][3],i,j,k;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Enter value for %d X %d : ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Second Matrix \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Enter value for %d X %d : ",i,j);
scanf("%d",&b[i][j]);
}
}

for(i=0;i<3;i++){
for(j=0;j<3;j++){
mul[i][j]=0;
for(k=0;k<3;k++){

mul[i][j]=mul[i][j]+a[i][k]*b[k][j];

}
}
}

for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d	",mul[i][j]);
}
printf("\n");
}

}
