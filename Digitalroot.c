#include <stdio.h> 
int main() {
    long int n;
    int i, d;
    int s=0;
    int sum=0;
    printf("Enter the number whose digital root is to be determined");
    scanf("%ld", &n);
    while(n) { 
        d = n%10;       
        s = s+d;        
        n = n/10;    
    }     
    while(s) {
        i = s%10;
        sum = sum + i;        
        s = s/10;      
    }   
    printf("%d", sum);
}
