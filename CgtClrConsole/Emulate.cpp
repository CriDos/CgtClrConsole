﻿//Project
#include "stdafx.h"
#include "Emulate.h"
#include <string>

using namespace System::Runtime::InteropServices;
using namespace System;

namespace CgtClr {
	namespace Emulate {
		//Служебные функции
		String^ CharToString(char* ch) {
			return Marshal::PtrToStringAnsi(IntPtr(ch));
		}

		const char * StringToChar(String ^managedString) {
			return (const char*)(Marshal::StringToHGlobalAnsi(managedString)).ToPointer();
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
			return BaseCgt::ref->elGetFlag(id_element);
		}
		int elGetPropCount(int id_element)
		{
			return BaseCgt::ref->elGetPropCount(id_element);
		}
		int elGetProperty(int id_element, int index)
		{
			return BaseCgt::ref->elGetProperty(id_element, index);
		}
		bool elIsDefProp(int id_element, int index)
		{
			return BaseCgt::ref->elIsDefProp(id_element, index);
		}
		int elSetCodeName(int id_element, char *name)
		{
			return BaseCgt::ref->elSetCodeName(id_element, CharToString(name));
		}
		const char *elGetCodeName(int id_element)
		{
			return StringToChar(BaseCgt::ref->elGetCodeName(id_element));
		}
		const char *elGetClassName(int id_element)
		{
			return StringToChar(BaseCgt::ref->elGetClassName(id_element));
		}
		const char *elGetInfSub(int id_element)
		{
			return StringToChar(BaseCgt::ref->elGetInfSub(id_element));
		}
		int elGetPtCount(int id_element)
		{
			return BaseCgt::ref->elGetPtCount(id_element);
		}
		int elGetPt(int id_element, int index)
		{
			return BaseCgt::ref->elGetPt(id_element, index);
		}
		int elGetPtName(int id_element, char *name)
		{
			return BaseCgt::ref->elGetPtName(id_element, CharToString(name));
		}
		ElementClass elGetClassIndex(int id_element)
		{
			return BaseCgt::ref->elGetClassIndex(id_element);
		}
		int elGetSDK(int id_element)
		{
			return BaseCgt::ref->elGetSDK(id_element);
		}
		bool elLinkIs(int id_element)
		{
			return BaseCgt::ref->elLinkIs(id_element);
		}
		int elLinkMain(int id_element)
		{
			return BaseCgt::ref->elLinkMain(id_element);
		}
		void elGetPos(int id_element, int &X, int &Y)
		{
			BaseCgt::ref->elGetPos(id_element, X, Y);
		}
		void elGetSize(int id_element, int &W, int &H)
		{
			BaseCgt::ref->elGetSize(id_element, W, H);
		}
		int elGetEID(int id_point)
		{
			return BaseCgt::ref->elGetEID(id_point);
		}
		int ptGetLinkPoint(int id_point)
		{
			return BaseCgt::ref->ptGetLinkPoint(id_point);
		}
		int ptGetRLinkPoint(int id_point)
		{
			return BaseCgt::ref->ptGetRLinkPoint(id_point);
		}
		PointType ptGetType(int id_point)
		{
			return BaseCgt::ref->ptGetType(id_point);
		}
		const char *ptGetName(int id_point)
		{
			return StringToChar(BaseCgt::ref->ptGetName(id_point));
		}
		int ptGetParent(int id_point)
		{
			return BaseCgt::ref->ptGetParent(id_point);
		}
		int ptGetIndex(int id_point)
		{
			return BaseCgt::ref->ptGetIndex(id_point);
		}
		const char *pt_dpeGetName(int id_point)
		{
			return StringToChar(BaseCgt::ref->pt_dpeGetName(id_point));
		}
		DataType propGetType(int id_prop)
		{
			return BaseCgt::ref->propGetType(id_prop);
		}
		const char *propGetName(int id_prop)
		{
			return StringToChar(BaseCgt::ref->propGetName(id_prop));
		}
		int propGetValue(int id_prop)
		{
			return BaseCgt::ref->propGetValue(id_prop);
		}
		unsigned char propToByte(int id_prop)
		{
			return BaseCgt::ref->propToByte(id_prop);
		}
		int propToInteger(int id_prop)
		{
			return BaseCgt::ref->propToInteger(id_prop);
		}
		double propToReal(int id_prop)
		{
			return BaseCgt::ref->propToReal(id_prop);
		}
		const char *propToString(int id_prop)
		{
			return StringToChar(BaseCgt::ref->propToString(id_prop));
		}
		int resAddFile(char *name)
		{
			return BaseCgt::ref->resAddFile(CharToString(name));
		}
		const char *resAddIcon(int id_prop)
		{
			return StringToChar(BaseCgt::ref->resAddIcon(id_prop));
		}
		const char *resAddStr(char *str)
		{
			return StringToChar(BaseCgt::ref->resAddStr(CharToString(str)));
		}
		const char *resAddStream(int id_prop)
		{
			return StringToChar(BaseCgt::ref->resAddStream(id_prop));
		}
		const char *resAddWave(int id_prop)
		{
			return StringToChar(BaseCgt::ref->resAddWave(id_prop));
		}
		const char *resAddBitmap(int id_prop)
		{
			return StringToChar(BaseCgt::ref->resAddBitmap(id_prop));
		}
		const char *resAddMenu(int id_prop)
		{
			return StringToChar(BaseCgt::ref->resAddMenu(id_prop));
		}
		int _Debug(char *text, int color)
		{
			return BaseCgt::ref->_Debug(CharToString(text), color);
		}
		int GetParam(CgtParams index, void *buf) //TODO проверить
		{
			Object ^param = BaseCgt::ref->GetParam(index);

			if (param == nullptr)
				return 0;

			auto writeString = [buf](Object ^obj) {
#pragma warning( disable : 4996 )
				strcpy(reinterpret_cast<char *>(buf), StringToChar(obj->ToString()));
			};
			auto writeInt = [buf](Object ^obj) {
				*reinterpret_cast<int *>(buf) = (int)obj; //-V206
			};

			switch (index) {
			case CgtParams::PARAM_CODE_PATH:
				writeString(param);
				break;
			case CgtParams::PARAM_DEBUG_MODE:
				writeInt(param);
				break;
			case CgtParams::PARAM_DEBUG_SERVER_PORT:
				writeInt(param);
				break;
			case CgtParams::PARAM_DEBUG_CLIENT_PORT:
				writeInt(param);
				break;
			case CgtParams::PARAM_PROJECT_PATH:
				writeString(param);
				break;
			case CgtParams::PARAM_HIASM_VERSION:
				writeString(param);
				break;
			case CgtParams::PARAM_USER_NAME:
				writeString(param);
				break;
			case CgtParams::PARAM_USER_MAIL:
				writeString(param);
				break;
			case CgtParams::PARAM_PROJECT_NAME:
				writeString(param);
				break;
			case CgtParams::PARAM_SDE_WIDTH:
				writeInt(param);
				break;
			case CgtParams::PARAM_SDE_HEIGHT:
				writeInt(param);
				break;
			case CgtParams::PARAM_COMPILER:
				writeString(param);
				break;
			}

			return 0;
		}
		int arrCount(int id_value)
		{
			return BaseCgt::ref->arrCount(id_value);
		}
		DataType arrType(int id_value)
		{
			return BaseCgt::ref->arrType(id_value);
		}
		const char *arrItemName(int id_value, int index)
		{
			return StringToChar(BaseCgt::ref->arrItemName(id_value, index));
		}
		int arrItemData(int id_value, int index)
		{
			return BaseCgt::ref->arrItemData(id_value, index);
		}
		int arrGetItem(int id_value, int index)
		{
			return BaseCgt::ref->arrGetItem(id_value, index);
		}
		int isDebug(int id_element)
		{
			return BaseCgt::ref->isDebug(id_element);
		}
		DataType dtType(int id_value)
		{
			return BaseCgt::ref->dtType(id_value);
		}
		const char *dtStr(int id_value)
		{
			return StringToChar(BaseCgt::ref->dtStr(id_value));
		}
		int dtInt(int id_value)
		{
			return BaseCgt::ref->dtInt(id_value);
		}
		double dtReal(int id_value)
		{
			return BaseCgt::ref->dtReal(id_value);
		}
		const char *fntName(int id_value)
		{
			return StringToChar(BaseCgt::ref->fntName(id_value));
		}
		int fntSize(int id_value)
		{
			return BaseCgt::ref->fntSize(id_value);
		}
		unsigned char fntStyle(int id_value)
		{
			return BaseCgt::ref->fntStyle(id_value);
		}
		unsigned int fntColor(int id_value)
		{
			return BaseCgt::ref->fntColor(id_value);
		}
		unsigned char fntCharSet(int id_value)
		{
			return BaseCgt::ref->fntCharSet(id_value);
		}
		int elGetData(int id_element)
		{
			return BaseCgt::ref->elGetData(id_element);
		}
		void elSetData(int id_element, int data)
		{
			BaseCgt::ref->elSetData(id_element, data);
		}
		DataType ptGetDataType(int id_point)
		{
			return BaseCgt::ref->ptGetDataType(id_point);
		}
		int elGetParent(int id_element)
		{
			return BaseCgt::ref->elGetParent(id_element);
		}
		int elGetPropertyListCount(int id_element)
		{
			return BaseCgt::ref->elGetPropertyListCount(id_element);
		}
		int elGetPropertyListItem(int id_element, int index)
		{
			return BaseCgt::ref->elGetPropertyListItem(id_element, index);
		}
		const char *plGetName(int id_point)
		{
			return StringToChar(BaseCgt::ref->plGetName(id_point));
		}
		const char *plGetInfo(int id_point)
		{
			return StringToChar(BaseCgt::ref->plGetInfo(id_point));
		}
		const char *plGetGroup(int id_point)
		{
			return StringToChar(BaseCgt::ref->plGetGroup(id_point));
		}
		int plGetProperty(int id_point)
		{
			return BaseCgt::ref->plGetProperty(id_point);
		}
		int plGetOwner(int id_prop)
		{
			return BaseCgt::ref->plGetOwner(id_prop);
		}
		const char *ptGetInfo(int id_prop)
		{
			return StringToChar(BaseCgt::ref->ptGetInfo(id_prop));
		}
		int propGetLinkedElement(int id_prop, char *propName)
		{
			return BaseCgt::ref->propGetLinkedElement(id_prop, CharToString(propName));
		}
		int propIsTranslate(int id_element, int id_prop)
		{
			return BaseCgt::ref->propIsTranslate(id_element, id_prop);
		}
		int propGetLinkedElementInfo(int id_element, int id_prop, char *info)
		{
			return BaseCgt::ref->propGetLinkedElementInfo(id_element, id_prop, CharToString(info));
		}
		int elGetSDKByIndex(int id_element, int index)
		{
			return BaseCgt::ref->elGetSDKByIndex(id_element, index);
		}
		int elGetSDKCount(int id_element)
		{
			return BaseCgt::ref->elGetSDKCount(id_element);
		}
		const char *elGetSDKName(int id_element, int index)
		{
			return StringToChar(BaseCgt::ref->elGetSDKName(id_element, index));
		}
		int sdkGetParent(int id_sdk)
		{
			return BaseCgt::ref->sdkGetParent(id_sdk);
		}
		const char *elGetInterface(int id_element)
		{
			return StringToChar(BaseCgt::ref->elGetInterface(id_element));
		}
		const char *elGetInherit(int id_element)
		{
			return StringToChar(BaseCgt::ref->elGetInherit(id_element));
		}
		int resEmpty()
		{
			return BaseCgt::ref->resEmpty();
		}
		int resSetPref(char *pref)
		{
			return BaseCgt::ref->resSetPref(CharToString(pref));
		}
		int _Error(int line, int id_element, char *text)
		{
			return BaseCgt::ref->_Error(line, id_element, CharToString(text));
		}
		int elGetGroup(int id_element)
		{
			return BaseCgt::ref->elGetGroup(id_element);
		}
		int propSaveToFile(int id_prop, char *fileName)
		{
			return BaseCgt::ref->propSaveToFile(id_prop, CharToString(fileName));
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