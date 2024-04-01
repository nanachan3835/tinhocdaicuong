#include <stdio.h>
#include<string.h>


int main(){
	char S[100],T[100];
	int i,d=0;
	// nhap chuoi
	fflush(stdin);
	
	scanf("%s%s",S,T);
	//mang 26 phan tu dem so
	
	int M[26];
	for(i=0;i<26;i++)
	{
		M[i]=0;
		}
	for(i=0;i<strlen(S);i++)
	{
		M[S[i]-97]++;
		if(S[i]-97>d)
		{ d=S[i]-97;}
	}
	for(i=0;i<strlen(T);i++)
	{
		M[T[i]-97]++;
		if(T[i]-97>d)
		{ d=T[i]-97;}
	}
	//tao chuoi de sap xep
	//char KIMOCHI_INFO[1][strlen(S)+strlen(T)];
	for(i=0;i<=d;i++)
	{  
	 if(M[i]>0)
	 { printf("%c",i+97);}}
	printf("\n");
	for(i=0;i<=d;i++)
	{   if(M[i]>0)
	    {
		printf("%d\n",M[i]);
		}
		}
		return 0;
		}
	
	
	
	
