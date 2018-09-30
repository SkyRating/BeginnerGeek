#include <stdio.h>
typedef struct{
int arr[255][255];
}array;

int str,col;

array softcreate(){
printf("Size of array\n");
printf("Input columns="); scanf("%d",&col);
printf("Input strings="); scanf("%d",&str);
array Arr;
for(int i=0; i<str; i++){
 for(int j=0; j<col; j++){
  printf("array [%d][%d]=", i,j); scanf("%d",&Arr.arr[i][j]);  //read op
  }
 }
return Arr;
}

void softprint(array A){
for(int i=0; i<str; i++){
 for(int j=0; j<col; j++){         //print op
  printf("%d ", A.arr[i][j]);
  }
 printf("\n");
 }
}

array softsort(array A){
for(int i=0; i<str; i++){
for(int a=0; a<col-1; a++){
 for(int j=0; j<col-1; j++){
  if(A.arr[i][j]<A.arr[i][j+1]){   //sort op
   int temp=A.arr[i][j];
   A.arr[i][j]=A.arr[i][j+1];
   A.arr[i][j+1]=temp;
   } 
}
}
}
return A;
}

void softaj(array A){
double mid=0;
for(int j=0;j<col-1; j++){
 double mult=1;
 for(int i=1+j;i<str; i++){
  mult*=A.arr[i][j];
  }                               //Middle value op
 printf("a[%d]=%lf",j+1,mult);
 printf("\n");
 mid+=mult;
 }
printf("\n");
printf("Middle value=%1.2lf ", (mid/(col-1)) );
printf("/n");
}

int main(void){
array A=softcreate();
softprint(A);
printf("\n");
array B=softsort(A);
softprint(B);
softaj(B);
}
