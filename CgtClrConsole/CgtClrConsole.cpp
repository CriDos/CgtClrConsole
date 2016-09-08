// CgtClrConsole.cpp: главный файл проекта.

#include "stdafx.h"
#include "CgtClr.h"

using namespace System;
using namespace CgtClr;

public ref class Cgt :public BaseCgt
{
public:
	// Унаследовано через BaseCgt
	virtual int sdkGetCount(int id_sdk) override
	{
		return 0;
	}
	virtual int sdkGetElement(int id_sdk, int index) override
	{
		return 0;
	}
	virtual int sdkGetElementName(int id_sdk, String ^ name) override
	{
		return 0;
	}
	virtual ElementFlags elGetFlag(int id_element) override
	{
		return ElementFlags();
	}
	virtual int elGetPropCount(int id_element) override
	{
		return 0;
	}
	virtual int elGetProperty(int id_element, int index) override
	{
		return 0;
	}
	virtual bool elIsDefProp(int id_element, int index) override
	{
		return false;
	}
	virtual int elSetCodeName(int id_element, const String ^ name) override
	{
		return 0;
	}
	virtual const String ^ elGetCodeName(int id_element) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ elGetClassName(int id_element) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ elGetInfSub(int id_element) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int elGetPtCount(int id_element) override
	{
		return 0;
	}
	virtual int elGetPt(int id_element, int index) override
	{
		return 0;
	}
	virtual int elGetPtName(int id_element, const String ^ name) override
	{
		return 0;
	}
	virtual ElementClass elGetClassIndex(int id_element) override
	{
		return ElementClass();
	}
	virtual int elGetSDK(int id_element) override
	{
		return 0;
	}
	virtual bool elLinkIs(int id_element) override
	{
		return false;
	}
	virtual int elLinkMain(int id_element) override
	{
		return 0;
	}
	virtual void elGetPos(int id_element, int % X, int % Y) override
	{
		throw gcnew System::NotImplementedException();
	}
	virtual void elGetSize(int id_element, int % W, int % H) override
	{
		throw gcnew System::NotImplementedException();
	}
	virtual int elGetEID(int id_point) override
	{
		return 0;
	}
	virtual int ptGetLinkPoint(int id_point) override
	{
		return 0;
	}
	virtual int ptGetRLinkPoint(int id_point) override
	{
		return 0;
	}
	virtual PointType ptGetType(int id_point) override
	{
		return PointType();
	}
	virtual const String ^ ptGetName(int id_point) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int ptGetParent(int id_point) override
	{
		return 0;
	}
	virtual int ptGetIndex(int id_point) override
	{
		return 0;
	}
	virtual const String ^ pt_dpeGetName(int id_point) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual DataType propGetType(int id_prop) override
	{
		return DataType();
	}
	virtual const String ^ propGetName(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int propGetValue(int id_prop) override
	{
		return 0;
	}
	virtual unsigned char propToByte(int id_prop) override
	{
		return 0;
	}
	virtual int propToInteger(int id_prop) override
	{
		return 0;
	}
	virtual double propToReal(int id_prop) override
	{
		return 0.0;
	}
	virtual const String ^ propToString(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int resAddFile(const String ^ name) override
	{
		return 0;
	}
	virtual const String ^ resAddIcon(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ resAddStr(const String ^ str) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ resAddStream(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ resAddWave(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ resAddBitmap(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ resAddMenu(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int _Debug(const String ^ text, int color) override
	{
		return 0;
	}
	virtual int GetParam(CgtParams index) override //Доработать
	{
		return 0;
	}
	virtual int arrCount(int id_value) override
	{
		return 0;
	}
	virtual DataType arrType(int id_value) override
	{
		return DataType();
	}
	virtual const String ^ arrItemName(int id_value, int index) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int arrItemData(int id_value, int index) override
	{
		return 0;
	}
	virtual int arrGetItem(int id_value, int index) override
	{
		return 0;
	}
	virtual int isDebug(int id_element) override
	{
		return 0;
	}
	virtual DataType dtType(int id_value) override
	{
		return DataType();
	}
	virtual const String ^ dtStr(int id_value) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int dtInt(int id_value) override
	{
		return 0;
	}
	virtual double dtReal(int id_value) override
	{
		return 0.0;
	}
	virtual const String ^ fntName(int id_value) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int fntSize(int id_value) override
	{
		return 0;
	}
	virtual unsigned char fntStyle(int id_value) override
	{
		return 0;
	}
	virtual unsigned int fntColor(int id_value) override
	{
		return 0;
	}
	virtual unsigned char fntCharSet(int id_value) override
	{
		return 0;
	}
	virtual int elGetData(int id_element) override
	{
		return 0;
	}
	virtual void elSetData(int id_element, int data) override
	{
		throw gcnew System::NotImplementedException();
	}
	virtual DataType ptGetDataType(int id_point) override
	{
		return DataType();
	}
	virtual int elGetParent(int id_element) override
	{
		return 0;
	}
	virtual int elGetPropertyListCount(int id_element) override
	{
		return 0;
	}
	virtual int elGetPropertyListItem(int id_element, int index) override
	{
		return 0;
	}
	virtual const String ^ plGetName(int id_point) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ plGetInfo(int id_point) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ plGetGroup(int id_point) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int plGetProperty(int id_point) override
	{
		return 0;
	}
	virtual int plGetOwner(int id_prop) override
	{
		return 0;
	}
	virtual const String ^ ptGetInfo(int id_prop) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int propGetLinkedElement(int id_prop, const String ^ propName) override
	{
		return 0;
	}
	virtual int propIsTranslate(int id_element, int id_prop) override
	{
		return 0;
	}
	virtual int propGetLinkedElementInfo(int id_element, int id_prop, String ^ info) override
	{
		return 0;
	}
	virtual int elGetSDKByIndex(int id_element, int index) override
	{
		return 0;
	}
	virtual int elGetSDKCount(int id_element) override
	{
		return 0;
	}
	virtual const String ^ elGetSDKName(int id_element, int index) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int sdkGetParent(int id_sdk) override
	{
		return 0;
	}
	virtual const String ^ elGetInterface(int id_element) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual const String ^ elGetInherit(int id_element) override
	{
		throw gcnew System::NotImplementedException();
		// TODO: вставьте здесь оператор return
	}
	virtual int resEmpty() override
	{
		return 0;
	}
	virtual int resSetPref(const String ^ pref) override
	{
		return 0;
	}
	virtual int _Error(int line, int id_element, const String ^ text) override
	{
		return 0;
	}
	virtual int elGetGroup(int id_element) override
	{
		return 0;
	}
	virtual int propSaveToFile(int id_prop, const String ^ fileName) override
	{
		return 0;
	}
};

int main(array<System::String ^> ^args)
{
	Cgt ^cgt = gcnew Cgt();
	cgt->RunCodeGen("C:/Users/Admin/AppData/Roaming/HiAsm_AltBuild/Elements/delphi/CodeGen.dll", 123);

	Console::ReadLine();

	return 0;
}
