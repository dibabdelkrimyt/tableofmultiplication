#include <stdio.h>
#include <stdlib.h> 

void Anne_Bisextille ( int a) {
if ((a/4==0 || a/400==0)&& a/100!=0 )
printf ("L'annee est Bisextille"); 
else 
printf ("L'annee n'est pas Bisextille");
}

int main () {
int a; 
printf("Donnezz a: "); 
scanf ("%d", &a); 
Anne_Bisextille (a); 
return 0;
} 
