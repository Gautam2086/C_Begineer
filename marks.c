//#include <stdio.h>


//SHOW DIGITS
//int main()
//{
//	float a=256.263;
//	printf("%.2f",a);
//   return 0;
//}


////SCANF EXAMPLE
//int main()
//{
//	char str[100];
//	int i;
//
//	printf("Enter value:");
//	scanf("%d",&i);
//	printf("\n You Entered:%d\n",i );
//	   return 0;
//
//}

//DATATYPE
//int main()
//{
//	int a;
//	 int b;
//	 printf("Enter first num:");
//	 scanf("%d",&a);
//
//	 printf("Enter second num:");
//	 scanf("%d",&b);
//
//	 int c=a+b;
//	 printf("sum of num's is: %d",c);
//
//	   return 0;
//
//}


////ENUM
//int main()
//{
//enum gender {male,female};
//enum gender myGender;
//myGender= male;
//	   return 0;
//
//}



////FORMAT SPECIFIERS
//int main()
//{
//int a = 8;
//    float b = 7.21;
//    printf("The value of a is %d and the value of b is %0.2f\n", a,b);
//               return 0;
//}



////CONSTANT
//#define Pi 3.14
//
//int main()
//{
//printf("%0.2f",Pi);
//
//               return 0;
//}



////FORMAT SPECIFIERS (Cont.)
//int main()
//{
//int intval=2;
//float floatval=2.1;
//double doubleval=2.114324242;
//char characval=  "A";
//
//printf("integer value = %i another is %0.1f\n", intval,floatval);
//printf("float value= %0.1f\n", floatval);
//printf("double float value= %e\n", doubleval);
//printf("Charter value= %c\n", characval);
//
//               return 0;
//}






////CHALLENGE(Paramter)
//int main()
//{
//int l;
//int b;
//
//printf("Enter Length:");
//scanf("%d",&l);
//
//printf("Enter Breadth:");
//scanf("%d",&b);
//
//int x=2*(l+b);
//printf("Parameter of Rectangle is %d",x);
//
//               return 0;
//}





//CHALLENGE2(Paramter=Const)
//int main()
//{
//double l= 21.1;
//double b= 26.1;
//double Parameter=0;
//double Area=0;
//
//Parameter =2*(l+b);
//Area=l*b;
//
//printf("Length is %0.1f, Parameter is %f\n",l,Parameter);
//printf("Area is %0.2f\n",Area);
//               return 0;
//}


////ENUM EXAMPLE
//#include <stdio.h>
//int main()
//{
//enum company { GOOGLE, FACEBOOK, YAHOO, ORKUT, EBAY };
//enum company fb = FACEBOOK;
//enum company yahoo = YAHOO;
//enum company orkut= ORKUT;
//enum company ebay= EBAY;
//
//printf("The value of fb is:%d\n",fb);
//printf("The value of ebay is:%d",ebay);
//
//return 0;
//}



////BASIC OPEARTORS
//#include <stdio.h>
//int main()
//{
// int a=33;
//int b=15;
//int result=0;
//
//result=a% b;
//printf("Sum is:%d\n",result);
//
//
//return 0;
//
//}


//#include <stdio.h>
//int main()
//{
//	_Bool a=1;
//	_Bool b=0;
//	_Bool result;
//
//	result=a&&b;
//	printf("Result is:%d",result);
//
//	return 0;
//}

////BITWISE OPERATOR (XOR)
//#include <stdio.h>
//int main()
//{
//	int a=60;
//	int b=13;
//	printf("XOR Result:%d",a^b);
//
//	return 0;
//}


////SIZE OF OPERATOR
//#include <stdio.h>
//int main()
//{
//
//	printf("%c\n",sizeof(a));
//	return 0;
//}

////Operator Precedence(BODMAS)
//#include <stdio.h>
//int main()
//{
//	int a,b,c,d,e;
//	a=10; b=5; c=5; d=10;
//	e=a/b*c+d;
//	printf("Result of Expression is:%d",e);
//
//	return 0;
//}


////CHALLENGE34
//#include <stdio.h>
//int main()
//{
//int a;
//float b;
//float c;
//
//printf("Enter number of minutes:\n");
//scanf("%d",&a);
//
//c=(24*60);
//b= (a/c);
//
// printf("Number of days is/are %f\n",b);
//
//	return 0;
//}



