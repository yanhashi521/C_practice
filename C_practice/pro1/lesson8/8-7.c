/*#include<stdio.h>
#include<string.h>

int mygetstrc(char a[],char k);
void mystrpartc(char a[],char r[],char p1,char p2);

int main() {
    char s[] = "abcdefad",r[20] = "";
    printf("%s 文字列の%c は%d 番目である．\n",s,'d',mygetstrc(s,'d'));
    mystrpartc(s,r,'b','a');
    printf("%s 文字列の%c と%cの間の文字列は%sである．\n",s,'b','a',r);
    return 0;   
}

int mygetstrc(char a[],char k){
    for(int i = 0;a[i] != '\0';i++) {
        if(a[i] == k) {
            return i+1;
        }
    }
    return 0;
}
void mystrpartc(char a[],char r[],char p1,char p2) {
    int j;
    int start = mygetstrc(a,p1)-1;
    r = &a[start];
    printf("%c ",*r);
    int end = mygetstrc(r,p2)-1;
    for(j = 1;j < end-start+1;j++) {
        printf("%c ",*(r+j));
        *(r+j) = a[start+j];
    }
    printf("%c ",*(r+j));
}
*/

#include<stdio.h>
#include<string.h>

int mygetstrc(char a[],char k);
void mystrpartc(char a[],char r[],char p1,char p2);

int main() {
   char s[] = "abcdefad", r[20]="";
   printf("%s 文字列の%c は%d 番目である。\n",s,'d',mygetstrc(s,'d'));
   mystrpartc(s,r,'b','a');
   printf("%s 文字列の%c と%c の間文字列は%s である。\n",s,'b','a',r);
   
   return 0;
}

int mygetstrc(char a[],char k) {
   int i;
   for(i = 0;a[i] != '\0';i++) {
      if(a[i] == k) {
        return i+1;
      }
    }
}

void mystrpartc(char a[],char r[],char p1,char p2) {
   int i,k,start,end;
   for(i = 0;a[i] != '\0';i++) {
      if(a[i] == p1) {
         start = i+1;
      }
   }
   for(k = start;a[k] != '\0';k++) {
      if(a[i] == p2) {
         end = i;
      }
   }
   for(i = 0;i < end+1;i++,start++) {
      *(r+i) = a[start];
   }
}