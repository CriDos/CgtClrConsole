//Project
#include "stdafx.h"
#include "Emulate.h"

using namespace System::Runtime::InteropServices;

namespace CgtClr {
	namespace Emulate {
		String^ CharToString(char* ch) {
			return Marshal::PtrToStringAnsi(IntPtr(ch));
		}

		//! функции CGT

		int sdkGetCount(int id_sdk)
		{
			return BaseCgt::ref->sdkGetCount(id_sdk);
		}
		int sdkGetElement(int id_sdk, int index)
		{
			return BaseCgt::ref->sdkGetElement(id_sdk, index);
		}
		int sdkGetElementName(int id_sdk, char *name)
		{
			return BaseCgt::ref->sdkGetElementName(id_sdk, CharToString(name));
		}
		ElementFlags elGetFlag(int id_element)
		{
			return ElementFlags::ELEMENT_FLG_IS_CORE;
		}
		int elGetPropCount(int id_element)
		{
			return 0;
		}
		int elGetProperty(int id_element, int index)
		{
			return 0;
		}
		bool elIsDefProp(int id_element, int index)
		{
			return 0;
		}
		int elSetCodeName(int id_element, const char *name)
		{
			return 0;
		}
		const char *elGetCodeName(int id_element)
		{
			return 0;
		}
		const char *elGetClassName(int id_element)
		{
			return 0;
		}
		const char *elGetInfSub(int id_element)
		{
			return 0;
		}
		int elGetPtCount(int id_element)
		{
			return 0;
		}
		int elGetPt(int id_element, int index)
		{
			return 0;
		}
		int elGetPtName(int id_element, const char *name)
		{
			return 0;
		}
		ElementClass elGetClassIndex(int id_element)
		{
			return ElementClass::CI_AS_Special;
		}
		int elGetSDK(int id_element)
		{
			return 0;
		}
		bool elLinkIs(int id_element)
		{
			return 0;
		}
		int elLinkMain(int id_element)
		{
			return 0;
		}
		void elGetPos(int id_element, int &X, int &Y)
		{
		}
		void elGetSize(int id_element, int &W, int &H)
		{
		}
		int elGetEID(int id_point)
		{
			return 0;
		}
		int ptGetLinkPoint(int id_point)
		{
			return 0;
		}
		int ptGetRLinkPoint(int id_point)
		{
			return 0;
		}
		PointType ptGetType(int id_point)
		{
			return PointType::pt_Data;
		}
		const char *ptGetName(int id_point)
		{
			return 0;
		}
		int ptGetParent(int id_point)
		{
			return 0;
		}
		int ptGetIndex(int id_point)
		{
			return 0;
		}
		const char *pt_dpeGetName(int id_point)
		{
			return 0;
		}
		DataType propGetType(int id_prop)
		{
			return DataType::data_array;
		}
		const char *propGetName(int id_prop)
		{
			return 0;
		}
		int propGetValue(int id_prop)
		{
			return 0;
		}
		unsigned char propToByte(int id_prop)
		{
			return 0;
		}
		int propToInteger(int id_prop)
		{
			return 0;
		}
		double propToReal(int id_prop)
		{
			return 0;
		}
		const char *propToString(int id_prop)
		{
			return 0;
		}
		int resAddFile(const char *name)
		{
			return 0;
		}
		const char *resAddIcon(int id_prop)
		{
			return 0;
		}
		const char *resAddStr(const char *str)
		{
			return 0;
		}
		const char *resAddStream(int id_prop)
		{
			return 0;
		}
		const char *resAddWave(int id_prop)
		{
			return 0;
		}
		const char *resAddBitmap(int id_prop)
		{
			return 0;
		}
		const char *resAddMenu(int id_prop)
		{
			return 0;
		}
		int _Debug(const char *text, int color)
		{
			return 0;
		}
		int GetParam(CgtParams index, void *value)
		{
			return 0;
		}
		int arrCount(int id_value)
		{
			return 0;
		}
		DataType arrType(int id_value)
		{
			return DataType::data_array;
		}
		const char *arrItemName(int id_value, int index)
		{
			return 0;
		}
		int arrItemData(int id_value, int index)
		{
			return 0;
		}
		int arrGetItem(int id_value, int index)
		{
			return 0;
		}
		int isDebug(int id_element)
		{
			return BaseCgt::ref->isDebug(id_element);
		}
		DataType dtType(int id_value)
		{
			return DataType::data_array;
		}
		const char *dtStr(int id_value)
		{
			return 0;
		}
		int dtInt(int id_value)
		{
			return 0;
		}
		double dtReal(int id_value)
		{
			return 0;
		}
		const char *fntName(int id_value)
		{
			return 0;
		}
		int fntSize(int id_value)
		{
			return 0;
		}
		unsigned char fntStyle(int id_value)
		{
			return 0;
		}
		unsigned int fntColor(int id_value)
		{
			return 0;
		}
		unsigned char fntCharSet(int id_value)
		{
			return 0;
		}
		int elGetData(int id_element)
		{
			return 0;
		}
		void elSetData(int id_element, int data)
		{

		}
		DataType ptGetDataType(int id_point)
		{
			return DataType::data_array;
		}
		int elGetParent(int id_element)
		{
			return 0;
		}
		int elGetPropertyListCount(int id_element)
		{
			return 0;
		}
		int elGetPropertyListItem(int id_element, int index)
		{
			return 0;
		}
		const char *plGetName(int id_point)
		{
			return 0;
		}
		const char *plGetInfo(int id_point)
		{
			return 0;
		}
		const char *plGetGroup(int id_point)
		{
			return 0;
		}
		int plGetProperty(int id_point)
		{
			return 0;
		}
		int plGetOwner(int id_prop)
		{
			return 0;
		}
		const char *ptGetInfo(int id_prop)
		{
			return 0;
		}
		int propGetLinkedElement(int id_prop, const char *propName)
		{
			return 0;
		}
		int propIsTranslate(int id_element, int id_prop)
		{
			return 0;
		}
		int propGetLinkedElementInfo(int id_element, int id_prop, char *info)
		{
			return 0;
		}
		int elGetSDKByIndex(int id_element, int index)
		{
			return 0;
		}
		int elGetSDKCount(int id_element)
		{
			return 0;
		}
		const char *elGetSDKName(int id_element, int index)
		{
			return 0;
		}
		int sdkGetParent(int id_sdk)
		{
			return 0;
		}
		const char *elGetInterface(int id_element)
		{
			return 0;
		}
		const char *elGetInherit(int id_element)
		{
			return 0;
		}
		int resEmpty()
		{
			return 0;
		}
		int resSetPref(const char *pref)
		{
			return 0;
		}
		int _Error(int line, int id_element, const char *text)
		{
			return 0;
		}
		int elGetGroup(int id_element)
		{
			return 0;
		}
		int propSaveToFile(int id_prop, const char *fileName)
		{
			return 0;
		}

