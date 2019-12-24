/*
    Decimal to Binary Converter
    Google Code-in 2019
    Organization: Fedora Project
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,bin[1000000],i, c = 0, b = 0,z,f ;
    
    cout<<"Hello. I'm Decimal to Binary Converter.Enter a Decimal number and get Binary number"<<endl<<endl<<"Press CTRL+Z(cmd) or CTRL+D(unix) For exit"<<endl<<endl<<endl;
    
    while(scanf("%lld",&a)!=EOF){
        
        z = a;
    b = a;
    for(i = 0; ; i++){
        if(a==1)
             b = 1;
       
        
        if (z ==0){
            cout<<"Decimal "<<z<<"'s Binary is: "<<b;
            f = 0;
            break;
        }
  
          c  = b % 2;
        
    bin[i] = c;
        f = 1;
        
    if(a!=1)
        b = b/2;
        
    if((b==0)&&(i>0))
            break;
        
    if(a==1)
        break;
    
  }
    
    
    if(f==1){
        cout<<"Decimal "<<z<<"'s Binary is: ";
         for( ; i!=-1;i--)
        {
            
        cout<<bin[i];
            
        }
    }
    
    cout<<endl;
        
    }

    cout<<endl<<endl<<endl<<"Thanks For using me."<<endl<<"Have a nice day."<<endl<<"Bye"<<endl;

    return 0;
}
