#include<stdio.h>
void main(){

    int a;
    
    printf("Enter value of water level (in %)\n");
    
     scanf("%d", &a);
    
     if(a>80){
    
     printf("Water level exceeded, dam will overflow\n");
    
     }
    
     else{
    
     printf("Water level is sufficient, gates are closed!\n");
    }
}
