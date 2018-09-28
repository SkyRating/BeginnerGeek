#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b;
 FILE *file;
 file=fopen("fscanf.txt","rt");
 if((file=fopen("fscanf.txt","rt"))==NULL){
 perror("None");
 exit(0);
 }
 int counter=0;
 while(fscanf(file,"%d",&a)!=EOF){
 printf("Clean ");
 if(a==1){
 printf("\n");
 continue;
 }
 printf("%d \n",a);
 counter++;
 }
 printf("Number of symbols %d", counter);
 fclose(file);
}
