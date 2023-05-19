#include "stdafx.h"
#include "CClass.h"

using namespace std;

CClass* CClass::sg_Instance = NULL;

CClass& CClass::GetInstance()
{
	if (sg_Instance == NULL)
	{
		sg_Instance = new CClass;
	}
	return *sg_Instance;
}

void CClass::Init()
{

}

CClass::CClass()
{

}

CClass::~CClass()
{

}

void CClass::operator = (const char* szData)
{
	strcpy(m_szBuf, szData);
}

void CClass::Print()
{
	cout << m_szBuf << endl;
}