#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
   for(int i=0;i<100;i++)
   {
   	 cout<<"正在启动…………"<<endl;
     cout<<"已完成"<<i+1<<"%";
     system("cls"); 
   }
   cout<<"欢迎使用,请查看结果文件。";
   freopen("txt.txt","r",stdin);
   freopen("结果文件.txt","w",stdout);
   cout<<"------------欢迎使用!------------"<<endl;
   cout<<"                           By 黄云灿"<<endl;
   cout<<"https://github.com/Huangyuncan"<<endl; 
   cout<<"------------输出完成-------------"<<endl; 
   fclose(stdin);
   fclose(stdout);
   Sleep( 1800 ); 
   return 0;
}
