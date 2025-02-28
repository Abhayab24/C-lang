//#include<stdio.h>
    //int main() {
        // int age;
        // printf("enter age");
        // scanf("%d",&age);
        // printf("age is : %d",age);
        // return 0;
        // int a,b;
        // printf("enter a");
        // scanf("%d",&a);

        // printf("enter b");
        // scanf("%d",&b);

        // int sum =  a + b;
        // printf("sum is : %d",sum);
        // return 0;
        // char name[] = "Abhay";
        // printf("my name is %s\n",name);
       /*calculate area of square*/
    //    int side;
    //    printf("side");
    //    scanf("%d",&side);
    //    printf("area is : %d",side*side);
    //area of rectangle below
    // int side1;
    // printf("side1");
    // scanf("%d",&side1);
    // int side2;
    // printf("side2");
    // scanf("%d",&side2);
    // printf("area is : %d",side1*side2);
    //  printf("%f",3.0*2);  used for float *int
    // int a= (int) 1.999999;
    // printf("%d\n",a); converting float into int 
    // int a=5*3/3*5;
    // printf("%d \n",a); (operator precedence)
    // int x;
    // printf("enter a number : ");
    // scanf("%d",&x);
    // printf("divisible by 2 : %d", x % 2==0);
    // const int a = 10;
    // int b = 20;
    // b=a;
    // printf("%d",b);
    // int a = 15, b=4;
    // printf("%d",a/b);
    // int a = 5 ,b = 6;
    // a=a+b-(b=a);
    // printf("%d %d",a,b);
    // int age =10;
    // printf("enter age");
    // scanf("%d",&age);
    // if(age>18){
    //     printf("adult\n");
    //     printf("they can vote \n");
    // }
    // else{
    //     printf("not adult \n");
    // }
    // printf("thank you");

        // int a,b;
        // printf("enter the value of a and b \n");
        // scanf("%d%d",&a,&b);
        // printf("a and b are %d %d",a,b);
    // float b,h;
    // printf("enter the value of b and h \n");
    // scanf("%f%f",&b,&h);
    // printf("area of triangle: %f",0.5*b*h);
    //program to swap 2 variables by using third variable input should taken from the user
    // int a,b,c;
    // scanf("%d%d",&a,&b);
    // c=a;
    // a=b;
    // b=c;
    // printf("After swap a and b are %d %d",a,b);
    // #include <stdio.h>

    // int x = 7; // 0111 in binary
    // int y = x & 2;
    // printf("%d", y);
    // return 0;
// // 
//     int k = 8;
//     int m = 7;
//     (k < m) || (k = k + 1);
//     (! (k < m)) || (m = m + 1);
//     printf("%d", k);
//     return 0;
    /*to find positive ,negative and zero using ternary operator*/
//     int n;
//     scanf("%d",&n);
//     n>0?printf("The number is positive"):n<0?printf("the number is negative"):printf("the number is zero");
//     return 0;
    // float a,b;
    // printf("enter a number: ");
    // scanf("%f",&a);
    // b=cbrt(a);
    // printf("%.3f",b);
    // return 0;
     
    // int day = 2; 
    // switch (day * 2) { 
    //     case 2: 
    //         printf("Tuesday "); 
    //     case 4: 
    //         printf("Thursday "); 
    //     default: 
    //         printf("Weekday "); 
    // } 
    // return 0; 
   
    // for (int i = 5; i > 0; i--) { 
    //     int j = i; 
    //     while (j > 0) { 
    //         printf("%d ", j); 
    //         j--; 
    //     } 
    //     if (i % 2 == 0) { 
    //         printf("EVEN "); 
    //     } else { 
    //         printf("ODD "); 
    //     } 
    // } 
    // return 0; 
    
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("a is greater\n");
        
//     }
//     else{
//         printf("b is greater\n");
//     }
// printf("hii\n");
//check whether no. is even or odd
// int a;
// scanf("%d",&a);
// if(a%2==0){
//     printf("number is even\n");
// }
// else{
//     printf("number is odd");
// }
//to find greatest of three no.
// int a,b,c;
// scanf("%d%d%d",&a,&b,&c);
// if(a>b&&a>c){
//     printf("a is greater");
// }
// else if(b>a&&b>c){
//     printf("b is greater");
// }
// else{
//     printf("c is greater");
// }
// to check whether a char is vowel
// char ch;
// scanf("%c",&ch);
// if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
// printf("ch is vowel");
// else
// printf("ch is not vowel");
//check whether char is lowercase or uppercase or not a char
// char ch;
// scanf("%c",&ch);
// if(ch>='a' && ch<='z')
// printf("ch is small case letter");
// else if(ch>='A' && ch<='Z')
// printf("ch is upper case letter");
// else
// printf("ch is not a letter");
//write a program to convert a letter from lower to upper
// char ch;
// scanf("%c",&ch);
// if(ch>='a' && ch<='z')
// ch=ch-32;
// printf("ch is upper case is %c",ch);
//use of switch case
// int a,b,c;
// scanf("%d%d%d",&a,&b,&c);
// switch(c)
// {
//     case 1:
//         printf("sum is %d",a+b);
//         break;
//     case 2:
//         printf("sub is %d",a-b);
//         break;
//     case 3:
//         printf("mul is %d",a*b);
//         break;
//     case 4:
//         printf("div is %d",a/b);
//         break;
//     default:
//         printf("nothing");


// }
//to explain nested if
// int a;
// scanf("%d",&a);
// if(a>0){
//     if(a%3==0)
//     printf("a is positive and divisible by 3");
//     else
//     printf(" a is positive and not divisble by 3");
// }
// else
// printf("a is negative");
/*looops:a loop is used tp repeat a certain set of statement for specific no of time
while loop
syntax:while(condition){
    //statement
}*/
// int x=1;
// while(x<=10){
//     printf("hello world\n");
//     x++;

// }
// int x=1;
// while(x<=10){
//     printf("%d\n",x);
//     x++;

// }
//multiplication table of a number upto 10 using while
// int x,i=1;
// scanf("%d",&x);
// while(i<=10){
//     printf("%d*%d=%d\n",x,i,x*i);
//     i++;

// }
//program to find sum of all numbers from 1 to 50
// int x=1,sum=0;
// while(x<=50){
//     sum=sum+x;
//     x++;

  
// }  printf("sum is %d\n",sum);

//program to find factorial of a no.
// int n,f=1;
// scanf("%d",&n);
// while(n !=0)
// {
//     f=f*n;
//     n--;

// }    
// printf("%d",f);
//program  to print sum of all even and odd no separetely from 1 to 100 using while loop
// int x=1,sum_even=0,sum_odd=0;
// while(x<=100){
//     if(x%2==0)
//     sum_even=sum_even+x;
//     else
//     sum_odd=sum_odd+x;
// x++;

