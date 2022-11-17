//E3. Program in C for Set Difference operation.


#include<stdio.h>
#define max 100
int ifexists(int z[], int u, int v){
int i;
if (u==0) return 0;
for (i=0; i<=u;i++)
if (z[i]==v) return (1);
return (0);
}
void main() {
int p[max], q[max], r[max],m,n,I,j,k;
printf("Enter length of first array:");
scanf("%d",&m);
printf("Enter %d elements of first array\n",m);
for(i=0;i<m;i++ )
scanf("%d",&p[i]);
printf("\nEnter length of second array:");
scanf("%d",&n);
elements of second array\n",n);printf("Enter %d
for(i=0;i<n;i++ )
%d",&q[i]);scanf("
k=0;
)for (i=0;i<m;i++
{
+)or (j=0;j<n;j+f
{
j])if (p[i]==q[
{
break;
}
}
i f(j == n)
{
[i i]))f(!ifexists( r,k,p
{
p[i];=r[k]
k++;
}
}
}
printf("\nThe dif fere nce of the two array is:\n");
for(i = 0;i<k;i++)
printf("%d\n",r[i]);
}
