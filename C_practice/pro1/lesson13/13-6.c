#include<stdio.h>

typedef struct complex_number {
    float a;
    float b;
}complex_number_type;

complex_number_type add_complex(complex_number_type *pa,complex_number_type *pb);

int main() {
    complex_number_type num[2],total;
    int not_input_zero = 1;
    while(not_input_zero) {
        for(int i = 0;i < 2;i++) {
            printf("%dつ目の複素数\n",i+1);
            printf("実部＝");
            scanf("%f",&num[i].a);
            printf("虚部＝");
            scanf("%f",&num[i].b);
            if(num[i].a == 0 && num[i].b == 0) {
                not_input_zero = 0;
            }
        }
        if(not_input_zero != 0) {
            total = add_complex(&num[0],&num[1]);
            printf("(%1.2f+%1.2fi)+(%1.2f+%1.2fi)=(%1.2f+%1.2fi)\n",num[0].a,num[0].b,num[1].a,num[1].b,total.a,total.b);
        }
    }

}

complex_number_type add_complex(complex_number_type *pa,complex_number_type *pb) {
    complex_number_type total;
    total.a = pa->a + pb->a;
    total.b = pa->b + pb->b;
    return total;
} 