// }
// printf("sum of even no %d ",sum_even);
// printf("\nsum of odd no.%d ",sum_odd);
//to print revrese of a no. using while loop 
// int n,t,rev=0;
// scanf("%d",&n);
// while(n!=0)
//     t=n%10;
//     rev=rev*10+t;
//     n=n/10;
// }
// printf("reverse is %d",rev);
//to check whether a no is palindrom number or not eg 121,151 are palindrome
// #include <stdio.h>
// int main(){
// int n,t,rev=0,temp;
// scanf("%d",&n);
// temp=n;
// while(n!=0){
//     t=n%10;
//     rev=rev*10+t;
//     n=n/10;
// }
// if(rev==temp)
// printf("no is palindrome");
// else
// printf("no is not palindrome");
// }
//to count the no. of digit in a no.
// int n,count=0;
// scanf("%d",&n);
// while(n!=0)
// {
//     count++;
//     n=n/10;

// }
// printf("no. of digit are %d",count);
//program to check whether a 3 digit no is an armstrong no or not
// #include <stdio.h>
// int main(){
// int n,arm=0,t,temp;
// scanf("%d",&n);
// temp=n;
// while(n!=0)
// {
//     t=n%10;
//     arm+=t*t*t;
//     n=n/10;


   

// }
// if(arm==temp)
// printf("no is armstrong");
// else
// printf("no is not armstrong");
// }
//fibonacci series
// int a=0,b=1,c,n,i=2;
// scanf("%d",&n);
// printf("%d %d",a,b);
// while(i<n){
//     c=a+b;
//     printf(" %d",c);
//     a=b;
//     b=c;
//     i++;
// }
//to check whether a number is prime or not
// int f=1,n,i=2;
// scanf("%d",&n);

// while(i<=n/2){
//     if(n%i==0)
//     {
//         f=0;
//         break;
//     }
// i++;
// }
// if(f==1)
// printf("no is prime");
// else
// printf("no is not prime");
//program to print sum of all number from 1 to 100 which are divisible by 5
// int sum=0,n=1;
// while(n<=100){
//     if(n%5==0)
//     sum+=n;
// n++;
// }
// printf("sum is %d",sum);
//for loop "";"" its mandatory
// int x;
// for(x=20;x<=40;x++){
//     printf("%d\n",x);
// }
// int x;
// for(x=20;x<=40;x++){
//     printf("%d\n",x);

// }
//reverse of number
// int n,t,rev=0;
// scanf("%d",&n);
// for(;n!=0;n=n/10){
//     t=n%10;
//     rev=rev*10+t;
// }
// printf("reverse is %d",rev);
// to print factorial no by using for loop
// int n,f=1;
// scanf("%d",&n);
// for(;n!=0;n--){
//     f=f*n;

// }printf("factoial is %d",f);
//print all armstrong no form 100 to 999
// int n,arm,x,t;
// for(n=100;n<=999;n++){
//     x=n;
//     arm=0;
//     while(x!=0){
//         t=x%10;
//         arm=arm+t*t*t;
//         x=x/10;

//     }if(arm==n)
//     printf("%d\n",n);
// }
//factorial of all number from 1 to 15
//long int n,x,f;
// for(n=1;n<=15;n++){
//     x=n;
//     f=1;
//     while(x!=0){
//         f=f*x;
//         x--;

//     }printf("factorial is %d\n",f);
// }
//program to print even and odd divisor of a number using for loop
// int n,i;
// scanf("%d",&n);
// printf("Even divisor are: ");
// for (i=1;i<n;i++){
//     if(n%i==0){
//         if(i%2==0){

        
//         printf("%d ",i);
//         }
//     }
// }
// printf("\nodd divisor are: ");
// for (i=1;i<n;i++){
//     if(n%i==0){
//         if(i%2!=0){

        
//         printf("%d ",i);
//         }
//     }
// }





// }
// digital root and nuber of steps
//   int x,y,sum=10,j,m=0;
//   scanf("%d",&x);
//   for(j=0;sum>9;j++){
//     sum=0;
//   for(int i=1;x>0;i++){
//     y=x%10;
//     sum+=y;
//     x=x/10; 
//   }
//     if(sum>9){
//       x=sum;
//     }
//     m=m+1;
//   }
//   printf("digital root %d\n",sum);
//   printf("\nnumber of steps %d",m); 

//to check whether num is perfect number or not
// int n,i,sum=0;
// scanf("%d",&n);
// for(i=1;i<n;i++){
//     if(n%i==0){
//         sum=sum+i;
//     }
// }
// if(sum==n)
// printf("%d is perfect number",n);
// else
// printf("%d is not perfect number",n);




//print perfect number from 1 to 1000 
// int i,j,n,sum;
// for(i=1;i<=1000;i++){
//     n=i;
//     sum=0;
//     for(j=1;j<n;j++){
//         if(n%j==0)
//         sum=sum+j;
//     }
//     if(sum==i)
//     printf("%d\n",i);


//}
// int marks;
// scanf("%d",&marks);
// if(marks>=90){
//     printf("A");

// }
// else if(marks>=80 && marks<=89){
//     printf("B");
// }
// else if(marks>=70 && marks<=79){
//     printf("C");
// }
// else if(marks>=60&& marks<=69){
//     printf("D");
// }
// else if(marks=45 && 59){
//     printf("E");

// }
// else{
//     printf("F");
//}
//simple calculator 
// int n1,n2,res=0;
// char ch;
// scanf("%c",&ch);
// scanf("%d",&n1);
// scanf("%d",&n2);
// switch(ch){
//     case '+':
//     res=n1+n2;
//     break;
//     case '-':
//     res=n1-n2;
//     break;
//     case '*':
//     res=n1*n2;
//     break;
//     case '/':
//     res=n1/n2;
//     break;
//     default:
//     printf("invalid");
//     return 0;

// }
// printf("%d",res);
//do while......known as exit control loop
//while is known as entry control loop
// int x=1,sum1=0,sum2=0;
// do
// {
//     if(x%2==0)
//         sum1+=x;
    
//     else
//     sum2+=x;
//     x++ ;
// }
// while(x<=100);
// printf("sum of even %d",sum1);
// printf("\n sum of odd %d",sum2);




// palindrome no. using do while
// int n,rev=0,temp,t;
// scanf("%d",&n);
// temp=n;
// do{
//     t=n%10;
//     rev=rev*10+t;
//     n=n/10;
// }while(n!=0);
// if(rev==temp)
// printf("no is palindrome");
// else
// printf("no is not palindrome");




//to check whether a number is a perfect number or not 
// int n,i=1,sum=0;
// scanf("%d",&n);
// do{
//     if(n%i==0)
//     sum+=i;
//     i++;

// }while(i<n);
// if(sum==n)
// printf("no is perfect");
// else
// printf("no is not perfect no.");





//to print divisors of a number using do while loop
// int n,i=1;
// scanf("%d",&n);
// do{
//     if(n%i==0)
//     printf("%d ",i);
//     i++;

// }while(i<=n);




//break and continue 
//break is used to terminate a loop we use break keyword and it is normally break the loop when a particular condition is satisfied




// int i;
// for(i=1;i<=10;i++)
// {
//     if(i==5)
//     printf("%d",i);
//     break;
// }printf("%d",i);





// int i=1,j=1;
// for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         if(i==j)
//         break;
//         printf(" %d %d\n ",i,j);
//     }
// }






//continue....will allow us to move the skipping 

//int i,temp;
// scanf("%d",&temp);
// for ( i = 1; i < 10; i++)
// {
//     if(i%2!=0)
//     continue;
//     printf("%d ",i);
// }



