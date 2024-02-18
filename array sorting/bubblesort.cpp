#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++)
    { bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
          if(a[j]<a[j+1])
          {
            swap(a[j],a[j+1]);
           flag=false;
          }
        }
        if(flag==true)
        {
          break;
        }
        
        
    }
  cout<<"the sorted elements are:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
