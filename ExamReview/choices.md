# C语言复习题库
# 一、单项选择题 
## (1) 语言要素、关键字、常量、变量、标识符
1、一个C语言的语句必须使用的结束符号是 ( A ) \
  A. ；（分号）		B． 。（句号）		C．	：（冒号）		D． ，（逗号） 

2、C语言程序的续行符号是______。( A ) \
  A. \（反斜杠）		B. /（斜杠）		C．+（加号）		D． _（空格+下划线） \


3、______ 必须以分号结尾。(B) \
  A. 结构体声明语句	B. 任何语句			C.	while语句		D．switch语句 \

4、下面是合法的C语言标识符______。 ( A ) \
  A．sum				B．printf			C．2a				D．main \

5、在C语言中，char类型数据在内存中的存储形式是______。 ( A ) \
  A． ASCII码		B．原码				C．补码				D．反码 \

6、以下叙述不正确的是______。 ( A ) \
A．字符型数据与整型数据之间可以通用 \
B．C语言中的字符常量是用一对单引号（’ ’）括起来的单个字符 \
C．字符串常量是用一对双引号(” ”)括起来的字符序列 \
D．为便于判断字符串是否结束，系统会自动在最后一个字符后面加上一个转义字符’\0’ \

7、下列各项中可以正确表示字符型常量的是 ( A ) \
A. ’\n’     		B. ”n”  		C. ”\n”			D. 297 \

8、下列各项中属于正确的字符串常量是（     ）。 ( A ) \
A. “3+2”			B. ‘32\\’			C. ‘\0’			D. ‘0’ \

9、若有 int a=120, b=021; printf(“%d,%d”,a,b); 正确的输出结果是______。 ( D ) \
A．120,17			B．120,18			C．120,19			D．120,21 \

10、（　）是构成C语言程序的基本单位。 ( A ) \
A、函数　　　　B、过程　　　　C、子程序　　　　D、子例程 

11、以下说法中正确的是（　）。 ( A ) \
A、C语言程序总是从main( )函数开始执行 \
B、C语言程序总是从第一个定义的函数开始执行 \
C、在C语言程序中，要调用的函数必须在main( )函数中定义 \
D、C语言程序中的main( )函数必须放在程序的开始部分  

##（2）运算符、表达式
12、在C语言中，运算对象必须是整型数值的运算是______ ( A ) \
A.  %				
B.  \				
C.  %和\				
D.  * 

13、C语言中表示a小于b或小于c的表达式为______。 ( B ) \
A. a<b||a<c	 	
B. a<b||b<c		
C. a<b<c		
D. a<b&&a<c 

14、表达式11&10的结果用二进制表示为（　　）。 (C) \
A. 1010　　　　	B. 3　　　　　		C. 1　　　　　		D. 1011 

15、下列(    　)表达式不满足：当x的值为偶数时值为"真"，为奇数时值"假"。 ( A ) \
A. !x%2!=0　　　　　       　　		
B. x%2==0 \
C. !(x%2)　　　　						
D. (x/2*2-x)==0

16、设a=2,b=5,x=5.5,y=3.5，表达式(a+b)/2+(int)x%(int)y的值为______。 ( 5.5 ) \
A．5				B．4.5				C．4 				D．3.5
 
17、若有定义： int a=8,b=5,c;执行语句c=a/b+2;后 c的值为______。( A ) \
A. 3     			B. 2.0    			C. 2 				D. 1.7 

18、设x=4,y=8，计算表达式y=(x++)*(--y)的值为______。 ( A ) \
A．28	   		B．32				C．35				D．40

19、若printf("%4.2f",1/2+(float)1/2+1.0/2); 正确的输出结果是______。 ( )  \
A．1.00			B．1.50			C．0 				D．4.2				
>
> 

20、若有语句printf(“%d\n”,(int)(1.5+4.0)/3);的输出结果是______。
A. 1				B. 2				C. 0 			D. 有语法错误不能通过编译
21、若变量c为char类型，能正确判断出c为小写字母的表达式是______。
A. (c>='a')&&(c<='z')        		B. (c>='a')||(c<='z')
C. 'a'<=c<='z'                		D. ('a'<=c)and('z'>=c)
22、设已定义int k=7,x=12;，则能使值为0的表达式是______。
A. 	x%=(k%=5)		B. x%=(k-k%5)		C.  x%=k-k%5		D. (x%=k)-(k%=5)