//  int x = 0, y = 0;
//     for (x = 0;x < 9; x++){
//         for (y = 0;y < 4; y++) {
//             if (x > 1)
              
//             break;

         
//         }
//          printf("Bob ");
        
//     int i = 0;

// loop:
//     if (i == 3)
//         goto end;

//     i++;

//     if (i < 5)
//         goto loop;

// end:
//     printf("%d", i);
//     return 0;
    



    // int n = 100;

    // if (n < 103) {
    //     fun:
    //         printf("%d", n);
    //         goto fun;
    // }

    // return 0;

    // int n,f=1;
    // scanf("%d",&n);
    // for(;n!=0;n--)
    // {
    //     f=f*n;
       
    // }printf("%d",f);
    // double b = 5 & 3 && 4 || 5 | 6;
    //     printf("%lf", b);
    //     return 0;
        //     int b = 4 * 6 + 3 * 4 < 3 ? 4 : 3;
        // printf("%d\n", b);
    //}
 
 
 
 
 
 
 //function: a function is a set of indtruction or statements that are put together and given a name we need to call a function when we want to use it
 /*1. function declaration 
 return_type function_name(argument)
 2. function definition
    return_type function_name(argument)
3. function call
 return_type*/
// void add();
// int main(){
//  add();
//  printf("\n");
//  add();
// } 
//   void add()  {
//     int a,b,c;
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("sum is %d",c);
//   }

// to find greatest of all three number by using function with no arg.
// void greatest()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c)
//     printf("a is greatest");
//     else if(b>c)
//     printf("b is greatest");
//     else
//     printf("c is greatest");
// }
// int main()
// {
//     greatest();
// }





//function with return type but no argument'
// int sum()
// {
//     int a,b,c;
//     scanf("%d%d",&a,&b);
   
//     return  a+b;

// }
// int main()
// {
//     printf("sum is %d",sum());

// }

//program to calculate simple interest by using function witn return type but no arguments

    // double interest()
    // {
    //     double a,b,c;
    //     scanf("%lf%lf%lf",&a,&b,&c);
    //     return (a*b*c)/100;

    // }
    // int main()
    // {
    //     printf("simple ineterest %.2lf",interest());

    // }





    //program to find factorial of a number by using function with return type and no argument

    // long int factorial()
    // {
    //     int n,f=1;
    //     scanf("%d",&n);
    //     while(n!=0)
    //     {
    //         f=f*n;
    //         n--;
    //     }
    //     return f;

    // }
    // int main()
    // {
    //     printf("factorial is %d", factorial());
    // }




// program to return 1 if number is perfect number  or return 0 if number is not perfect number
// int perfect()
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i!=n;i++)
//     {
//         if(n%i==0)
//         sum=sum+i;
//     }
//     if(sum==n)
//     return 1;
//     else
//     return 0;
// }
// int main()
// {
//     printf("%d",perfect());
// }



//function with no return type(use void if no return type) but argument
// void sum(int a, int b)
// {
//     printf("sum is %d",a+b);

// }
// int main()
// {
//     sum(12,34);
//     int a,b;
//        printf("\n");
//     scanf("%d%d",&a,&b);
 


//     sum(a,b);

// }



//program to calculate simple interest by using function with no return type but argument
  
//   void check(double a, double b, double c)
//   {
//     printf("interest is %lf",(a*b*c)/100);
//   }
//   int main(){
//     double a,b,c;
//     scanf("%lf%lf%lf",&a,&b,&c);
//     check(a,b,c);
//   }




//program to print area and circumfrence of a circle by using function with no return type but argument
// void area(float a)
// {
//     printf("area is %f",3.14*a*a);
// }
// void circum(float a)
// {
//     printf("circumference is %f",2*3.14*a);
// }
// int main()
// {
//     char ch;
//     float a;
//     scanf("%c",&ch);
//     switch(ch)
//     {
//         case 'a':
//         scanf("%f",&a);
//         area(a);
//         break;
//         case 'b':
//         scanf("%f",&a);
//         circum(a);
//         break;
//         default:
//         printf("invalid");

//     }
    
// }


// int main() {
//   int n,x,y;
//   scanf("%d",&n);
//   while(n!=0){
//       scanf("%d%d",&x,&y);
//       if(x>y){
//       printf("s\n");
//          break;}
//       else if(x==y){
//       printf("tie\n");
//         break;}
//       else{
//       printf("brenda\n");}
//       n--;
   
//   }

// }




//function with return type as well as argument 
// int add(int a, int b)
// {
//     return (a+b);
// }
// int main()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("Sum is %d",add(a,b));

// }



//to return simple interest by using function with return as well as argument
// double interest(double a,double b,double c)
// {
//     return (a*b*c)/100;
// }
// int main()
// {
//     double a,b,c;
//     scanf("%lf%lf%lf",&a,&b,&c);
//     printf("simple interest is: %.2lf",interest(a,b,c));

// }



//program to return the greatest of 3 numbers usng function with no argument but return type
// int greatest()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b&&a>c)
//     return a;
//     else if(b>a&&b>c)
//     return b;
//     else
//     return c;

// }
// int main()
// {
//     printf("greatest: %d",greatest());
// }





//program to check whether a number is prime number or not by using function return type and argument
// int prime(int n)
// {
    
   
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0)
//         return 0;
       
//     }
//     return 1;
// }
// int main()
// {
//     int n,check; 
//     scanf("%d",&n);
//     check=prime(n);
//     if(check==1)
//     printf("prime");
//     else
//     printf("not prime");

// }





//program to find factorial of number by using function with return type and argument
// int factorial(int n)
// {
//     int f=1;
//     while(n!=0)
//     {
//         f=f*n;
//         n--;

//     }return f;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("factorial is: %d",factorial(n));
// }




//program to find reverse of a number 
// int reverse(int n)
// {
//     int rev=0,temp;
//     temp=n;
//     while(n!=0)
//     {
//         temp=n%10;
//         rev=rev*10+temp;
//         n=n/10;
//     }return rev;

// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("reverse is: %d",reverse(n));
// }





// program to find palindrome by not  using  return type but argument
// #include <stdio.h>
// void palindrome(int n)
// {
//     int rev=0,temp;
//     do
//     {
//         temp=n%10;
//         rev=rev*10+temp;
//         n=n/10;
//     }while(n!=0);
       
// }
      

// int main()
// {
//  int n,rev,temp;
//  scanf("%d",&n);
//        if(rev==temp)
//        printf("its a palindrome");
//        else
//        printf("not a palindrome");
// }
// #include <stdio.h>

// int main() {
//     float x = 3.5f, y = 2.2f;
//     double z;
//     z = (double)(x * (y - 1));

//     printf("%.2lf", z);
    
//     return 0;
// }




//call by value and call by address
//in call by value, we pass the value of the argument in this case any changes made to formal argument will not be refelected in actual argument
// void swap(int x,int y )
// {
//     int c;
//     c=x;
//     x=y;
//     y=c;


// }
// int main()
// {
//     int x=12,y=34;
//     printf("values before swap are %d %d",x,y);
//     swap(x,y);
//     printf("value after swap %d %d",x,y);

// }



//call by address/pointer/reference we pass the address of arguments in this case any changes made to formal argument will effect the actual one
// void swap(int *x,int *y )
// {
//     int c;
//     c= *x;
//     *x= *y;
//     *y=c;


