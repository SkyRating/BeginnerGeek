#include <stdio.h>

struct array{
int arr[255][255];
int col;
int str;
}Ars;
struct array arrayCreate()
{
printf("Size of array\n");
printf("Input columns="); scanf("%d",&Ars.col);
printf("Input strings="); scanf("%d",&Ars.str);
for(int i=0; i<Ars.str; i++)
 {
 for(int j=0; j<Ars.col; j++)
  {
  printf("array [%d][%d]=", i,j); scanf("%d",&Ars.arr[i][j]);                      //read op
  }
 }
 return Ars;
}
void arrayPrint(struct array A){
for(int i=0; i<A.str; i++)
 {
 for(int j=0; j<A.col; j++)
  {                                                //print op
  printf("%d ", A.arr[i][j]);
  }
 printf("\n");
 }
}
struct array arraySort(struct array A){
for(int i=0; i<A.str; i++){
for(int a=0; a<A.col-1; a++){
 for(int j=0; j<A.col-1; j++){
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
void arrayMult(struct array A){
double mid=0;
for(int j=0;j<A.col-1; j++){
 double mult=1;
 for(int i=1+j;i<A.str; i++){
  mult*=A.arr[i][j];
  }                               //Middle value op
 printf("a[%d]=%1.2lf",j+1,mult);
 printf("\n");
 mid+=mult;
 }
printf("\n");
printf("Middle value=%1.2lf ", (mid/(A.col-1)) );
printf("\n");
}

int main(void){
 arrayPrint(arrayCreate());
 arrayPrint(arraySort(Ars));
 arrayMult(arraySort(Ars));
 return 0;
 }
