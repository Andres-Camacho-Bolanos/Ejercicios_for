//Este programa imprime la serie de números primos del 1 al 50//




#include<stdio.h>




void numeros_primos (){
    
    
    
    
    int i;
    int numero_primo;
    int x;
    
    
    
    
    printf("Bienvenido.\n");
    printf("A continuacion se mostraran todos los numeros primos del 1 al 50:\n");
    
    
    
    
    for(i=2; i <=50; i ++){
        numero_primo=1;
        
        for(x=2; x<i; x++){ 
           if (i%x==0){
                numero_primo=0;
            }
            
            
            
            
        }
        if (numero_primo==1){
            
            printf("%d\n" ,i);
        } 
        
        
        
        
}




}




 int main(){
     
     
     
     
    numeros_primos();
    
    
    
    
    return 0;
    
    
    
    
 }