// }
// int main()
// {
//     int x=12,y=34;
//     printf("values before swap are %d %d",x,y);
//     swap(&x,&y);
//     printf("\nvalue after swap %d %d",x,y);

// }



// void increase(int x)
// {
//     x=x+1;

// }
// int main()
// {
//     int x=12;
//     printf("x before increase is %d",x);
//     increase(x);
//     printf("x after swap is %d",x);
// }






// void increase(int *x)
// {
//     *x=*x+1;

// }
// int main()
// {
//     int x=12;
//     printf("x before increase is %d",x);
//     increase(&x);
//     printf("\nx after increase is %d",x);
// }





//recursion 


/*recursion is a process in which a function must call itself again and again util a task is performed,there must be a base case or base condition at which recursoin
should stop in the absence of the base case/condition recursion will go in infinite condition

finding factorial of a number by using recursion*/


// long long factorial(int n)
// {
//     if(n==0||n==1)
//     return 1;
//     else
//     return n*factorial(n-1);
// }
// int main()
// {
//     long int x;
//     scanf("%ld",&x);
//     printf("factorial is %ld",factorial(x));
// }




//to count the number of digit in a number by using recursion eg. if number is 856 then output is 3
// #include <stdio.h>
// int count=0;
// int count_digit(int n)
// {
//     if(n==0||n==1)
//     return 1;
//     else
//     {
//         count++;
//         count_digit(n/10);
//     }
//     return count;
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     printf("number of digits are %d",count_digit(x));
// }




//to reverse a number using recursion
// int rev=0;
// int temp;
// int reverse(int n)
// {
//     if(n!=0)
//     {
        
//     temp=n%10;
//     rev=rev*10+temp;
//     reverse(n/10);
//     }
//     else
//     return rev;
// }
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     printf("reverse number is %d",reverse(x));
// }





//to print the fibonacci series upto 'n' by using recursion 
// int a=0;
// int b=1;
// int fibb(int n)
// {
//     if(n==1)
//     return 0;
//     else if(n==2)
//     return 1;
//     else
//     return (fibb(n-1)+fibb(n-2));
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     printf("%d ",fibb(i));
// }




// #include <stdio.h> 

// double A(); // Function declaration 

// int main() { 

//     int n = 5; 

//     printf("%.2lf", A()); 

//     return 0; 

// } 

// double A() { 

//     double sum = 0.0; 

//       for (int i = 1; i <= 5; i++) { 

//         sum += 1.0 / i; 

//     } 

//     return sum; 

// } 




// #include <stdio.h> 

// void calc(double m, double a, double* f) { 

//     *f = m * a; 

// } 

// int main() { 

//     double m = 10.5, a = 9.8, f; 

//     calc(m, a, &f); 

//     printf("%.2lf N", f); 

//     return 0; 

// } 




// #include <stdio.h>

// void m(int p) {
//     printf("%d ", p);
// }

// int main() {
//     int a = 6, b = 5;
//     m(a);
//     m(b);
//     printf("%d %d ", a, b);
//     return 0;
// }


// #include <stdio.h>
    
// int multiply (int ch) {
//     if ( ch >= 4000)
//     return (ch / 10);
//     else
//     return (10);
// }

// int main() {
//     int i = 871, c;
//     c = multiply (i * 1000);
//     printf ("%d", c);
//     return 0;
// }




/* 2 d arrays : a 2d array is a collection of homogeneous elements in which all the elenment are arranged in the form
 of rows and columns syntax to declare a 2d array */


//#include <stdio.h>
// int main(){
//     int a[3][3],i,j;
//     for(i=0;i<=2;i++)//number of rows
//     {
//         for(j=0;j<=2;j++)//number of col
//         {
//             scanf("%d",&a[i][j]);
//         }
     
//     }
//      for(i=0;i<=2;i++)//number of rows
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d",a[i] [j]);
//         }
//         printf("\n");
     
//     }
// }


//matrix of any
// #include <stdio.h>
// int main(){
//     int r,c,i,j;
//     scanf("%d%d",&r,&c);
//     int a[r][c];
//     for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//  for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }





//sum of first and last digit of matrix
// #include <stdio.h>
// int main(){
//     int r,c,i,j;
//     scanf("%d%d",&r,&c);
//     int a[r][c];
//     for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//  for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             printf(" %d ",a[i][j]);
//         }

//         printf("\n");
//     }
//     printf("sum of first and last:%d",a[0][0]+a[r-1][c-1]);
// }




//program to input an array of 'r' rows amd columns 'c' update the array by replace all the even elements by 0 and odd elements by 1
// #include <stdio.h>
// int main(){
//     int r,c,i,j;
//     scanf("%d%d",&r,&c);
//     int a[r][c];
//     for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
    
//  for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             if (a[i][j]%2==0)
//             a[i][j]=0;
//             else
//             a[i][j]=1;
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");

//     }
// }


//program to input a 2 d array of 3 rows and 3 columns calculate and print the sum of left diagonal elements mtlb ki trace niklna h....
// #include <stdio.h>
// int main()
// {
//         int i,j,sum=0;
    
//     int a[3][3];
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&a[i][j]);
//             if(i==j)
//             sum=sum+a[i][j];

//         }
//     }
//     printf("sum of left diagonal elements is %d",sum);
// }





//program to take input of 3 by 3 matrix and replace all the non left diagonal elements by 0 if they are even
// #include <stdio.h>
// int main()
// {
//         int i,j,new;
    
//     int a[3][3];
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
            
            

//         }
//         // printf("\n");
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//      for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {   
//             if(i!=0){
//                 if(a[i][j]%2==0)
//                 new=a[i][j]=0;
//             }
//             printf("%d ",new);
//         }
//         printf("\n");
//     }

// }
    


//program to take input of 2,3 by 3 matrices and print their sum
// #include <stdio.h>
// int main(){
//     int a[3][3],b[3][3],sum[3][3],i,j;
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
        
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
        
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             sum[i][j]=a[i][j]+b[i][j];
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");

        
//     }

// }




//program to input two matrices multiplication 

// #include <stdio.h>
// int main(){
//     int a[3][3],b[3][3],mul[3][3],i,j,k;
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
        
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
        
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             mul[i][j]=0;
//             for(k=0;k<=2;k++)
//             {
//                 mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
                
//             }
//             printf("%d ",mul[i][j]);
//         }
//         printf("\n");
//     }
// }



//program to take input of 'n' element in a 1 d array and insert a new element at a specific location in that array
// #include <stdio.h>
// int main(){
//     int n,i,ele,loc,j;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<=n-1;i++)
//     scanf("%d",&a[i]);
//     scanf("%d%d",&ele,&loc);
//     j=n-1;
//     while(j>=loc){
//         a[j+1]=a[j];
//         j--;

//     }
//     a[loc]=ele;
//     printf("\n");
//     for(i=0;i<=n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }


//deleting an element from array 

// #include <stdio.h>
// int main(){
//     int n,i,j,loc;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]); 
//     scanf("%d",&loc);
//     j=loc;
//     while(j<n-1)
//     {
//         a[j]=a[j+1];
//         j++;

//     }
//     for(i=0;i<n-1;i++)
//     printf("%d ",a[i]);
// }