		static void* proxyCgt[]{
			reinterpret_cast<void*>(sdkGetCount),
			reinterpret_cast<void*>(sdkGetElement),
			reinterpret_cast<void*>(sdkGetElementName),
			reinterpret_cast<void*>(elGetFlag),
			reinterpret_cast<void*>(elGetPropCount),
			reinterpret_cast<void*>(elGetProperty),
			reinterpret_cast<void*>(elIsDefProp),
			reinterpret_cast<void*>(elSetCodeName),
			reinterpret_cast<void*>(elGetCodeName),
			reinterpret_cast<void*>(elGetClassName),
			reinterpret_cast<void*>(elGetInfSub),
			reinterpret_cast<void*>(elGetPtCount),
			reinterpret_cast<void*>(elGetPt),
			reinterpret_cast<void*>(elGetPtName),
			reinterpret_cast<void*>(elGetClassIndex),
			reinterpret_cast<void*>(elGetSDK),
			reinterpret_cast<void*>(elLinkIs),
			reinterpret_cast<void*>(elLinkMain),
			reinterpret_cast<void*>(elGetPos),
			reinterpret_cast<void*>(elGetSize),
			reinterpret_cast<void*>(elGetEID),
			reinterpret_cast<void*>(ptGetLinkPoint),
			reinterpret_cast<void*>(ptGetRLinkPoint),
			reinterpret_cast<void*>(ptGetType),
			reinterpret_cast<void*>(ptGetName),
			reinterpret_cast<void*>(ptGetParent),
			reinterpret_cast<void*>(ptGetIndex),
			reinterpret_cast<void*>(pt_dpeGetName),
			reinterpret_cast<void*>(propGetType),
			reinterpret_cast<void*>(propGetName),
			reinterpret_cast<void*>(propGetValue),
			reinterpret_cast<void*>(propToByte),
			reinterpret_cast<void*>(propToInteger),
			reinterpret_cast<void*>(propToReal),
			reinterpret_cast<void*>(propToString),
			reinterpret_cast<void*>(resAddFile),
			reinterpret_cast<void*>(resAddIcon),
			reinterpret_cast<void*>(resAddStr),
			reinterpret_cast<void*>(resAddStream),
			reinterpret_cast<void*>(resAddWave),
			reinterpret_cast<void*>(resAddBitmap),
			reinterpret_cast<void*>(resAddMenu),
			reinterpret_cast<void*>(_Debug),
			reinterpret_cast<void*>(GetParam),
			reinterpret_cast<void*>(arrCount),
			reinterpret_cast<void*>(arrType),
			reinterpret_cast<void*>(arrItemName),
			reinterpret_cast<void*>(arrItemData),
			reinterpret_cast<void*>(arrGetItem),
			reinterpret_cast<void*>(isDebug),
			reinterpret_cast<void*>(dtType),
			reinterpret_cast<void*>(dtStr),
			reinterpret_cast<void*>(dtInt),
			reinterpret_cast<void*>(dtReal),
			reinterpret_cast<void*>(fntName),
			reinterpret_cast<void*>(fntSize),
			reinterpret_cast<void*>(fntStyle),
			reinterpret_cast<void*>(fntColor),
			reinterpret_cast<void*>(fntCharSet),
			reinterpret_cast<void*>(elGetData),
			reinterpret_cast<void*>(elSetData),
			reinterpret_cast<void*>(ptGetDataType),
			reinterpret_cast<void*>(elGetParent),
			reinterpret_cast<void*>(elGetPropertyListCount),
			reinterpret_cast<void*>(elGetPropertyListItem),
			reinterpret_cast<void*>(plGetName),
			reinterpret_cast<void*>(plGetInfo),
			reinterpret_cast<void*>(plGetGroup),
			reinterpret_cast<void*>(plGetProperty),
			reinterpret_cast<void*>(plGetOwner),
			reinterpret_cast<void*>(ptGetInfo),
			reinterpret_cast<void*>(propGetLinkedElement),
			reinterpret_cast<void*>(propIsTranslate),
			reinterpret_cast<void*>(propGetLinkedElementInfo),
			reinterpret_cast<void*>(elGetSDKByIndex),
			reinterpret_cast<void*>(elGetSDKCount),
			reinterpret_cast<void*>(elGetSDKName),
			reinterpret_cast<void*>(sdkGetParent),
			reinterpret_cast<void*>(elGetInterface),
			reinterpret_cast<void*>(elGetInherit),
			reinterpret_cast<void*>(resEmpty),
			reinterpret_cast<void*>(resSetPref),
			reinterpret_cast<void*>(_Error),
			reinterpret_cast<void*>(elGetGroup),
			reinterpret_cast<void*>(propSaveToFile),
		};

		/*!  Служебные функции   */

		//Получаем массив указателей на функции
		void *getCgt()
		{
			return reinterpret_cast<void *>(proxyCgt);
		}
	}
}