/////SIZE OF OPERATOR
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(2));
//	return 0;
//}




/////IF
//#include <stdio.h>
//int main()
//{
//	int score=21;
//	int	big=26;
//	if(score> big)
//	printf("Jackpot!\n");
//
//	return 0;
//}




///IF
//#include <stdio.h>
//int main()
//{
//	int nmbrToTest;
//	int remainder;
//	printf("Enter number:\n");
//	scanf("%d",&nmbrToTest);
//	remainder=nmbrToTest%2;
//
//	if (remainder==0) //WE_MUST_USE_DOUBLE_EQUALS
//		printf("The number is even\n");
//	else
//		printf("The number is odd\n");
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int x=10;
//	int y=10;
//
//	if(x==y)
//	    printf("True");
//	else
//	    printf("False");
//
//
//	return 0;
//}


////PRACTICE
//#include <stdio.h>
//
//int main(){
//
//	int num1, num2,c;   // Define two integer variables
//
//	printf("Enter num1");
//scanf("%d",&num1);
//printf("Enter num2");
//	scanf("%d",&num2);  // Get input for the two variables
//
//c=num1+num2;
//printf("The sum is:%d",c);
//	// Write the logic to add these numbers here:
//
//   // Print the sum
//	return 0;
//}


////NESTED IF-ELSE
//#include <stdio.h>
//int main()
//{
//	int a,b,c,big;
//printf("Enter three numbers:");
//scanf("%d %d %d",&a,&b,&c);
//
//if (a>b)
//{
//	if (a>c)
//	{
//		big=a;
//	}
//	else
//	{
//		big=c;
//	}
//}
//else
//{
//    if(b>c)
//    {
//    	big=b;
//    }
//    else
//    {
//    	big=c;
//    }
//}
//printf("Biggest number is %d\n",big);
//    return 0;
//
//}






// //ELSE IF
//#include <stdio.h>
//int main()
//{
//	int result;
//	printf ("Enter the total marks of a student: ");
//	scanf(" %d", &result);
//	if (result<=50)
//		printf ("Grade D\n");
//	    else if (result<=60)
//	    printf("Grade C\n");
//	    else if (result<=75)
//	    printf("Grade B\n");
//	else
//	printf("Grade A\n");
//
//    return 0;
//
//}


////SWITCH_STATEMENT
//#include <stdio.h>
//int main()
//{
//	enum weekday {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
//	enum weekday today=Friday;
//
//	switch(today)
//	{
//	   case Sunday:
//		   printf("Today is Sunday.");
//		   break;
//	   case Monday:
//		   printf("Today is Monday.");
//		   break;
//	   case Tuesday:
//		   printf("Today is Tuesday.");
//		   break;
//	 default:
//		   printf("Other Day.");
//		   break;
//	}
//return 0;
//}



////TABLE OF 2(WHILE_LOOP)
//#include <stdio.h>
//int main()
//{
//	int a=2;
//	while(a<=20)
//	{ printf("%d\n", a);
//	a+= 2;
//
//	}
//	return 0;
//}



////DO_while
//#include <stdio.h>
//int main()
//
//{
//	int a=0,b=2;
//	do
//	{ printf("%d\n",b);
//	b+=2;
//	a++;
//	}
//	while(a<10);
//	return 0;
//}



////For_LOOP
//#include <stdio.h>
//int main()
//
//{
//	int i,n;
//	printf("Enter value of n:");
//	scanf("%d",&n);
//	printf("\n The first %d natural numbers are: \n",n);
//	for(i=1;i<=n;++i)
//	{printf("%d\n",i);
//	}
//	return 0;
//}



////NESTED_FOR_LOOP
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<=6;i++) //INITIALISATION_CONDITION_INCorDEC
//	{
//	for(j=1;j<=i;j++)
//		{
//			printf("*");
//		}
//	printf("\n");
//	}
//	return 0;
//}



////ARRAY
//#include <stdio.h>
//int main()
//{
//	int a[3];
//	scanf("%d %d %d",&a[0],&a[1],&a[2]);
//   printf("You Entered: %d %d %d",a[0],a[1],a[2]);
//	return 0;
//}