（3）控制结构
23、要将交换两个变量x、y的值，可以借助第三个变量t，正确的语句是______。
A. t=y; y=x; x=t;					B. y=x; t=y; x=t;
C. x=y; t=x; y=t;					D. t=y; x=y; y=t;  
24、语句:scanf(“a=%d,b=%d”,&a,&b);从键盘输入数据的正确格式是______。
A.a=3,b=5〈回车〉         				B. a=3 b=5〈回车〉
C.3  5〈回车〉                 			D. 3,5〈回车〉   
25、设有定义:int　m=1,n=-1;则执行语句printf("%d\n",(m--&++n);后的输出结果是(　　)。
A. 0				B. 1				C. 2 		D. –1    			
26、若分支结构的某个分支需要多个语句时，可以使用复合语句，所谓复合语句是指______。
A．用“{}”括起来的多个语句	B．一个语句			C．多个语句		D．两个语句
27、为了避免嵌套的条件分支语句if-else的二义性，C语言规定：C程序中的else总是与______组成配对关系。
A. 在其之前未配对的最近的if			B. 缩排位置相同的if
C. 在其之前未配对的if					D. 同一行上的if
28、下面程序运行情况是（   ）。
#include <stdio.h>
void main()
{ int  x=3,y=1,z=0;
if (x==y+z)
printf(“####”);
else
printf(“****”);
}
A. 输出****					B. 有语法错误不能通过编译
C. 输出####					D. 可以通过编译，但不能通过连接，因而不能运行
29、有以下程序，输出结果是______。
main()
{ int a=-2,b;
b=(a>=0)?a:-a;
printf("b=%d\n",b);}
A．b=2				B．b=1				C．b=0				D．b=-2
30、以下程序的输出结果是______。
main()
{int a=5,b=4,c=6;
printf("%d\n",a>b?(a>c?a:c):b);}
A．6				B．5				C．4				D．不确定
31、while循环语句中，一定要有能使while后面的一对圆括号中表达式的值为________的操作，否则，循环将会无限制地进行下去。
A. 0				B. 1				C. 2				D.真
32、以下程序的输出结果为（    ）。
#include <stdio.h>
main()
{  int i;
for (i=0;i<10; i++)
printf("%d",i);
}
A. 0123456789		B. 123456789		C. 10				D. 0
33、有以下程序，输出结果是______。
main()
{int i,k,sum=0;
for(i=1,k=5;i<=k;i++,k--)
sum=sum+i*k;
printf("%d\n",sum);
}
A. 22  	   		B. 35				C. 5 				D. 0
34、以下程序段的输出结果是______。
int i=0,j=0,k;
for(k=0;k<5;k++)
{ if(k%2>0)  {i++;continue;}
j++;
}
printf("i=%d,j=%d\n",i,j);
}
A. i=2,j=3		B. i=5,j=5		C. i=1,j=1		D. i=1,j=0
35、有以下程序，输出结果是______。
main()
{int x=1;
while(x++<=4)  printf("%d",x);}
A.2345				B. 1234			C. 3456			D.无结果

（4）数组、字符串
36、下列选项中，正确的一组语句是______。
A．char a=’M’;	B．char b=’55’;	C．char c=”M”;	D．char d=”55”;
37、以下能对一维数组a进行初始化的语句是(　)。
A、 int a[5]=(0,1,2,3,4,); 			B、int a(5)={};
C、 int a[3]={0,1,2};       			D、int a{5}={10*1};
38、若有以下数组说明，则i=8;a[a[i]]元素数值是（　）。
int a[12]={1,4,7,10,2,5,8,11,3,6,9,12};
A、10          B、9           C、6           D、5
39、若有说明：int a[][3]={{1,2,3},{4,5},{6,7}}; 则数组a的第一维的大小为(　)。
A、  3     　　B、  4     　　C、2   　　　　D、无确定值
40、已知char x[]="hello", y[]={'h','e','a','b','e'};, 则关于两个数组长度的正确描述是（　）。
A、x大于y　　　　　B、x小于y　　　　　C、相同　　　　　　　D、以上答案都不对
41、如下的程序片段实现的功能是（　）。
void swap(int *a,int i,int j){
a[i]+=a[j]; a[j]=a[i]-a[j]; a[i]=a[i]-a[j];
return;
}
A、a[i]与a[j]的值的交换					B、a[i]与a[j]的地址的交换
C、i与j的地址的交换						D、以上答案都不对
42、有以下程序，输出结果是______。
main()
{int p[7]={11,13,14,15,16,17,18},i=0,k=0;
while(i<7&&p[i]%2)
{k=k+p[i];
i++;}
printf(“%d\n”,k);
A. 24				B. 45				C. 56				D.58
43、如下的排序函数实现的排序法是（　）。
int sort(int s[],int Length){
int tmp=0;
for(int i=0;i<=Length-2;i++) {
for(int j=0;j<=Length-i-2;j++)
if(s[j]>=s[j+1]){
tmp=s[j];s[j]=s[j+1];s[j+1]=tmp;
}
}
return 0;
}
A、冒泡排序法（升序）						B、直接选择排序法（升序）
C、插入排序法（降序）						D、以上答案都不对

（5）函数
44、在C语言中进行函数调用时，以下说法正确的是（　）。
A、实际参数和形式参数可以同名　　　　　B、函数调用后必须带回返回值
C、函数间的数据传递不可以使用全局变量　D、主调函数和被调函数总是在同一个文件里
45、如下的程序片段完成乘法和加法的次数分别是（　）。
#include <stdio.h>
int fun(int n);
void main () {
int num = 1;
for (int i = 1; i <= 10; i++)
num += fun(i);
printf("%d", num);}
int fun (int n){
if (n <= 1)
return 1;
else
return n * fun(n - 1);}
A、45   10						B、55  19
C、90   9						D、45  19
46、关于C语言，当使用简单变量作为函数参数时，以下说法正确的是______。
A．实参和与其对应的形参各占用独立的存储单元
B．实参和与其对应的形参共用存储单元
C．由计算机系统自动确定是否共用存储单元
D．形参是虚拟的,不占用存储单元
47、关于C语言，以下说法正确的是______。
A. C语言中的宏既可以带参数也可以不带参数
B. C语言中的函数既可以嵌套定义又可以嵌套调用
C. 函数必须有返回值，否则函数将无法使用
D. 主函数只能在其他函数之前定义
48、有以下程序，输出结果是______。
int fun(int x,int y)
{return  x>y?x:y;}
main()
{int a=2,b=5,c=8;
printf("%d\n",fun(fun(a,b),c));
}
A．8				B．5				C．2				D．0