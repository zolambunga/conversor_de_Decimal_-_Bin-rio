#include <stdio.h>
void b(int n){
	char a = 'b';
  if(n==0){
    printf("%d",n);
  }else{
    b(n/2);
	printf("%d",n%2);
	printf("\n %c",a);
  }
}
int main(){
  int n=1;
  do{
   printf("Digite numero: ");
   scanf("%d",&n);
   b(n);
   printf("\n");
  }while(n!=0);
  return 0;
}

//podes testar o codigo e tenta declarar uma variavel para armazenar e depois posta
