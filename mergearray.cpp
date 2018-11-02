#include<iostream>
using namespace std;
int main()
{  int m, i,j;
cout<<"enter the size of array A";
cin>>m;
int a[m];
for( i=0;i<m;i++)
{ cout<<"enter the elemenmt no "<<i<<" of array A"<<endl;
cin>>a[i];
}
for(i=0;i<m;i++)
{ cout<<a[i];
}
cout<<endl;
int n;
cout<<"enter the size of array B"<<endl;
cin>>n;
int b[n];
for(int i=0;i<n;i++)
{ cout<<"enter the elemenmt no "<<i<<" of array B"<<endl;
cin>>b[i];
}
for(i=0;i<n;i++)
{ cout<<b[i];
}
cout<<endl;
int c[m+n];
for(i=0;i<m;i++)
{ c[i]= a[i];
}
for(i=0,j=0;i<m+n,j<n;i++,j++)
{ c[i+m]= b[i];
}
     cout<<"the merged array is =";
for(i=0;i<m+n;i++)
{ cout<<c[i];
} 
return 0; 
}
