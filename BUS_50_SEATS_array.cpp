#include <iostream>
#include <stdbool.h>
#include <stdlib.h>
using namespace std;
int main()
{
system("color f1");
              
              int busup[5];
              int busdown[5];
              int stat,sum=0,testsum=0;
              
              cout<<"Afethria!!!"<<endl;

              for (stat=0; stat<4; ++stat)
              {
				   cout<<"Epibates : "<<sum<<endl;

				   _Bool flagstat1=0;
                   _Bool flagstat2=0;
				   while (!flagstat1)
                   {
                         
                         if (sum==0)
                         {
                                            cout<<"To lewforeio einai keno!"<<endl;
                                            flagstat1=1;
                         }else{
                                            cout<<"Posoi epibates 8a kateboun? ";
                                            cin>>busdown[stat];
                                            if ((busdown[stat]>50) || (busdown[stat]<0 || busdown[stat]>sum))
                                            { 
                                                                 cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                                            }else{
                                                                 flagstat1=1;
                                            }
                         }      
                   }     
                    
                   while (!flagstat2)
                   {
                         cout<<"Posoi epibates 8a aneboun? ";
                         cin>>busup[stat];
                         testsum=sum+busup[stat]-busdown[stat];
                         if ((busup[stat]>50) || (busup[stat]<0))
                         { 
                                            cout<<"@@@ LA8OS !!! DWSE PALI @@@"<<endl;
                         }else if (testsum>50){
											cout<<"MEGISTOS ARI8MOS EPIBATWN 50. DWSE PALI"<<endl;
                         }else{
                         flagstat2=1;
                         }
                   }
                   sum=sum+busup[stat]-busdown[stat];
                   
                   cout<<"------------------------------------------"<<endl;
              }
              
              cout<<"Teleutaia stash katebhkan "<<sum<<" epibates"<<endl;
			  busup[4]=0;
			  busdown[4]=sum;
			  
			  system("pause");
			  system("cls");
			  
			  for (stat=0; stat<5; ++stat)
			  {
					cout<<"STASH "<<stat+1<<" ---> KATEBHKAN "<<busdown[stat]<<" kai ANEBHKAN "<<busup[stat]<<" epibates."<<endl;
			  }

system("pause");
}
