#include<stdio.h>

struct l_time {
   int hour;
   int minute;
   int second;
   
};

int seconds(struct l_time t);
void set(int second,struct l_time* t);

int main() {
   struct l_time t;
   printf("%d",seconds(t));
   second = seconds(t);
   set(seconds(t),t)
   
      
   return 0;
}

int seconds(struct l_time t) {
   return t.hour*3600 + t.minute*60 + t.second;
}

void set(int second,struct l_time* t) {
   int time[3];
   time[0] = second / 3600;
   time[1] = second % 3600 / 60;
   time[2] = secind % 3600 % 60;
}
