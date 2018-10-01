#include <stdio.h>
#include <stdlib.h>
int main(){
char b;
char vowels[]={'A','a','E','e','I','i','O','o','U','u'};
char cons[]={'B','b','C','c','D','d','F','f','G','g','H','h','J','j','K','k','L','l','M','m','N','n','P','p','Q','q','R','r','S','s','T','t','V','v','W','w','X','x','Y','y','Z','z'};
 FILE *file;
 file=fopen("everyfile","rt");
 if((file=fopen("everyfile","r"))==NULL){
 perror("None");
 exit(0);
 }
int vow=0;
int con=0;
while(fscanf(file,"%c",&b)!=EOF){
 for(int v=0; v<=9; v++){
  if(b==vowels[v]){
  vow++;
  break;
  }
  }                               //check
 for(int c=0;c<=41;c++){
  if(b==cons[c]){
   con++;
    break;
   }
  }
 if((b=='{')||(b=='}')){
 continue;
 }
 if((b=='\n')||(b=='\0')){
  if((vow==0) && (con==0)){
   printf(" Only signs included\n");
  }else{
  printf("   (Vowels=%d Consonants=%d)\n",vow,con);
  vow=0;
  con=0;
 }
 }else{
 printf("%c",b);
} 
}
 fclose(file);
}
