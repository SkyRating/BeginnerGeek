#include <stdio.h>
typedef struct{
int arr[255][255];
}array;

int str,col;
array Ars;

void softcreate(){
printf("Size of array\n");
printf("Input columns="); scanf("%d",&col);
printf("Input strings="); scanf("%d",&str);
for(int i=0; i<str; i++){
 for(int j=0; j<col; j++){
  printf("array [%d][%d]=", i,j); scanf("%d",&Ars.arr[i][j]);  //read op
  }
 }
}

void softprint(){
for(int i=0; i<str; i++){
 for(int j=0; j<col; j++){         //print op
  printf("%d ", Ars.arr[i][j]);
  }
 printf("\n");
 }
}

void softsort(){
for(int i=0; i<str; i++){
for(int a=0; a<col-1; a++){
 for(int j=0; j<col-1; j++){
  if(Ars.arr[i][j]<Ars.arr[i][j+1]){   //sort op
   int temp=Ars.arr[i][j];
   Ars.arr[i][j]=Ars.arr[i][j+1];
   Ars.arr[i][j+1]=temp;
   } 
}
}
}
}

void softaj(){
double mid=0;
for(int j=0;j<col-1; j++){
 double mult=1;
 for(int i=1+j;i<str; i++){
  mult*=Ars.arr[i][j];
  }                               //Middle value op
 printf("a[%d]=%1.2lf",j+1,mult);
 printf("\n");
 mid+=mult;
 }
printf("\n");
printf("Middle value=%1.2lf ", (mid/(col-1)) );
printf("/n");
}

int main(void){
softcreate();
softprint();
softsort();
printf("\n");
softprint();
softaj();
}
