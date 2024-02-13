// write a program to convert upper case to lower case using bitwise operator

#include <stdio.h>

char lowercase (char a){
    char b = a|' ';
    return b;
}
int main (){

    char a ='A';
    printf ("%c",lowercase (a));
    return 0;
}



// write a program to add two numbers using function 

#include <stdio.h>

int add (int a, int b){
    int c=a+b;
    return c;
}
int main (){
    printf ("The sum of two number %d",add(4,5));
    return 0;
}




// write a program to take an array of element from use of size n and print the sum of all the elements

#include <stdio.h>

int main (){
    int n;
    printf ("Enter the size of an array :");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter the elements of array:");
    int sum =0;
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
        sum = sum +arr[i];
    }

    printf ("The sum of all the elements is %d :",sum);

    return 0;
}

