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
    for(int i=0;i<n;i++)
      {
          if(a[i]>a[i+1])
          {
            swap(a[i],a[i+1]);
           
          }
        }
        bool flag=true;
        for(int i=0;i<n;i++)
      {
          if(a[i]>a[i+1])
          {
           flag= false;
           break; 
          }
        }
        
  if(flag==true)
  {
    cout<<"Given array is almost sorted";
  }
  else{
    cout<<"The given array is not almost sorted";
  }
  
}
