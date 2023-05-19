#pragma once
class CClass
{
public:
	void operator = (const char* szData);
	void Print();
private:
	char m_szBuf[256];
public:
	static CClass& GetInstance();
private:
	static CClass* sg_Instance;
public:
	void Init();
	CClass();
	~CClass();
};