#include <iostream>
using namespace std;
int main() {
 
 
int koltuk=10;
 
int business=5;
 
int ekonomi=5;
 
int sinif;
 
 
while (koltuk>=0)
 
{
 
if (koltuk<=0)
 
{
 
cout<<"Koltuk kalmamisitir."<<endl;
 
koltuk--;
 
}
 
else
 
{
 
cout<<"Hangi sinifta ucmak istediginizi giriniz."<<endl;
 
cout<<"1-Business 2-Ekonomi"<<endl;
 
cin>>sinif;
 
if (sinif==1)
 
{
 
if (business<=0)
 
{
 
cout<<"Business sinifinda koltuk kalmamistir."<<endl;
 
}
 
else
 
{
 
cout<<business<<". Business koltuk isteginiz uzere ayirtildi."<<endl;
 
koltuk--;
 
}
 
business--;
 
}
 
else if(sinif==2)
 
{
 
if (ekonomi<=0)
 
{
 
cout<<"Ekonomi sinifinda koltuk kalmamisir."<<endl;
 
}
 
else
 
{
 
cout<<ekonomi<<". Ekonomi koltuk isteginiz uzere ayirtildi."<<endl;
 
koltuk--;
 
}
 
ekonomi--;
 
}
 
 
}
 
}
 
 
return 0;
}