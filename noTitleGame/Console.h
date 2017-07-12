//==============================================================================
// Console.h
// author:ryuya nakamura
//==============================================================================
#pragma once

//----------------------------------------------------------
// include
//----------------------------------------------------------
#include <cstdio>
#include <clocale>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <Windows.h>

//----------------------------------------------------------
// define
//----------------------------------------------------------

//----------------------------------------------------------
// class Console
//----------------------------------------------------------
class Console
{
public:

	//--------------------------------------
	// �R���X�g���N�^
	Console()
	{
		FILE *pFile = nullptr;
		_tfreopen_s(&pFile, TEXT("CONOUT$"), TEXT("w"), stdout);
		_tfreopen_s(&pFile, TEXT("CONOUT$"), TEXT("w"), stderr);
		_tsetlocale(LC_ALL, TEXT(".OCP"));
	}


	//--------------------------------------
	// �f�X�g���N�^
	virtual ~Console()
	{
		if (mIsConsoleAllocated)
		{
			system("pause");
			FreeConsole();
		}
	}


private:
	bool mIsConsoleAllocated = AllocConsole() == TRUE;


};

//--------------------------------------
// end of file
//--------------------------------------


