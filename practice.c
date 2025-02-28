//print the sum of first and last digit of a 2d array'
// #include <stdio.h>
// int main()
// {
//     int r,c,i,j;
//     scanf("%d",&r);
//     scanf("%d",&c);
//     int arr[r][c];
//     for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//      for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("sum of first digit and last digit: %d",arr[0][0]+arr[r-1][c-1]);
// }





//update alll even elements by 1 and odd elements by 0

// #include <stdio.h>
// int main()
// {
//     int r,c,i,j;
//     scanf("%d",&r);
//     scanf("%d",&c);
//     int arr[r][c];
//     for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//             scanf("%d ",&arr[i][j]);

//         }
//     }
//      for(i=0;i<=r-1;i++)
//     {
//         for(j=0;j<=c-1;j++)
//         {
//            if(arr[i][j]%2==0)
//            arr[i][j]=1;
//            else
//            arr[i][j]=0;
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
   

// }




//program to take input of 3 by 3 matrix and replace all the non left diagonal elements by 0 if they are even
// #include <stdio.h>
// int main()
// {
//     int i, j, new;

//     int a[3][3];
//     // Input matrix elements
//     printf("Enter 3x3 matrix elements:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     // Print the original matrix
//     printf("Original Matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     // Replace even numbers with 0 in rows other than the first row
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i != 0 && a[i][j] % 2 == 0)
//             {
//                 a[i][j] = 0;
//             }
//         }
//     }

//     // Print the modified matrix
//     printf("Modified Matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




//logic for no is prime or not


// #include <stdio.h>
// int main(){
//     int f=1,n,i=2;
//     scanf("%d",&n);
//     while(i<=n/2)
//     {
//         if(n%i==0)
//         f=0;
//         break;
//     }
//     i++;
//     if(f==1)
//     {
//         printf("no is prime");
//     }
//     else
//     printf("not a prime no.");
// }
//logic to rreverse a number

// #include <stdio.h>
// int main()
// {
//     int i, temp,rev=0,n;
//     scanf("%d",&n);
//     while(i<n)
//     {
//         temp=n%10;
//         rev=rev*10+temp;
//         n=n/10;
        
//     }
//      printf("reverse is:%d",rev);
   
// }


/*logic for palindrome no.*/

// #include <stdio.h>
// int main()
// {
//     int temp,rev=0,n,t;
//     scanf("%d",&n);
//     t=n;
//     while(n!=0)
//     {
//         temp=n%10;
//         rev=rev*10+temp;
//         n=n/10;
        
//     }
//     if(rev==t)
//     printf("palindrome:%d",rev);
//     else
//     printf("not a palindrome");
//     }






// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {

//     char agent_name[100];
//     char agent_location[100];
//     int num_customers;
//     char customer_name[100][100];

//     printf("Enter the LIC agent's name: ");
//     fgets(agent_name, sizeof(agent_name), stdin);
//     agent_name[strcspn(agent_name, "\n")] = '\0';

//     printf("Enter the LIC agent's location: ");
//     fgets(agent_location, sizeof(agent_location), stdin);
//     agent_location[strcspn(agent_location, "\n")] = '\0';
//     printf("Enter the number of customers: ");
//     scanf("%d", &num_customers);
//     getchar(); 

//     for (int i = 0; i < num_customers; i++) {
//         printf("Enter customer %d's name: ", i+1);
//         fgets(customer_name[i], sizeof(customer_name[i]), stdin);
//         customer_name[i][strcspn(customer_name[i], "\n")] = '\0'; 
//     }

//     printf("\nLIC Agent Information:\n");
//     printf("Name: %s\n", agent_name);
//     printf("Location: %s\n", agent_location);
//     printf("Name of Customers:\n");
//     for (int i = 0; i < num_customers; i++) {
//         printf("%d. %s\n", i+1, customer_name[i]);
//     }

//     return 0;
// }




// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     int tc;
//     char lic[100],location[100],cn[100];
//     fgets(lic,100,stdin);
//     fgets(location,100,stdin);
//     scanf("%d",&tc);
//     for(int i=0;i<tc;i++)
//     {
//         fgets(cn[i],100,stdin);

//     }
//     printf("LIC AGENT DETAILS: ");
//     puts(lic);
//     puts(location);
//     printf("%d",tc);
//     printf("/nNAME OF CUSTOMERS:\n");
//     for(int i=0;i<tc;i++)
//     {
//         printf(cn[i]);
//     }




// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     int tc;
//     char lic[100], location[100], cn[100];
//     fgets(lic, 100, stdin);
//     fgets(location, 100, stdin);
//     scanf("%d", &tc);
//      for (int i = 0; i < tc; i++) {
//         fgets(cn[i], 100, stdin);
//     }
//     getchar(); 
//     printf("LIC AGENT DETAILS: \n");
//     puts(lic);
//     puts(location);
//     printf("%d\n", tc); // Print the value of tc and then move to the next line
//     printf("NAME OF CUSTOMERS:\n");
//     for (int i = 0; i < tc; i++) {
       
//         printf("%s", cn); // Print each customer name
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,rev=0,t,temp;
//     scanf("%d",&n);
//     temp=n;
//     while(n!=0)
//     {
//         t=n%10;
//         rev=rev*10+t;
//         n/=10;
//     }
//     if(temp==rev)
//     {
//         printf("no is palindrome:%d",rev);

//     }
//     else{
//         printf("not a palindrome:%d",rev);
//     }
// }




// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     int s=strrev(str);
//     if(s==str)
//     {
//         printf("string is in palindrome",str);
//     }
//     else{
//         printf("string is not palindrome",str);
//     }
// }





// #include <stdio.h>
// int main()
// {
//     int n,i=1;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         if(n%i==0)
//         {
//             printf("%d ",i);
//             i++;
//         }
//     }
// }





// //area of circle

// #include <stdio.h>
// int main()
// {
//     int radius;
//     float area;
//     scanf("%d",&radius);
//     area=3.14*radius;
//     printf("area of circle:%.2f",area);

// }



// #include <stdio.h>
// int main()
// {
    
//     int max=0;
//     int arr[2][2];
//     max=arr[0][0];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//       for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//            if(arr[i][j]>max)
//            {

           
//            max=arr[i][j];
//            }

//         }
//     }
    
//     printf("%d ",max);
//     return 0;


// }



// #include <stdio.h>
// int main()
// {
//     char x[100],i=0;
//     fgets(x,100,stdin);
    
//     while(x[i]!='\0')
//     {
//         if(x[i]>='a' && x[i]<'z' || x[i]>='A' && x[i]<='Z')
//         {
//         }
//         else
//         x[i]='*';
//     i++;
//     }
//     printf("%s",x);
// }