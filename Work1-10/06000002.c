#include "stdio.h"
#include "malloc.h"
typedef union word
{
	char m_code[2];
	short m_Code;
}Word;
typedef struct _count_
{
	Word m_Code;
	int m_Count;
	struct _count_ *m_pNext;
}WCount;
void main()
{
	char str[100];
	WCount Header,*pCurrent=NULL,*pNew=NULL;
	char *p=str;
	gets(str);
	Header.m_pNext=NULL;
	while(*p!='\0')
	{
		short unicode;
		if(*p>0)
			unicode=(short)*p++;
		else
		{
			unicode=*((short*)p);
			p+=2;
		}
		pNew=NULL;
		if(Header.m_pNext)
		{
			WCount *pls=Header.m_pNext;
			while(pls)
			{
				if(pls->m_Code.m_Code==unicode)
				{
					pls->m_Count++;
					pNew=pls;
					break;
				}
				pls=pls->m_pNext;
			}
		}
		if(!pNew)
		{
			pNew=(WCount*)malloc(sizeof(WCount));
			pNew->m_pNext=NULL;
			pNew->m_Count=1;
			pNew->m_Code.m_Code=unicode;
			if(!Header.m_pNext)
				Header.m_pNext=pNew;
			if(pCurrent)
				pCurrent->m_pNext=pNew;
			pCurrent=pNew;
		}
	}
	pCurrent=Header.m_pNext;
	while(pCurrent)
	{
		if(pCurrent->m_Code.m_code[1]!=0)
			printf("%c%c %d ",pCurrent->m_Code.m_code[0],pCurrent->m_Code.m_code[1],pCurrent->m_Count);
		else
			printf("%c %d ",pCurrent->m_Code.m_code[0],pCurrent->m_Count);
		pNew=pCurrent;
		pCurrent=pCurrent->m_pNext;
		free(pNew);
	}
}
