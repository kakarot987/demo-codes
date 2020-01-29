#include<stdio.h>
#include<string.h>
int main()
{
int t,i,b,j,k,x;
char str[1000];
char a[10][5]={{'.',',','?','!','1'},{'a','b','c','2'},{'d','e','f','3'},{'g','h','i','4'},{'j','k','l','5'},{'m','n','o','6'},{'p','q','r','s','7'},{'t','u','v','8'},{'w','x','y','z','9'},{'_','0'}};
scanf("%d",&t);
for(i=0;i<=t-1;i++)
{int sum=0,q=0,w=0,z=0;
scanf("%s",str);
b=strlen(str);
for(j=0;j<=b-1;j++)
{
for(k=0;k<=9;k++)
{
for(x=0;x<=4;x++)
{
if(str[j]==a[k][x])
{ q=k;
w=x;
break;
}
}
if(str[j]==a[q][w])
{
break;
}
}
if(q==0 && j==0)
{
sum+=w+1;
}
else if(z==q)
{
sum=sum+1+w;
}
else
{
sum=sum+2+w;
}
z=q;
}
printf("%d\n",sum);
}
return 0;
}