////1-D_Array(Max marks among 5)
//#include <stdio.h>
//int main()
//{
//	int i,maxi=0,mark[5];
//	int SN=1;
//for(i=0;i<5;i++)
//{
//	printf("Student No. : %d\n",SN++);
//	printf("Marks obtained out of 50:");
//	scanf("%d",&mark[i]);
//}
//for(i=0;i<5;i++)
//{
//	if(mark[i]>maxi)
//		maxi=mark[i];
//}
//printf("\n                     Maximum marks: %d\n",maxi);
//
//  return 0;
//}



//#include <stdio.h>
//int main()
//{
//printf("I am\tGautam");
// return 0;
//}



//MATRIX
//#include <stdio.h>
//int main()
//{
//   int i,j,total=0,a[2][3];
//   printf("Enter 6 numbers: \n");
//   for(i=0;i<2;i++)
//   {
//	   for(j=0;j<3;j++)
//	   {
//		   scanf("%d",&a[i][j]);
//	   }
//
//   }
//for (i=0;i<2;i++)
//{
//	for(j=0;j<3;j++)
//	{
//		printf("\t %d",a[i][j]);
//		total=total+a[i][j];
//	}
//	printf("\t %d", total);
//	total=0;
//	printf("\n");
//}
//
// return 0;
//}



////initialOFarray
//#include <stdio.h>
//#define MONTHS 12
//int main()
//{
//	int days [MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
//	int index;
//
//	for(index=0;index<MONTHS;index++)
//		printf("Month %d has %d days.\n",index+1,days[index]);
//return 0;
//}



////STRING
//#include <stdio.h>
//int main()
//{
//	char name [5];
//	printf("Enter your name:");
//	scanf("%s",&name); //withor without &
//	printf("Welcome %s",name);
//
//}




//#include <stdio.h>
//int main()
//{
//	char a[]="My name is Gautam";
//	printf("The string is: %s",a);
//
//}

//Array of string
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//
//	char name[2][10];
//	printf("Enter two string:");
//	scanf(" %s %s",name[0],name[1]);
//	printf("First string is : %s \nSecond string is: %s",name[0],name[1]);
//	printf("\n %c \n",name[0][2]);
//
//
//	return 0;
//}



////String initialisation
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//
//	char name[2][10]={"Gautam", "Arora"};
//	printf("First string is : %s \nSecond string is: %s",name[0],name[1]);
//	printf("\n %c \n",name[0][2]);
//
//
//	return 0;
//}



////Find length of string
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n;
//	char web[20]="GautamArora";
//			n= strlen(web);
//			printf("%d",n);
//
//			return 0;
//
//}



////strcpy_function
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char web[10]="Gautam";
//	char site[10]="Arora";
//	strcpy(web,site);
//	printf("%s",web);
//	printf("\n %s \n",site);
//
//	return 0;
//}

////POINTER
//#include <stdio.h>
//int main()
//{
//	int a=100;
//	int *p;
//	p=&a;
//	*p=50;
//
//	printf("\n Value of a                         : %d",a);
//	printf("\n Address of a                       : %d",&a);
//	printf("\n Address of a using Pointer         : %d",p);
//	printf("\n Value of a using Pointer           : %d",*p);
//	printf("\n Address of Pointer                 : %d",&p);
//
//	return 0;
//}


////Void_Pointer
//#include <stdio.h>
//int main()
//{
//	int i=21;
//	float f=2.21;
//	char c='k';
//	void *vptr;
//
//	vptr=&i;
//	printf("Value of i: %d",*(int*)vptr);
//
//	vptr=&f;
//	printf("\nValue of f: %f",*(float*)vptr);
//
//	vptr=&c;
//	printf("\nValue of c: %c",*(char*)vptr);
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int a[]={10,20,30,40};
//	int *p[4];
//	int i;
//
//	printf("Output via pointer:\n");
//	printf("Address \t value:");
//	for(i=0;i<=3;i++)
//	{
//		p[i]=&a[i];
//		printf("\n %d",p[i]);
//		printf("\t %d",*p[i]);
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a[]={10,20,30,40};
//	int *p;
//	p=&a[0];
//	int i;
//
//	printf("Output via pointer:\n");
//	printf("Address \t value:");
//	for(i=0;i<=3;i++)
//	{
//		printf("\n %d",p);
//		printf("\t %d",*p);
//		p++;
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a=10,b=20,sum;
//	 sum=add(a,b);
//	 printf("Addition=%d",sum);
//}
//int add(int x,int y)
//{int total;
//total=x+y;
//return (total);
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[15] = "Gautam";       ///////ERRRROOORRR
//	strset(str,'a');
//	printf("%s",str);
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[15] = "Gautam";
//	strset(str,'*',3);            ///////ERRRROOORRR
//	printf("%s",str);
//
//	return 0;
//}



