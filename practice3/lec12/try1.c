#include<stdio.h>
#include<string.h>

struct student {
   char family_name[20];
   char first_name[20];
   int year;
};

int main() {
   struct student s;
   strcpy(s.family_name,"田中");
   strcpy(s.first_name,"太郎");
   s.year = 2017;
   printf("%s %s (%d)\n",s.first_name,s.family_name,s.year);

   return 0;
}
