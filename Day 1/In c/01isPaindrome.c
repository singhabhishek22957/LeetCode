#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

bool isPalindrome(int num){
    if(num<0|| (num%10==0 &&num!=0)) return false;
    int half_rev = 0;
    while(num>half_rev){
        if(half_rev>INT_MAX/10 || half_rev==INT_MAX/10&&num%10>INT_MAX%10) return false;
        half_rev = (half_rev*10)+(num%10);
        num/=10;
        
        
    }
    return  (num==half_rev || num==half_rev/10);


}

int main(){

    int boolean = isPalindrome(10);

    if(boolean==1){
        printf("is palindrome");
    }else{
        printf(" is not palindrome");
    }

    
    


    return 0;
}