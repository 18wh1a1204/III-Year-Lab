#include<stdio.h>

void shifting(int a[], int n) {
int i=-1,j=n;
while(i<j) {
while(a[++i]>0);
while(a[j++]<0);
if(i<j)
swap(a[i],a[j]);
}

if(i==0 || i==n)
return;
int p=0;
while(p<n &&i<n) {
swap(a[p],a[i]);
i = i+1;
p = p+2;
}
}
void parray(int a[],int n) {
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
}
int main() {
int n,a[6];
printf("Size of array\n");
scanf("%d",&n);
printf("Array elements");
for(int i=0;i<n;i++) {
scanf("%d",&a[i]);
}
shifting(a,n);
parray(a,n);
}
