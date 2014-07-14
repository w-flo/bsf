#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "BsScriptGUIElement.h"
#include "BsVector2I.h"
#include "BsRectI.h"

namespace BansheeEngine
{
	class BS_SCR_BE_EXPORT ScriptGUILayoutUtility : public ScriptObject<ScriptGUILayoutUtility>
	{
	public:
		SCRIPT_OBJ(BansheeEngineAssemblyName, "BansheeEngine", "GUILayoutUtility")

		ScriptGUILayoutUtility();

	private:
		static Vector2I internal_CalculateOptimalSize(ScriptGUIElementBaseTBase* guiElement);
		static RectI internal_CalculateBounds(ScriptGUIElementBaseTBase* guiElement);
	};
}