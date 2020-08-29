/// Codeforces: 864 C. Bus
/// Category: implementation + math.

#include<bits/stdc++.h>

using namespace std;

int main()

{
   int a,b,f,k;
   cin>>a>>b>>f>>k;

   int stoppage=0;

   bool ox=true;
   bool xo=false;

   int dox=a;
   int dxo=a;

   int curr_gas=b;

   while(k)
   {
       if(ox)
       {
           /// without taking gas,direct go to a. and go back to f or it is last journey.
           if((dox+(a-f)<=curr_gas&&k!=1)||(dox<=curr_gas&&k==1))
           {
               curr_gas-=dox;
               xo=true;
               ox=false;
           }
           /// dox>b ,might take gas and reach to a
           else
           {
               /// not able to reach f ,so impossible.
               if(f>curr_gas)
               {
                   break;
               }
               else
               {
                   /// not able enough to go f
                   if(curr_gas<f) break;
                   /// else refuel.
                   else curr_gas=b;
                   ///after taking gas station not able to reach a from f
                   if(curr_gas<(a-f))
                   {
                       break;
                   }
                   ///able to reach a
                   else
                   {
                       stoppage++;
                       curr_gas-= (a-f);
                        xo=true;
                        ox=false;
                   }
               }
           }
          /// cout<<curr_gas<<" ox "<<stoppage<<endl;
       }
       /// now the time to back from a to o
       else
       {
            ///without taking gas,direct go to o from a. and go to station.or last journey
           if((dxo+f<=curr_gas && k!=1)||(dxo<=curr_gas&&k==1))
           {
               curr_gas-=dox;
               ox=true;
               xo=false;
           }
           ///might be able to reach o from station ,first go station
           else
           {
               /// not able to reach station
               if(curr_gas<(a-f)) break;
               /// refueling
               else  curr_gas=b;
                ///after taking gas station not able to reach o from f
                if(curr_gas<(f))
                {
                       break;
                }
                 ///able to reach O
                else
                {
                       stoppage++;
                       curr_gas-=(f);
                       xo=false;
                       ox=true;
                }
           }
          /// cout<<curr_gas<<" xo "<<stoppage<<endl;
       }
       k--;
   }

   if(!k)
   cout<<stoppage<<endl;
   else cout<<"-1"<<endl;

   return 0;
}
