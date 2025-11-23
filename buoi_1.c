#include <stdio.h> "stdio"

int main (){ 
// code o day
// ham main la ham dac biet trong C. chuong trinh se tu goi ham main khi chay

// ham printf la ham duoc viet san trong thu vien stdio.h. "Hello world" la doi so (argument) cua ham
 
 printf("\Hello World\n");

 // Yeu cau nhap vao 2 so a, b sau do in ra man hinh tong 2 so
 int a, b; // int la integer la kieu so nguyen
 printf("nhap vao so a:");
 
 scanf("%d", &a); // d la digit
 printf("nhap vao so b:");
 scanf("%d", &b);

printf("Tong cua a va b la: %d", a+b); 
 return 0;
}