//linear search linear search is a searching technique for finding an  elemnent in an arraY of 'n' element linear search works by comparing the
//elemnt to search with all the element of array one by one until element found or we reached at the end of array

// #include <stdio.h>
// int main()
// {
//     int n,i,ele,flag=0;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<=n-1;i++)
//     scanf("%d",&a[i]);
    
    
//     scanf("%d",&ele);
//     for(i=0;i<=n-1;i++)
//     {
//         if(ele==a[i])
//         {
//         flag=1;
//         break;
//         }

//     }
//     if(flag==1)
//     printf("element found at location %d",i+1);
//     else
//     printf("element not found");


// }


/*bubble sort: bubble sort is a sorting tehnique for arranging the elements of an array either in increasing or decreasing order, buble sort 
works by comparing the adjacent elements with each element with each swapping them if they are not in correct order */


// #include<stdio.h>
// int main(){
//     int n,i,t,j;
//     int a[n];
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);

//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;

//             }

//         }
//     }
//     for(i=0;i<n;i++)
//     printf("%d ",a[i]);
// }


//intialization of 1d and 2 d array

// #include <stdio.h>
// int main(){
//     int a[5]={12,3,45,6,78},i;
//     for(i=0;i<=4;i++)
//     {
//         printf("%d ",a[i]);
        
//     }
// }
// #include <stdio.h>
// int main(){
//     int a[]={12,3,45,6,78},i;
//     for(i=0;i<=4;i++)
//     {
//         printf("%d ",a[i]);
        
//     }
// }



//initialize 2 d array
// #include <stdio.h>
// int main()
// {
// int a[2][2]={12,34,56,78};
// int i,j;
// for(i=0;i<2;i++)
// {
//     for(j=0;j<2;j++)
//     {
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }
// }




// #include <stdio.h>
// int main()
// {
// int a[2][2]={{12},{56,78}};
// int i,j;
// for(i=0;i<2;i++)
// {
//     for(j=0;j<2;j++)
//     {
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }
// }
// #include <stdio.h>
 
// int main() {
//     int a[5] = {19, 26, 3, 46, 95};
//     int r = (a[0] + a[1]) * a[2];
//     printf("%d", r);
//     return 0;
// }


// #include <stdio.h>
 
// int main() {
//     int n = 3; 
//     int a[5] = {2, 4, 8};
 
//     for (int i = 0; i < n; i++) {
//         a[i] = 5 * a[i] + 4;
//         printf("%d ", a[i]);
//     }
 
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,ele,loc;
//     int arr[5]={1,2,3,4,5};
//     scanf("%d",&loc);
//     for(int i=loc;i<5;i++)
//     {
//         arr[i]=arr[i+1];

//     }
//     for(int i=0;i<4;i++)
//     {
//         printf("%d ",arr[i]);
        
//     }
// }


// #include <stdio.h>
// int main()
// {
//     int max=0;
//     int arr[2][2]={{1,2},{3,4}};
//     max=arr[0][0];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//        if(arr[i][j]>max)
//        max=arr[i][j];
//     }
//     }
//     printf("%d ",max);
//     return 0;
// }



/*Pointers: Pointer is a variable which can store the address of another variable of same type A pointer is typically used for 
1. accessing the memory address
2. dynamic memory allocation
the syntax to declare apointer is givern by data_tyoe *name_of_pointer_var;
int *p; p is a pointer to integer
char *p; p is pointer to character
& is known as address operator
* is known as derefernce operator*/


// #include <stdio.h>
// int main(){
//     int x=12;
//     int *ptr;
//     ptr=&x;
//     printf("ptr is %p ",ptr);
//     printf("\nptr is %i ",*ptr);
//     *ptr=*ptr+12;
//     printf("\nx is %d",x);
//     printf("\nsize of ptr is %p ",sizeof(ptr));
// }




//decalre a double var and store its address in double type pointer and print the value of var through pointer




// #include <stdio.h>
// int main(){
// double x=3.45;
// double *ptr=&x;
// ;
// printf("ptr is %d ",ptr);
// printf("\nptr is %lf",*ptr);

// }

/*Arithmetic operations on pointers 
1.adding a  number to a pointer: if we add a number to apointer then the pointer will start pointing towards next location in the memory
number of bytes moved depend upon the type of data*/


// #include <stdio.h>
// int main(){
//     int a[]={12,34,56,78,90},*p;
//     p=&a[0];
//     printf("p and *p is %d %d ",p,*p);
//     p+=1;
//     printf("\np and  *p is %d %d",p,*p);
// }




/*subtracting a number from a pointer: if we subtract a number from a pointer the pointer will start pointing 
towards previous location in the memory arraythe number of bytes moved depends upon the size of datatype*/


// #include <stdio.h>
// int main()
// {
//     double t[]={1.2,3.4,4.5,5.6,7.8,9.0},*p;
//     p=&t[4];
//     printf("p and *p is %d %lf",p,*p);
//     p-=1;
//     printf("\np and *p is %d %lf",p,*p);


// }



/*subtracting the pointer var: we can subtract 2 pointer variable if they belong to element of same array. 
in this case subtraction of 2 pointers will give us differnce of location among them*/


// #include <stdio.h>
// int main(){
//     int a[]={12,34,56,78,90},*p1,*p2;
//     p1=&a[4];
//     p2=&a[1];
//     printf("p1-p2 is %d ",p1-p2);
//     printf("\n*p1-*p2 is %d ",*p1-*p2);

// }


/*program to take input of length and breadth and store in two pointer then calcu;ate area of rectangle*/


// #include <stdio.h>
// int main(){
//     int l,b,*p1,*p2;
//     scanf("%d %d",&l,&b);
//     p1=&l;
//     p2=&b;
//     printf("area of rectangle: %d",*p1 * *p2);
// }



/*1. we cannot add two pointers
2.we cannot multiply a pointer with a constant 
3.we cannot divide a pointer with a constant*/


/*program to declare an array of 5 integer and print their sum by using pointer to array*/


// #include <stdio.h>
// int main()
// {
//     int a[]={12,34,56,78,90},*p,i,sum=0;
//     p=&a[0];
//     for(i=0;i<=4;i++)
//     {
//         sum+=*p;
//         p+=1;
//     }
//     printf("sum is %d",sum);
// }



/*program to take input of an array of 'n' elements store the first element in a pointer then print the largest element among them*/


// #include <stdio.h>
// int main(){
//     int n,*p,i,lar;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<=n;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     p=&a[0];
//     for(i=0;i<=n;i++)
//     {

//         if(a[i]>*p)
//         *p=a[i];
    
//     }
//     printf("largest element is %d ",*p);

// }


/*types if pointer
1.wild pointer: umintialized pointer is called a wild ppointer a pointer is said to be wild if it has not been given any valid memory address*/


// #include <stdio.h>
// int main(){
//     int x=12;
//     int *ptr;
//     printf("ptr is %d ",ptr);
//     ptr=&x;
//     printf("\nptr is %d ",*ptr);
// }



//null pointer: a pointer is  said to be null pointer if it is intialized with null keyword or by 0


// #include <stdio.h>
// int main(){
//     int x=12,*ptr=NULL;
//     printf("ptr is %d",ptr);
//     ptr=&x;
//     printf("\nptr is %d",ptr);}


