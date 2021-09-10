#include<stdio.h>
#include<math.h>
void main(void){
    printf("....::Welcome To Calculator::....\n\n\n");
    printf("This is lower version of calculator,basic operations will avilable in this,no scientific calculation won't be avilable, please wait for the stable version....\n\n\n");
    printf("..............Let's calculate some calculation..............\n\n");
    int num1,num2;
    char sign;
    start:
    scanf("%d %s %d",&num1,&sign,&num2);
    switch(sign){
        case '+':
        printf("%d + %d = %d\n\n\n",num1,num2,num1+num2);
        break;
        case '-':
        printf("%d - %d = %d\n\n\n",num1,num2,num1-num2);
        break;
        case '*':
        printf("%d * %d = %d\n\n\n",num1,num2,num1*num2);
        break;
        case '/':
        printf("%d / %d = %f\n\n\n",num1,num2,(float)num1/num2);
        break;
        case '%':
        printf("%d '%' %d = %d\n\n\n",num1,num2,num1%num2);
        break;
        case '^':
        printf("%d ^ %d = %d\n\n\n",num1,num2,(int)pow(num1,num2));
        break;
        case '&':
        printf("%d & %d = %d\n\n\n",num1,num2,num1&num2);
        break;
        case '|':
        printf("%d | %d = %d\n\n\n",num1,num2,num1|num2);
        break;
        


        default:
        printf("Calculator is under maintanance... This operation will avilable soon.......\n");
    }
    goto start;
}
