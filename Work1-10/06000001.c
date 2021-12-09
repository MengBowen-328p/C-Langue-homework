#include <stdio.h>
#include <malloc.h>
//定义共用体
typedef union _datatype_
{
	char m_char;
	int m_int;
	float m_float;
	double m_double;
	char *m_pPtr;//指针，
}DataType;
//定义适用的数据类标识
enum TypeFlag {Char,Int,Float,Double,pChar,pInt,pFloat,pDouble};
//定义使用数据类型
typedef struct _useType_
{
	enum TypeFlag m_useType;//真实的数据类型
	DataType m_Value;//变量值
}UseType;
void InputValue(UseType* pObject);
void DisplayValue(UseType* pObject);
void main(void)
{
	UseType a,b,c,d,e,f;
	a.m_useType=Char;
	b.m_useType=Int;
	c.m_useType=Float;
	d.m_useType=Double;
	e.m_useType=pChar;
	f.m_useType=pDouble;
	InputValue(&a);
	InputValue(&b);
	InputValue(&c);
	InputValue(&d);
	InputValue(&e);
	InputValue(&f);
	DisplayValue(&a);
	DisplayValue(&b);
	DisplayValue(&c);
	DisplayValue(&d);
	DisplayValue(&e);
	DisplayValue(&f);
	printf("\n\n");
}
//定义根据真实数据类型的数据输入函数
void InputValue(UseType* pObject)
{
	switch(pObject->m_useType)
	{
	case Char:
		printf("输入1个字符");
		/*BLANK*/
		pObject->m_Value.m_char=getchar();
		/*BLANK*/
		return;
	case Int:
		printf("输入1个整型数");
		/*BLANK*/
		scanf("%d",&pObject->m_Value.m_int);
		return;
		/*BLANK*/
	case Float:
		printf("输入1个单精度实型数");
		/*BLANK*/
		scanf("%f",&pObject->m_Value.m_float);
		return;
		/*BLANK*/
	case Double:
		printf("输入1个双精度实型数");
		/*BLANK*/
		scanf("%lf",&pObject->m_Value.m_double);
		return;
		/*BLANK*/
	case pChar:
		printf("输入1个字符串(<20)");
		pObject->m_Value.m_pPtr=(char*)malloc(20);
		scanf("%s",pObject->m_Value.m_pPtr);
		return;
	case pInt:
		printf("输入1个整型数");
		pObject->m_Value.m_pPtr=(char*)malloc(sizeof(int));
		scanf("%d",(int*)pObject->m_Value.m_pPtr);
		return;
	case pFloat:
		printf("输入1个单精度实型数(指针型)");
		pObject->m_Value.m_pPtr=(char*)malloc(sizeof(float));
		scanf("%f",(float*)pObject->m_Value.m_pPtr);
		return;
	case pDouble:
		printf("输入1个双精度实型数(指针型)");
		pObject->m_Value.m_pPtr=(char*)malloc(sizeof(double));
		scanf("%lf",(double*)pObject->m_Value.m_pPtr);
		return;
	}
}
//定义根据真实的数据类型的输出函数
void DisplayValue(UseType* pObject)
{
	switch(pObject->m_useType)
	{
	case Char:
		/*BLANK*/
		printf("%c ",pObject->m_Value.m_char);
		/*BLANK*/
		return;
	case Int:
		/*BLANK*/
		printf("%d ",pObject->m_Value.m_int);
		return;
		/*BLANK*/
	case Float:
		/*BLANK*/
		printf("%f ",pObject->m_Value.m_float);
		return;
		/*BLANK*/
	case Double:
		/*BLANK*/
		printf("%lf ",pObject->m_Value.m_double);
		return;
		/*BLANK*/
	case pChar:
		/*BLANK*/
		printf("%s ",pObject->m_Value.m_pPtr);
		return;
		/*BLANK*/
	case pInt:
		printf("%d ",*((int*)pObject->m_Value.m_pPtr));
		return;
	case pFloat:
		/*BLANK*/
		printf("%f ",*((float*)pObject->m_Value.m_pPtr));
		return;
		/*BLANK*/
	case pDouble:
		printf("%lf ",*((double*)pObject->m_Value.m_pPtr));
		return;
	}
}
