#pragma once
#include "IController.h"
#if defined(_VISION_ANDROID)
#include <Vision/Runtime/Base/Input/VInputAndroid.hpp>
#endif
#include <Vision/Runtime/EnginePlugins/Havok/HavokPhysicsEnginePlugin/vHavokPhysicsModule.hpp>
#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Input/VFreeCamera.hpp>
#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Entities/TriggerBoxEntity.hpp>
class WaterSimulationController : public IController
{
public:
	WaterSimulationController(void);
	~WaterSimulationController(void);
	virtual void MapTriggers(VInputMap* inputMap) HKV_OVERRIDE;
	virtual bool Run(VInputMap* inputMap) HKV_OVERRIDE;
	virtual void DeInitGUI() HKV_OVERRIDE;
	void StartAutoMode();
	void InitMenu(VAppMenuContext* context);
	VDialog* dialog;
	void EnableMenu();
	bool menuMode;
	bool menuDisplayed;
	bool autoMode;
	VAppMenuContext* spContext;
	//void StartAutoMode();


};