////STRCMP_FNCTION
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n;                           //ERRRRORRR
//
//	char str[20] = "Gautam";
//	char str1[20] = "Arorafiejf ";
//	n=strcmp(str,str1);
//	printf("%d",n);
//
//	return 0;
//}



////STRCMP_FNCTION
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n;                           //ERRRRORRR
//
//	char str[20] = "Gautam";
//	char str1[20] = "GautamArora ";
//	n=strncmp(str,str1,7);
//	printf("%d",n);
//
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	//USE OF MALLOC
//	int *ptr;
//	ptr=(int *)malloc(10*sizeof(int));



////MALLOC()
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	// This pointer will hold the
//	// base address of the block created
//	int* ptr;
//	int n, i = 0;
//
//	// Get the number of elements for the array
//	n = 5;
//	printf("Enter number of elements: %d\n", n);
//
//	// Dynamically allocate memory using malloc()
//	ptr = (int*)malloc(n * sizeof(int));
//
//	// Check if the memory has been successfully
//	// allocated by malloc or not
//	if (ptr == 0)
//	{
//		printf("Memory not allocated.\n");
//
//	}
//	else {
//
//		// Memory has been successfully allocated
//		printf("Memory successfully allocated using malloc.\n");
//		}
//	for (i = 0; i < n; ++i)
//	{
//	            ptr[i] = i + 1;
//	        }
//
//	        // Print the elements of the array
//	        printf("The elements of the array are: ");
//	        for (i = 0; i < n; ++i) {
//	            printf("\t%d\t ", ptr[i]);
//	        }
//
//
//
//	return 0;
//}






////CALLOC()
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	// This pointer will hold the
//	// base address of the block created
//	int* ptr;
//	int n, i= 0;
//
//	// Get the number of elements for the array
//	n = 5;
//	printf("Enter number of elements: %d\n", n);
//
//	// Dynamically allocate memory using calloc()
//	ptr=(int*)calloc(n,sizeof(int));
//
//
//	// Check if the memory has been successfully
//	// allocated by malloc or not
//	if (ptr == 0)
//
//	{
//		printf("Memory not allocated.\n");
//
//	}
//	else {
//
//		// Memory has been successfully allocated
//		printf("Memory successfully allocated using calloc.\n");
//
//		// Get the elements of the array
//		for (i = 0; i < n; i++) {
//			ptr[i] = i + 1;
//		}
//
//		// Print the elements of the array
//		printf("The elements of the array are: ");
//		for (i = 0; i < n; ++i)
//		{
//			printf("\t%d\t ", ptr[i]);
//		}
//	}
//
//	return 0;
//}


////FREE()
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int *ptr;
//	int n,i=0;
//
//	n=5;
//	printf("Enter number of elements: %d\n",n);
//
//
//	ptr=(int*)malloc(n * sizeof(int));
//
//	if (ptr==0)
//			{printf("Memory not allocated. \n");
//			}
//	else
//	{
//		printf("Memory successfully allocated using malloc.\n");
//		free(ptr);
//		printf("Malloc memory successfully freed.\n");
//	}
//	return 0;
//}




