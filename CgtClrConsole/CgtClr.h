#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {

	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, int idRootContainer);
		static BaseCgt ^ref;

		virtual int sdkGetCount(int id_sdk) abstract;
		virtual int sdkGetElement(int id_sdk, int index) abstract;
		virtual int sdkGetElementName(int id_sdk, String ^ name) abstract;
		virtual ElementFlags elGetFlag(int id_element) abstract;
		virtual int elGetPropCount(int id_element) abstract;
		virtual int elGetProperty(int id_element, int index) abstract;
		virtual bool elIsDefProp(int id_element, int index) abstract;
		virtual int elSetCodeName(int id_element, const String ^ name) abstract;
		virtual const String ^ elGetCodeName(int id_element) abstract;
		virtual const String ^ elGetClassName(int id_element) abstract;
		virtual const String ^ elGetInfSub(int id_element) abstract;
		virtual int elGetPtCount(int id_element) abstract;
		virtual int elGetPt(int id_element, int index) abstract;
		virtual int elGetPtName(int id_element, const String ^ name) abstract;
		virtual ElementClass elGetClassIndex(int id_element) abstract;
		virtual int elGetSDK(int id_element) abstract;
		virtual bool elLinkIs(int id_element) abstract;
		virtual int elLinkMain(int id_element) abstract;
		virtual void elGetPos(int id_element, int % X, int % Y) abstract;
		virtual void elGetSize(int id_element, int % W, int % H) abstract;
		virtual int elGetEID(int id_point) abstract;
		virtual int ptGetLinkPoint(int id_point) abstract;
		virtual int ptGetRLinkPoint(int id_point) abstract;
		virtual PointType ptGetType(int id_point) abstract;
		virtual const String ^ ptGetName(int id_point) abstract;
		virtual int ptGetParent(int id_point) abstract;
		virtual int ptGetIndex(int id_point) abstract;
		virtual const String ^ pt_dpeGetName(int id_point) abstract;
		virtual DataType propGetType(int id_prop) abstract;
		virtual const String ^ propGetName(int id_prop) abstract;
		virtual int propGetValue(int id_prop) abstract;
		virtual unsigned char propToByte(int id_prop) abstract;
		virtual int propToInteger(int id_prop) abstract;
		virtual double propToReal(int id_prop) abstract;
		virtual const String ^ propToString(int id_prop) abstract;
		virtual int resAddFile(const String ^ name) abstract;
		virtual const String ^ resAddIcon(int id_prop) abstract;
		virtual const String ^ resAddStr(const String ^ str) abstract;
		virtual const String ^ resAddStream(int id_prop) abstract;
		virtual const String ^ resAddWave(int id_prop) abstract;
		virtual const String ^ resAddBitmap(int id_prop) abstract;
		virtual const String ^ resAddMenu(int id_prop) abstract;
		virtual int _Debug(const String ^ text, int color) abstract;
		virtual int GetParam(CgtParams index) abstract; //TODO доработать
		virtual int arrCount(int id_value) abstract;
		virtual DataType arrType(int id_value) abstract;
		virtual const String ^ arrItemName(int id_value, int index) abstract;
		virtual int arrItemData(int id_value, int index) abstract;
		virtual int arrGetItem(int id_value, int index) abstract;
		virtual int isDebug(int id_element) abstract;
		virtual DataType dtType(int id_value) abstract;
		virtual const String ^ dtStr(int id_value) abstract;
		virtual int dtInt(int id_value) abstract;
		virtual double dtReal(int id_value) abstract;
		virtual const String ^ fntName(int id_value) abstract;
		virtual int fntSize(int id_value) abstract;
		virtual unsigned char fntStyle(int id_value) abstract;
		virtual unsigned int fntColor(int id_value) abstract;
		virtual unsigned char fntCharSet(int id_value) abstract;
		virtual int elGetData(int id_element) abstract;
		virtual void elSetData(int id_element, int data) abstract;
		virtual DataType ptGetDataType(int id_point) abstract;
		virtual int elGetParent(int id_element) abstract;
		virtual int elGetPropertyListCount(int id_element) abstract;
		virtual int elGetPropertyListItem(int id_element, int index) abstract;
		virtual const String ^ plGetName(int id_point) abstract;
		virtual const String ^ plGetInfo(int id_point) abstract;
		virtual const String ^ plGetGroup(int id_point) abstract;
		virtual int plGetProperty(int id_point) abstract;
		virtual int plGetOwner(int id_prop) abstract;
		virtual const String ^ ptGetInfo(int id_prop) abstract;
		virtual int propGetLinkedElement(int id_prop, const String ^ propName) abstract;
		virtual int propIsTranslate(int id_element, int id_prop) abstract;
		virtual int propGetLinkedElementInfo(int id_element, int id_prop, String ^ info) abstract;
		virtual int elGetSDKByIndex(int id_element, int index) abstract;
		virtual int elGetSDKCount(int id_element) abstract;
		virtual const String ^ elGetSDKName(int id_element, int index) abstract;
		virtual int sdkGetParent(int id_sdk) abstract;
		virtual const String ^ elGetInterface(int id_element) abstract;
		virtual const String ^ elGetInherit(int id_element) abstract;
		virtual int resEmpty() abstract;
		virtual int resSetPref(const String ^ pref) abstract;
		virtual int _Error(int line, int id_element, const String ^ text) abstract;
		virtual int elGetGroup(int id_element) abstract;
		virtual int propSaveToFile(int id_prop, const String ^ fileName) abstract;
	};
}