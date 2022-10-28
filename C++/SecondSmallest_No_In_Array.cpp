#include<iostream>

using namespace std;
int main()
{
   int i,size, num[20], small, ssmall;
   cout<<"Enter Array size:";
   cin>>size;
   cout<<"Enter any" <<size<<" elements for the array: ";
   for(i=0; i<size; i++)
      cin>>num[i];
   small = num[0];
   for(i=0; i<size; i++)
   {
      if(small>num[i])
         small = num[i];
   }
   ssmall = num[0];
   for(i=0; i<size; i++)
   {
      if(ssmall>num[i])
      {
         if(num[i]!=small)
            ssmall = num[i];
      }
   }
   cout<<"\nSecond smallest element = "<<ssmall;
   cout<<endl;
   return 0;
}