////REalloc()
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//    // This pointer will hold the
//    // base address of the block created
//    int *ptr;
//    int n, i= 0;
//
//    // Get the number of elements for the array
//    n = 5;
//    printf("Enter number of elements: %d\n", n);
//
//    // Dynamically allocate memory using calloc()
//    ptr = (int*)calloc(n, sizeof(int));
//
//    // Check if the memory has been successfully
//    // allocated by malloc or not
//    if (ptr == 0)
//    {
//        printf("Memory not allocated.\n");
//    }
//    else {
//
//        // Memory has been successfully allocated
//        printf("Memory successfully allocated using calloc.\n");
//
//        // Get the elements of the array
//        for (i = 0; i < n; ++i)
//        {
//            ptr[i] = i + 1;
//        }
//    }
//        // Print the elements of the array
//        printf("The elements of the array are: ");
//        for (i = 0; i < n; ++i)
//        {
//            printf("%d, ", ptr[i]);
//        }
//
//    n=10;
//    printf("\nEnter the new size of the array: %d\n", n);
//
//
//    ptr=realloc(ptr, n * sizeof(int));
//    printf("Memory successfully re-allocated using realloc.\n");
//
//   return 0;
//    }





////Challenge
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a=150;
//	int *Pb=0;
//
//	Pb=&a;
//
//	printf("Address of Pb: %p",&Pb);
//	printf("\nAddress of a: %p \n",&a);
//    printf("Value of Pb: %p \n",Pb);
//    printf("Value of what Pb is pointing to: %d \n",*Pb);
//	return 0;
//}


////STRUCT
//#include<stdio.h>
//int main()
//{
//	struct date
//	{
//		int month;
//		int date;
//		int year;
//	};
//	struct date today;
//
//today.month=6;
//today.date=24;
//today.year=2019;
//
//printf("Today's Date is %d/%d/%d\n",today.date,today.month,today.year);
//
//
//     return 0;
//}




//#include<stdio.h>
//int main()
//{
//	struct student
//	{
//		char name[20];
//		int roll;
//	};
//struct student stu1;
//printf("Enter Name:");
//scanf("%s",&stu1.name);
//printf("\nEnter Roll number:");
//scanf("%d",&stu1.roll);
//
//printf("\nStudent name is %s",stu1.name);
//printf("\nRoll number is %d",stu1.roll);
//
//
//return 0;
//}




////Nested_Structure
//#include<stdio.h>
//int main()
//{
//	struct student
//	{
//		char name[20];
//		int roll;
//
//	    struct student1
//	    {
//			int tm;
//	    }instu;
//	};
//struct student outstu;
//printf("Enter Name:");
//scanf("%s",&outstu.name);
//printf("\nEnter Roll number:");
//scanf("%d",&outstu.roll);
//printf("\nEnter total marks:\n");
//scanf("%d",&outstu.instu.tm);
//
//printf("\nStudent name is %s",outstu.name);
//printf("\nRoll number is %d",outstu.roll);
//printf("\nTotal marks: %d",outstu.instu.tm);
//
//
//return 0;
//}




////Structure as a function
//#include <stdio.h>
//struct student
//{
//    char name[50];
//    int age;
//};
//
//// function prototype
//void disp(struct student s);
//int main()
//{
//    struct student s;
//    printf("Enter name:");
//    scanf ("%s", s.name);
//    printf("Enter age:");
//    scanf("%d", &s.age);
//
//    disp(s);   // passing structure as an argument
//
//}
//
//void disp(struct student s)
//{
//  printf("\nDisplaying information\n");
//  printf("Name: %s", s.name);
//  printf("\nRoll: %d", s.age);
//}



////Challenge
//#include<stdio.h>
//#include<stdlib.h>
//
//struct employee
//{
//	char name[20];
//	char date[20];
//	float salary;
//};
//
//int main()
//{
//	struct employee emp1={"Raj","21/10/2021",50000};
//
//	printf("\nName: %s",emp1.name);
//	printf("\nHire Date: %s",emp1.date);
//	printf("\nSalary: Rs.%.0f",emp1.salary);
//
//	struct employee emp2;
//
//	printf("\n \tEnter employee info\n");
//	printf("Name:");
//	scanf("%s",&emp2.name);
//
//	printf("\nHire date:");
//	scanf("%s",&emp2.date);
//
//	printf("\nName: %s",emp2.name);
//	printf("\nHire Date: %s",emp2.date);
//
//
//
//	return 0;
//}



////FILE_IN/OUT
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE *ptr=NULL;
//	char string[70]="This content was produced by me";
//
//
//	//******* Reading a file ********
////	ptr=fopen("Untitled 1.txt⁩","r");
////	fscanf(ptr,"%s",string);
////	printf("The content of this file has %s \n",string);
//
//	//****** Writing a file ****
//	ptr=fopen("Untitled 1.txt⁩","a");
//	fprintf(ptr,"%s",string);
//
//
//
//	return 0;
//}


