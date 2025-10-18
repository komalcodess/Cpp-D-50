#include <stdio.h>
int main(){
int n, rev=0, rem, real;
printf("Enter a number: ");
scanf("%d",&n);
real= n;
for(int i=n; i>0; i=i/10){
        rem= i%10;
    rev= rev*10+rem;
}
if(real==rev){
    printf("The number is a palindrome number.");
}
else {printf("The number is not a palindrome number");}

}