/*void or generic: a pointer is said to be void or generic pointer if it cna store the address 
of var of any data type but it consider only one data type at a time*/


// #include <stdio.h>
// int main(){
//     int x=12;
//     float y=6.78;
//     char ch='u';
//     void *p;
//     p=&x;
//     printf("p and *p is %d %d",p,*(int*)p);
//     p=&y;
//     printf("\np and *p is %d %f",p,*(float*)p);
//     p=&ch;
//     printf("\np and *p is %d %c",p,*(char*)p);

// }


/*dangling pointer: a pointer is said to be dangling pointer if it points to deleted variable or the variable that goes out of scope*/
// #include <stdio.h>
// int main()
// {
//     int *ptr=NULL;
//     {
//         int x=12;
//         ptr=&x;
//     }
//     printf("ptr and *ptr is %d %d ",ptr,*ptr);
// }

/*dynamic memory allocation: dynamic memory allocation {dma} is memory allocation at run time it means while running the program we will
decide how much mwmory need to allocate the benefit of dma is no wastage of memory function used for dma:
malloc():this function is used to allocate memory dynamically 
syntax is: void *malloc(n*sizeof(datatype)) 
always return a void pointer


calloc():this function is used to allocate memory dynamically 
syntax: void *calloc(n,sizeof(datatype))
calloc always return a void pointer*/



// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *a,i,n;
//     scanf("%d",&n);
//     a=(int*)malloc(n*sizeof(int));
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);


//     for(i=0;i<n;i++)
//     printf("%d ",a[i]);
// }



//program to allocate memory to 'n' number of elements dynamically and search an element by using linear search



// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int *a, i, n, element, flag=0;
// 	scanf("%d",&n);
	
// 	a=(int*)malloc(n*sizeof(int));
// 	for(i=0;i<n;i++)
// 	scanf("%d",&a[i]);
	
// 	scanf("%d",&element);
// 	for(i=0;i<n;i++)
// 	{
// 		if(element==a[i])
// 		{
// 			flag=1;
// 			break;
// 		}
// 	}
// 	if(flag==1)
// 	printf("Element fount at locatn %d ",i+1);
// 	else
// 	printf("Element Not found");
// }

//program to alloacte memory to 'n' number of double type var print the average of them

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int i,n;
//     double *a,sum=0;
//     scanf("%d",&n);
//     a=(double*)malloc(n*sizeof(double));


//     for(i=0;i<n;i++)
//     {
//         scanf("%lf",&a[i]);
//         sum+=a[i];

//     }    
//     printf("average is %lf",sum/n);
// }
//free functon is used to deallocate the memory which was allocated dynamically using malloc and calloc

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int i,n;
//     double *a,sum=0;
//     scanf("%d",&n);
//     a=(double*)calloc(n,sizeof(double));


//     for(i=0;i<n;i++)
//     {
//         scanf("%lf",&a[i]);
//         sum+=a[i];

//     }    
//     printf("average is %lf",sum/n);
// }



/*program to alloacte memory to 'n' number of integers using calloc function and print largesf element among them*/

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int i,n;
//     int *a,lar=0;
//     scanf("%d",&n);
//     a=(int*)calloc(n,sizeof(double));


//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//          if(lar<a[i])
//             lar=a[i];

//     }  
   
//     printf("large is %d",lar);
// }


/*passing an array to a function as an argument we can pass completet array
 as a argument to a function in this case we need to pass the size of an array also*/

// #include <stdio.h>
// void display(int arr[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
// int main()
// {
//     int arr[]={12,34,56,78,90};
//     int n=5;
//     display(arr,n);

// }

    

/*program to return sum of all the elements of an array with the function*/



// #include <stdio.h>
// int sum(int a[],int n)
// {
//     int i,s=0;
//     for(i=0;i<n;i++)
//     {
//         s=s+a[i];
        
//     }
//     return s;
// }
// int main()
// {
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Sum is %d ",sum(a,n));

// }



/*program to search an element from an array of n element using linear search make a func to perfrom linear search*/

// #include <stdio.h>


// void linear_search(int a[],int n, int element)
// {
//     int flag=0,i;
//     for(i=0;i<n;i++)
//     {
//         if (element==a[i])
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag==1)
//     printf("element found");
//     else
//     printf("element not found");
// }
// int main()
// {
//     int n,i,element;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     scanf("%d",&a[i]);

//     scanf("%d",&element);

//     linear_search(a,n,element);
// }




/*pass an array by the help of pointer*/
//#include <stdio.h>
// void display(int *p,int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",*p);
//         p++;
//     }
// }
// int main()
// {
//     int arr[]={12,34,56,78,90};
//     int n=5;
//     display(arr,n);

// }






/*program to return sum of largest and smallest elements in an array of 'n' elements using  function*/


// #include <stdio.h>
// int sum(int a[],int n)
// {
//    int max=a[0],min=a[0],i;
//     for(i=0;i<n;i++)
//     {
       
//         if(max<a[i])
//         max=a[i];
//         else if(min>a[i])
//         min=a[i];

//     }
//     return(max+min);
   
    
// }
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("sum of largest and smallest is: %d",sum(a,n));
// }





/*Binary search: Binary search is a searching technique in which we divide the array int 2 halves.
we compare the middle element with element to search
1. if middle element is equal to element to found then our search is successful
2.if element to found is greater than middle element we search in right array 
3. if element found i slesser than middle element then we search in left array process continues till we find the element or 
we reaches at end of array which suggest element not found*/
//include <stdio.h>
// int main(){
//     int n,beg,end,mid,element,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     beg=0;
//     end=n-1;
//     mid=(beg+end)/2;
//     scanf("%d",&element);
//     while(beg<=end)
//     {
//         if(element==a[mid])
//         {
//             printf("element found");
//             break;
//         }
//         else if(element>a[mid])
        
//             beg=mid+1;
//         else
//             end=mid-1;
//         mid=(beg+end)/2;

        
//     }
//     if(beg>end)
//     printf("element not found");

// }





/*malloc and calloc revision*/
/*write aprogram to perform linear search on group of integers allocate memory at run time with help of malloc*/

/**/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int key,*p,n,i,loc=-1;
//     printf("\nEnter the value of n:");
//     scanf("%d",&n);
//     p=(int*)malloc(n*sizeof(int));
//     if(p==NULL)
//     {
//         printf("\nMemory allocation failure");
//         exit(1);

//     }
//     else
//     {
//         printf("\nMemory allocated successfully");
//         printf("\nEnter value");
//         for(i=0;i<n;i++)
//         {
//             if(*(p+i)==key)
//             {
//                 loc=i;
//                 break;
//             }
//         }
//         if(loc!=-1)
//         {
//             printf("\nElement found at index:%d",loc);
//         }
//         else{
//             printf("\n")
//         }

//     }
// }



/*Strings: A string is a collection/array of character which is terminated by a null character.
Null character siginify the end of string which is represented by  '/0'.
A string is declared by using following syntax:
char name[size];it can store the characters upto size-1
eg.char x[50]*/




// #include <stdio.h>
// int main()
// {
//     char x[100];
//     printf("enter a string\n");
//     scanf("%s",x);
//     printf("entered string is ");
//     printf("%s",x);
// }