// int x; // declaration
// x = 2; // initialisation
// int x = 4; // init. and declar.
// print(x) // usage of the initialised x

// sum = sum + arr[i] big form
// sum += arr[i] small form

//#include <stdio.h>
//#include <string.h>
//
//void add(){
//	 int sum=0;
//   int i, n;
//
//   printf("enter array size:");
//   scanf("%d",&n);
//   int arr[n];
//
//
//   printf("Input:");
//
//
//   for(i=0;i<n;i++)
//   {
//	   scanf("%d",&arr[i]);
//	   sum+=arr[i];
//   }
//   printf("Output: %d",sum);
//}
//
//void xyz(){
//		int mul=1;
//	   int i, n;
//
//	   printf("enter array size:");
//	   scanf("%d",&n);
//	   int arr[n];
//
//
//	   printf("Input:");
//
//
//	   for(i=0;i<n;i++)
//	   {
//		   scanf("%d",&arr[i]);
//		   mul*=arr[i];
//	   }
//	   printf("Output of multiply: %d",mul);
//}
//
//
//int main()
//{
//	printf("-- Adding --\n");
//	add();
//	printf("\n-- Multiplying --\n");
//	xyz();
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char name[5];
////	name[3]= 'x';
////	name[4]= 'x';
//	int i;
//	printf("Enter your name:");
//	scanf("%s",&name);
//
//    for(i=0;i<5;i++)
//    {
//    	printf("%c",name[i]);
//    	printf("\n");
//
//
//
////    	if(name[i]=='\0'){
////			  break;
////    	}
//
//    }
////		printf("%s",name);
//
//	return 0;
//}




////*******  Vowel or not *******
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char ch;
//
//
//	printf("Enter Alphabet:");
//	scanf("%c",&ch);
//
//
//	if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u')
//	{
//		printf("Character is vowel");
//	}
//	else
//		printf("Character is consonant");
//
//
//	return 0;
//}

//********** GREATEST NUMBER AMONG THREE *******
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	float n1;
//	float n2;
//	float n3;
//
//	printf("Enter 1st number:");
//	scanf("%f",&n1);
//
//	printf("Enter 2nd number:");
//	scanf("%f",&n2);
//
//	printf("Enter 3rd number:");
//	scanf("%f",&n3);
//
//
//	if(n1>n2){
//		if(n1>n3)
//			printf("%f is greatest",n1);
//		else
//			printf("%f is greatest",n3);
//	}
//	else{
//
//		if(n2>n3)
//			printf("%f is greatest",n2);
//		else
//			printf("%f is greatest",n3);
//	}
//			return 0;
//}


////****TO CHECK WHETHER LEAP YEAR OR NOT *****
//#include <stdio.h>
//int main()
//{
//	int year;
//
//	printf("Enter year:");
//	scanf("%d",&year);
//
//	if(year%4==0)
//	{
//		if( year%100 == 0)
//		{
//			if ( year%400 == 0)
//				printf("%d is a leap year.", year);
//			else
//				printf("%d is not a leap year.", year);
//		}
//		else
//			printf("%d is a leap year.", year );
//	}
//		else
//	        printf("%d is not a leap year.", year);
//
//	return 0;
//}



////************CHECK IF NUMBER IS POSITIVE OR NOT*******
//#include <stdio.h>
//int main()
//{
//	float a;
//	printf("Enter the number:");
//	scanf("%f",&a);
//		if(a>0)
//			printf("Number is positive");
//		else{
//			if(a==0)
//				printf("Neither +ve nor -ve Hahaha");
//			else
//			printf("Number is negative ");
//		}
//		return 0;
//}




//#include <stdio.h>
//int main()
//{
//	char ch;
//
//	printf("Enter anything:");
//	scanf("%c",&ch);
//			if((ch<97||ch>122)&&(ch<65||ch>90))
//				printf("This isn't a character");
//			else
//			printf("This is a character");
//
////	printf("Ascii %d",ch);
//
//
////97-122 ASCIICode for small alphabets
////65-90  for capital ALPHABETS
//
//
//	return 0;
//}



