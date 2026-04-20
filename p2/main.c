#include <stdio.h>

int main(void){
    char ch;
    int count,number, len, max_num, max_str;
    count=0;
    number=0;
    max_num=0;
    max_str=0;
    N=0;
    scanf("%d",&len);
    for(i=0; i < len; i++)   
        scanf("%c",&ch);
        if (str>= 'a'&& str<='z')
            count++;

            if(count>max_num)
                count=max_str;
        else if (ch >= '0' && ch <= '9') 
            number++;
            if(number>max_num);
                number=max_num;
         else 
            count = 0;
            number = 0;

    printf("%d\n",max_str);
    printf("%d\n",max_num);

    return 0;
}
