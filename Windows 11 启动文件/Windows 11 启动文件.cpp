#include<bits/stdc++.h>
#include<stdio.h>
#include<windows.h>
using namespace std; 
#define NONE         "\033[m"
#define LIGHT_CYAN   "\033[1;36m"
#define LIGHT_GREEN  "\033[1;32m"
int main(){
    cout<<"用户名是："; 
	char str[40];
	scanf("%s",&str);
	int Password1;
	cout<<"密码是：";
	cin>>Password1;
	if( Password1 == 54188 )
		{
		system("cls");
		cout<<"Welcome!Loading……";
		Sleep(2010.0930);
		system("cls");
		cout<<"请输入二级密码以验证:"<<endl;
		int Password2;
		cin>>Password2;
		if( Password2 != 14524 && Password2 != 20100930 )
		{
			cout<<"密码错误！";
			Sleep(2010.0930);
			return 0;
		}
		if( Password2 == 14524 )
		{
			system("cls");
			cout<<"Welcome！正在启动 Microsoft Windows 11 适用性检测系统自动检测该电脑的 Windows 11 适用性及兼容性……"<<endl;
			Sleep(18000);
			system("cls");
			cout<<"Microsoft Windows [版本 11.02461.5382462]"<<endl<<"(c) 2021 Microsoft Corporation。保留所有权利。"<<endl;
			Sleep(1800);
			printf(LIGHT_GREEN"ERROR ERROR ERROR ERROR ERROR ERROR ERROR\n"NONE);
			printf(LIGHT_CYAN"ERROR ERROR ERROR ERROR ERROR ERROR ERROR\n"NONE);
			printf(LIGHT_GREEN"写入预读文件失败！\n"NONE);
			printf(LIGHT_CYAN"该电脑不支持TPM平台可信模块及安全启动！\n"NONE);
			Sleep(2010.0930);
			system("cls");
			printf(LIGHT_GREEN"您的电脑配置为极低！建议用0.01元卖给 QQ: 204320679 \n"NONE);
			Sleep(12000);
		}
		if (Password2 == 20100930)
		{
			cout << "Welcome！";
			Sleep(180000); 
		}
		}
	else
		{
			cout<<"密码或用户名错误！";
			Sleep(2010.0930); 
			return 0;	
		}	 
}