////****** To Calculate the Sum of Natural Numbers *******
//#include <stdio.h>
//int main()
//{
//	int n;
//	int i;
//	int sum=0;
//printf("Enter value of n:");
//scanf("%d",&n);
//
//
//for(i=0;i<=n;i++)
//{
//	sum+=i;
//}
//
//printf("Sum is %d",sum);
//
//
//
//	return 0;
//}




////**** FACTORIAL OF A NUMBER ****
//#include <stdio.h>
//int main()
//{
//	int i;
//	int n;
//	int factorial =1;
//
//
//	printf("Enter number:");
//	scanf("%d",&n);
//
//	if(n > 0){
//		for(i=n;i>=1;i--){
//			factorial*=i;
//		}
//
//		printf("Factorial is %d",factorial);
//	}
//
//	else{
//		printf("Factorial cannot be calculated");
//	}
//
//	return 0;
//}


//******* Generate Multiplication Table *******
//#include <stdio.h>
//int main(){
//	int i;
//	int n;
//	    printf("Enter number: ");
//	    scanf("%d",&n);
//	    for(i=1; i<=10; ++i){
//	   	printf("\n %d",n*i);
//	    }
//	    return 0;
//}
//




//#include<stdio.h>
//int main(){
//	int n;
//	int i;
//	int x;
//	int y=0;
//	int z=1;
//
//	printf("Enter number of terms:");
//	scanf("%d",&n);
//
//	for(i=0;i<=n;i++){
//		printf("%d ,",y);
////		x=y+z;
////		x=z;
////		z=x;
//
//
//	}
//	return 0;
//}




////Display Characters from A to Z Using Loop
//#include <stdio.h>
//int main(){
//    char ch;
//
//    for(ch='A';ch<='Z';ch++){
//    		printf("%c\t",ch);
//}
//
//	return 0;
//	}


////****** GCD ****
//#include<stdio.h>
//int main()
//{
//    int n1, n2, i, gcd;
//    printf("Enter two integers: ");
//    scanf("%d %d", &n1, &n2);
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//    printf("G.C.D is %d", gcd);
//    return 0;
//}




////****** LCM ****
//#include<stdio.h>
//int main()
//{
//    int n1, n2, i, gcd,lcm;
//    printf("Enter two integers: ");
//    scanf("%d %d", &n1, &n2);
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//
//
//    lcm = (n1*n2)/gcd;
//        printf("The LCM is %d.", lcm);
//    return 0;
//}




//// **** number of digits in an integer *****
//#include <stdio.h>
//int main(){
//	long long n,count=0;
//
//	printf("Enter an integer: ");
//	    scanf("%lld", &n);
//
//	while(n != 0){
//	          count++;
//
//	             n/= 10;
//	        }
//
//	        printf("Total digits: %lld", count);
//	        return 0;
//}


//// *** Reverse a Number ***
//#include <stdio.h>
//int main(){
//	int x,y=0,r;
//
//	printf("Enter number");
//	scanf("%d",&x);
//
//
//	while(x!=0){
//		r=x%10;
//		y=y*10+r;
//		x=x/10;
//	}
//
//	printf("Reverse is %d",y);
//
//	return 0;
//}



// ***** Calculate the Power of a Number *****
//#include <stdio.h>
//int main(){
//	int x,y,z=1,i;
//	printf("Enter a number and its power");
//	scanf("%d %d",&x,&y);
//
//	for(i=1;i<=y;i++){
//		z=z*x;
//	}
//
//
//
//
//	printf("Result is %d",z);
//
//	return 0;
//}




// ***** Whether a Number is Prime or Not ****
//#include <stdio.h>
//int main(){
//	int n,i;
//
//	printf("Enter a number:");
//	scanf("%d",&n);
//	for(i=2;i<n;i++)
//		if(n%i==0)
////		break;
////	if(i==n)
//		printf("%d number is not prime",n);
//	else
//		printf("%d number is prime",n);
//
//
//	return 0;
//}



#include <stdio.h>
int main(){
	int x,y,z;

	printf("Enter two numbers (interval)");
	scanf("%d %d",&x,&y);




	printf("Prime numbers between %d and %d are %d",x,y,z);

	return 0;
}



