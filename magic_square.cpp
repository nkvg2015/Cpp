#include<iostream>
using namespace std;
int arr[20][20],item=1,n;

int main()
{
int i=0,j=0,k;
cout<<"Enter number n: n must be odd ";
cin>>n;
int x=0,x1,y=n/2,y1;
arr[x][y]=item++;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  {
    x1=x; y1=y;
    x--; y++;
   if(x<0) x=x+n;
   if(y>n-1) y=y-n;

  if(arr[x][y]==0)
   arr[x][y]=item++;
  else
   {
     x1++;
    arr[x1][y1]=item++; x=x1; y=y1;
   }
  }
}

int sum=0,dia_sum=0;
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   {
     if(arr[i][j]>99)cout<<arr[i][j]<<" ";
     else if(arr[i][j]>9) cout<<arr[i][j]<<"  ";
     else cout<<arr[i][j]<<"   "; sum+=arr[i][j];
    if(i==j)
      dia_sum+=arr[i][j];
   }
  cout<<"  row sum: "<<sum<<endl; sum=0;
 }

cout<<"Diagonal Sum is: "<<dia_sum<<endl;
return 0;
}
