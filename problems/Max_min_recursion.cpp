#include<iostream>
using namespace std;
struct Max_min_recursion
{
  int max;
  int min;
};


  int Maxmin(int a[],int i,int j,int max, int min);
        

int main()
{
    struct Max_min_recursion
    
    
    int i,j,n;
    cout<<"Enter the ize of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array:";

    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

     
     Maxmin(0, n-1 , a[0], a[n],a);
        
        cout << "Maximum Value is : " <<endl;
        cout << "Minimum Value is : " <<endl;



    
    return 0;
}



    int Maxmin(int i,int j,int max, int min,int a[])
    {

    int max1,min1;
    if (i==j)
    {
        min=max=a[i];
        

    }
    else if (i==j-1)
    {
        if (a[i]<a[j])
        {
            max=a[j];
            min=a[i];
        }
        else
        {
            max=a[i];
            min=a[j];
        }
    }
    else
    {
    
        int mid=(i+j)/2;
        Maxmin(i,mid,max,min,a[]);
        Maxmin(mid+1,j,max1,min1,a[]);
        if (max<max1)
        {
            max=max1;
        }
      
        if (min>min1)
        {
            min=min1;
        }
    

        
        }
    
    int b[2];
    b[0]=max;
    b[1]=min;
    return b;
}
    

