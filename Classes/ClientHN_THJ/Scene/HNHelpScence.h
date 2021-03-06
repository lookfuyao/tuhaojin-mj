#pragma once
#include "cocos2d.h"
#include "Game/FV/FvSingleton.h"
#include "Game/Widget/WidgetDefine.h"
#include "Game/Game/MissionWeiXin.h"
#include "Platform/PFKernel/CGPGameRecord.h"

class HNHelpScence
	:public cocos2d::Node
	,public FvSingleton<HNHelpScence> 
{
public:
	HNHelpScence();
	~HNHelpScence();
public:
	virtual bool init();
public:
	void EnterScence();
	void hideAll();

public:
	void Button_WanFaGuiZhe(cocos2d::Ref*,WidgetUserInfo*);
};