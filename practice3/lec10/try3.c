#include<stdio.h>

int main() {
   int array[3] = {2,4,8};
   int len = 3;
   int n,m;
   int *lcm = &n;
   int *gcd = &m;
   lcm_gcd(array,len,lcm,gcd);

   return 0;
}

void lcm_gcd(int array[],int len,)
