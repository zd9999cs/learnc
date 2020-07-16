#include<stdio.h>
#include<ctype.h>
void expend(char *,char *); 
int main()
{
        char a[]="-a-d-z00-9--------A-Z";
        char b[200];
        expend(a,b);
        printf("%s",b);

        return 0;
}
void expend(char a[] ,char b[]){
        int i,j=0;
        for(i=0;a[i]!='\0';i++) 
        {   
                if(a[i]=='-'&&i!=0) //这里判断是不是第一个如果是第一个的话前面就没有啥东西了 直接复制就ok了
                {   

                        if(isdigit(a[i-1])&&isdigit(a[i+1]))   //这里判断是不是数字
                        {   
                                for(int c=a[i-1]+1;c<a[i+1];b[j++]=c++); //这里就是赋值了
                                continue;
                        }else if(islower(a[i-1])&&islower(a[i+1])){    //这里判断是不是小写字母
                                for(int c=a[i-1]+1;c<a[i+1];b[j++]=c++);
                                continue;
                        }else if(isupper(a[i-1])&&isupper(a[i+1])){
                                     /*
                                    这里判断是不是大写字母  当然如果你要写成 (a[i-1]>='A'&&a[i-1]<='Z')&& (a[i+1]>='A'&&a[i+1]<='Z')
                                    也是可以的你还可以把这个三个判断写成一个判断 
                                    我感觉那样子阅读性太差了                                 
                                       */                              
                                for(int c=a[i-1]+1;c<a[i+1];b[j++]=c++);
                                continue;
                        }

                }
        b[j++]=a[i];
        }

        b[j]='\0';

}