/*taking input of multi word string by using fgets*/
// #include <stdio.h>

// int main()
// {
//     char x[100];
//     printf("enter a string\n");
//     fgets(x,100,stdin);
//     printf("string entered is ");
//     printf("%s",x);

// }






/*traversing a string by using a while loop*/



// #include <stdio.h>
// int main()
// {
//     char x[100];
//     int i=0;
//     fgets(x,100,stdin);
//     while(x[i]!='\0')
//     {
//         printf("%c",x[i]);
//         i++;
//     }


// }




/*program to input a string and count the number vowels in the string*/



// #include <stdio.h>
// int main()
// {
//     char x[100];
//     int i =0;
//     fgets(x,50,stdin);
  

//     int count=0;
//     while(x[i]!='\0')
//     {
//         if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
//             count++;
//         i++;
        

//     }
//     printf("number of vowel is %d",count);
// }




/*traversing a string using pointer*/


// #include <stdio.h>
// int main()
// {
//     char x[100],*p;
//     fgets(x,100,stdin);
//     p=&x[0];
//     while(*p!=0)
//     {
//         printf("%c",*p);
//         p++;
//     }

// }




/*program to replace all the spaces in a string by '*' by using pointer*/


// #include <stdio.h>
// int main()
// {
//     char x[50],*p,i;
//     fgets(x,50,stdin);
//     p=&x[0];//p=x;
//     while(*p!='\0')
//     {
//         if(*p==' ')
//         {
//             *p='*';
//         }
//         p++;
//     }
//     printf("%s",x);


// }


/*program to input a string and convert all the lower case letters to uppr case and all the upper case to loweer case using pointers*/



// #include <stdio.h>
// int main()
// {
//     char x[100],*p;
//     fgets(x,100,stdin);
//     p=&x[0];
//     while(*p!='\0')
//     {
//         if(*p>='a' && *p<='z')
//         *p=*p-32;
//         else if(*p>='A' && *p<='Z')
//         *p=*p+32;
//         p++;

//     }
//     printf("%s",x);


// }





/*program to input a string and replace all the non alphabatically charcter by 'x' using pointer*/


// #include <stdio.h>
// int main()
// {
//     char x[100],*p;
//     fgets(x,100,stdin);
//     p=&x[0];
//     while(*p!='\0')
//     {
//         if(*p>='a' && *p<'z' || *p>='A' && *p<='Z')
//         {
//         }
//         else
//         *p='*';
//     p++;
//     }
//     printf("%s",x);
// }







/*string in built function: string inbuilt functions are used to manipulate the strings
1.strLen():
this function is used to find the lenght of a string this function return the number of charcters in a string
syntax is:
int strlen(char* x)*/
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char x[100];
//     int len;
//     gets(x);
//     //fgets(x,100,stdin);   //it will include null value also
//     len=strlen(x);
//     printf("length of string is %d ",len);

// }



/*strrev():
this function is used to reverse a string 
char* strrev(char* x)*/

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char x[100];
//     fgets(x,100,stdin);
//     strrev(x);
//     printf("%s",x);
// }



/*strcpy():this function is used to copy the content of one string into an another string syntax is:
strcpy(char* dest,char* src);*/



// #include <stdio.h>
// #include <string.h>
// int main(){
//     char src[100],dest[100];
//     fgets(src,100,stdin);
//     strcpy(dest,src);
//     printf("%s",dest);
// }



/*strncpy():this function isn used to copy the n no. of charac ters from source string to destination string, syntax is:
strncpy(char* dest, char* src,n);*/

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[100],dest[100];
//     int n;
  
//     fgets(src,100,stdin);
//     scanf("%d",&n);
//     strncpy(dest,src,n);
//     printf("%s",dest);
// }




// strcat():this function is used to concatenate the content of one string  at the end of canother.syntax is:
// strcat(char* s1,chat* s2);    'puts' also used as printf




// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[100],s2[100];
//     fgets(s1,100,stdin);
//     fgets(s2,100,stdin);
//     strcat(s1,s2);
//     puts(s1);
// }



/*strncat():this function is used to concatenate the n charcater of one string  at the end of another.syntax is:
strncat(char* s1,chat* s2,n);    'puts' also used as printf

*/


// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[100],s2[100];
//     int n;
//     fgets(s1,100,stdin);
//     fgets(s2,100,stdin);
//     scanf("%d",&n);
//     strncat(s1,s2,n);
//     puts(s1);
// }




/*strcmp():this function is used to compare the content of 2 string with each other.
the function return 0 if 2 string are equal other it will give less than 0 
if firts string is smaller and greater than 0 if string is greater than one */


// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[100],s2[100];
//     int cmp;
//     fgets(s1,100,stdin);
//     fgets(s2,100,stdin);
//     cmp=strcmp(s1,s2);
//     if(cmp==0)
//     printf("string is equal");
//     else if(cmp<0)
//     printf("first string smaller");
//     else
//     printf("first string is greater ");

    
// }




/*strcmpi():this func is  similar to strcmp() but in strcmpi() while comparing the 2 str 
it does not consider the case of strings for this function upper case and loweer case ltters are same*/






/*structures: a structures is a collection of hetrogenous element in which all the element may or may not of different type.
the syntax to declare a structure is given  by:
struct <name_of_structur>
{
    element1;
    element2;
    .....
};
struct element{
    char name[30];
    int roll_no;
    double marks;

};
we can declare the varuable of a structure for accessing the element of stucture.the syntax is
struct <name_of_structure> var_name;
struct student s; //s is the variable of structure student*/



// #include <stdio.h>
// #include <string.h>
// struct student{
//     char name[30];
//     int roll_no;
//     double marks;
// };
// int main()
// {
//     struct student s;
//     printf("size of structure is %d\n",sizeof(s));
//     printf("enter the details of the student:\n");
//     scanf("%s%d%lf",s.name,&s.roll_no,&s.marks);
//     printf("%d %s %lf",s.roll_no,s.name,s.marks);
// }




/*array of sturcture: An array of structure will allow us to access the data for multiple structure variable.
the syntax is:
struct <name_of_student>var[size]; */



// #include <stdio.h>
// #include <string.h>
// struct student{
//     char name[30];
//     int roll_no;
//     double marks;
// };
// int main()
// {
//     struct student s[5];
//     int i;
//     for(i=0;i<5;i++)
//     {
//     printf("size of structure is %d\n",sizeof(s));
//     printf("enter the details of the student:\n");
//     scanf("%s%d%lf",s[i].name,&s[i].roll_no,&s[i].marks);
    
// }
// for(i=0;i<5;i++)
// {
//     printf("%s\n%d\n%lf\n",s[i].name,s[i].roll_no,s[i].marks);

// }

// }



/*program to create a structure book with following members:
book_name,pages and price. input the detail pf 5 book and print it onto screen*/



// #include <stdio.h>
// #include <string.h>
// struct book{
//     char name[30];
//     int pages;
//     double price;
// };
// int main()
// {
//     struct book b[5];
//     int i;
//     for(i=0;i<5;i++)
//     {
//     printf("enter the details of the student:\n");
//     scanf("%s%d%lf",b[i].name,&b[i].pages,&b[i].price);
    
