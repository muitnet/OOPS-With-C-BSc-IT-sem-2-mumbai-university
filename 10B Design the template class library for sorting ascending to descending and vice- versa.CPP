#include<iostream.h>
#include<conio.h>
template<class A>
void sort_asc(A *a, int n)
{
int i,j;
A t;
for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 }
 }
};
void main()
{
clrscr();
int a[10],i;
float f[10];
char c[10];
cout<<endl<<"Enter 5 integers\n";
for(i=0;i<5;i++)
cin>>a[i];
cout<<endl<<"Enter 5 floats\n";
for(i=0;i<5;i++)
cin>>f[i];
cout<<endl<<"Enter 5 characters\n";
for(i=0;i<5;i++)
cin>>c[i];
cout<<endl<<"Integers before sorting\n";
for(i=0;i<5;i++)
cout<<a[i]<<"\t";
sort_asc(a,5);
cout<<endl<<"Integers after sorting\n";
for(i=0;i<5;i++)
cout<<a[i]<<"\t";
cout<<endl<<"Floats before sorting\n";
for(i=0;i<5;i++)
cout<<f[i]<<"\t";
sort_asc(f,5);
cout<<endl<<"Floats after sorting\n";
for(i=0;i<5;i++)
cout<<f[i]<<"\t";
cout<<endl<<"Characters before sorting\n";
for(i=0;i<5;i++)
cout<<c[i]<<"\t";
sort_asc(c,5);
cout<<endl<<"Characters after sorting\n";
for(i=0;i<5;i++)
cout<<c[i]<<"\t";
getch();
}