// }
// for(i=0;i<5;i++)
// {
//     printf("%s\n%d\n%lf\n",b[i].name,b[i].pages,b[i].price);

// }

// }





/*program to check whether a string is palindrome string or not*/


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char x[100],copy[100];
//     gets(x);
//     strcpy(copy,x);
//     strrev(x);
//     int cmp=strcmp(x,copy);
//     if(cmp==0)
//     printf("its palindrome");
//     else
//     printf("not plaindrome");
// }



/* Realloc(): This function is used to reallocate or change the memory which
was allocated with the help of malloc/calloc fucntion dynamically. the
syntax of using realloc function is:
realloc(ptr,new_size);*/
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// int *ptr,n1,n2,i;//n1 is old size and n2 is new
// scanf("%d",&n1);//number of element in intial array
// ptr=(int*)malloc(n1*sizeof(int));
// for(i=0;i<n1;i++)
// scanf("%d",&ptr[i]);
// printf("\n");
// for(i=0;i<n1;i++)
// printf("%d ",ptr[i]);
// scanf("%d",&n2);// new size
// realloc(ptr,n2*sizeof(int));
// printf("\n");
// for(i=0;i<n2;i++)
// scanf("%d",&ptr[i]);
// printf("\n");
// for(i=0;i<n2;i++)
// printf("%d ",ptr[i]);
// free(ptr);
// }




/*to create dynamic structure variable*/


// #include <stdio.h>
// #include <stdlib.h>
// struct student{
// char name[30];
// int roll_no;
// float marks;
// };
// int main()
// {
// struct student *s;
// int n,i;
// scanf("%d",&n);
// s=(struct student *)malloc(n*sizeof(struct student));//s[0] s[1]..
// for(i=0;i<n;i++)
// scanf("%s%d%f",s[i].name,&s[i].roll_no,&s[i].marks);

// for(i=0;i<n;i++)
// printf("%s %d %f\n",s[i].name,s[i].roll_no,s[i].marks);


// }




/* Nested structure:
A structure placed inside another structure is known as nested structure.
This can be done by
1. placing the variable of one structure into another
2. placing the complete one structure inside another*/
// #include <stdio.h>
// #include <stdlib.h>
// struct dob{
// int dd;
// int mm;
// int yy;
// };
// struct student{
// char name[30];
// int roll_no;
// struct dob d;// nesting
// };
// int main()
// {
// struct student s;
// scanf("%s%d%d%d%d",s.name,&s.roll_no,&s.d.dd,&s.d.mm,&s.d.yy);
// printf("%s %d %d %d %d",s.name,s.roll_no,s.d.dd,s.d.mm,s.d.yy);
//}


// #include <stdio.h>
// #include <stdlib.h>
// struct student{
// char name[30];
// int roll_no;

// struct dob{
// int dd;
// int mm;
// int yy;
// }d;
// };
// int main()
// {
// struct student s;
// scanf("%s%d%d%d%d",s.name,&s.roll_no,&s.d.dd,&s.d.mm,&s.d.yy);
// printf("%s %d %d %d %d",s.name,s.roll_no,s.d.dd,s.d.mm,s.d.yy);
// }






// #include <stdio.h>

// int main() {
//     int n, a = 0, b = 1, c = 0;
//     scanf("%d", &n);
//     int arr[100];

//     // Input array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]); 
//     }

//     // Fibonacci sequence check
//     for (int i = 0; i < n; i++) {
//         c = a + b;
//         if (arr[i] == c) {
//             printf("%d ", arr[i]);
//         }
//         a = b;
//         b = c;
//     }

//     return 0;
// }




/*union: A union is a user defined data type which is same as that of structure but in 
union all the members share the commnon memory space. It means only one member can be accessed at one point of time
it is oppposite to structure in which all the members have different memory to store the data.
in structure the size of structure is either equal or greater than size of all the members but in union is the size of highest
data type.
union <name>
{
    datatype memory1;
    datatype memory 2;
}; */


// #include <stdio.h>
// union student {
//     char name[30];
//     int roll_no;
//     double marks;

// };
// int main()
// {
//     union student s;
//     fgets(s.name,sizeof(s.name),stdin);
//     printf("%s",s.name);
//     scanf("%d",&s.roll_no);
//     printf("%d",s.roll_no);
//     scanf("%lf",&s.marks);
//     printf("%lf",s.marks);
// }
//we cannot initialize the members of a union in one go but we can initialize the memebers of structure in one go by using  {}



// #include <stdio.h>


// struct student
// {
//     char name[30];
//     int roll_no;
//     double marks;

// };
// int main()
// {
//     struct student s={"Abhay Rana",1,45};
//     printf("%s %d %lf",s.name,s.roll_no,s.marks);

// }






/*declare a structure book with data member book_name ,price,pages input the detail of 'n' books 
and print the resilts allocate memory to structure using calloc function*/


// #include <stdio.h>


// struct book
// {
//     char name[30];
//     double price;
//     int pages;

// };
// int main()
// {
//     struct book *b;
//     int n,i;
//     scanf("%d",&n);
//     b=(struct book *)calloc(n,sizeof(struct book));
//     for(i=0;i<n;i++)
//     scanf("%s%lf%d",b[i].name,&b[i].price,&b[i].pages);
//     for(i=0;i<n;i++)
//     printf("%s%lf%d\n",b[i].name,&b[i].price,&b[i].pages);

// }



//macro 


// #include <stdio.h>
// #define PI 3.14
// int main()
// {
//     double r,area;
//     scanf("%lf",&r);
//     area=PI*r*r;
//     printf("%lf",area);
// }


// #include<stdio.h> 
// int main() { 
//     char str[20]; 
//     scanf("%4s", str); 
//     printf("%s", str); 
// } 




// #include <stdio.h>

// int main() {
//     char str[] = "Programming";
//     int i = 0;
//     while (str[i] != '\0') {
//         str[i] = '!';
//         i++;
//     }
//     printf("%s", str);
//     return 0;
// }



// #include <stdio.h>  
// int main() { 
//     printf("%c", 3 + 'a'); 
//     return 0; 
// } 
// #include <stdio.h>

// int countZeros(int num) {
//     int count = 0;

//     // Counting zeros including leading zeros
//     do {
//         if (num % 10 == 0) {
//             count++;
//         }
//         num /= 10;
//     } while (num != 0);

//     return count;
// }

// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     int zeros = countZeros(number);

//     printf("Number of zeros in %d: %d\n", number, zeros);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int total = 0;
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 1; j <= 2; j++) {
//             if (j == 2) {
//                 break;
//             }
//             total += i;
//         }
//     }
//     printf("%d", total);
//     return 0;
// }




/*queue wale code */

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_SIZE 100
// int queue [MAX_SIZE];
// int rear=-1;
// void enqueue (int value)
// {
//     if(rear>=MAX_SIZE -1)
//     {
//         printf("Queue overflow!\n");
//     }
//     else{
//         rear++;
//         queue[rear]=value;
//         printf("%d inserted into queue.\n",value);

//     }
//     int main()
//     {
//         enqueue(10);
//         enqueue(20);
        

//     }
// }



// #include <stdio.h>
// int main()
// {
//     int n,f=1;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         f=f*n;
//         n--;
//     }
//         printf("%d ",f);
    

// }