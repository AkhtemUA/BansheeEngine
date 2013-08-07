#include "BsGUIMouseEvent.h"

using namespace CamelotFramework;

namespace BansheeEngine
{
	GUIMouseEvent::GUIMouseEvent()
		:mType(GUIMouseEventType::MouseMove), mButton(GUIMouseButton::Left), mMouseOverElement(nullptr),
		mShift(false), mCtrl(false), mAlt(false), mWheelScrollAmount(0.0f)
	{

	}

	GUIMouseEvent::GUIMouseEvent(bool buttonStates[GUIMouseButton::Count], bool shift, bool ctrl, bool alt)
		:mType(GUIMouseEventType::MouseMove), mButton(GUIMouseButton::Left), mMouseOverElement(nullptr),
		mShift(shift), mCtrl(ctrl), mAlt(alt)
	{
		memcpy(mButtonStates, buttonStates, sizeof(mButtonStates));
	}

	void GUIMouseEvent::setMouseOverData(GUIElement* mouseOverElement, const Int2& position)
	{
		mType = GUIMouseEventType::MouseOver;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseOutData(GUIElement* mouseOverElement, const Int2& position)
	{
		mType = GUIMouseEventType::MouseOut;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseMoveData(GUIElement* mouseOverElement, const Int2& position)
	{
		mType = GUIMouseEventType::MouseMove;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseWheelScrollData(GUIElement* mouseOverElement, float scrollAmount)
	{
		mType = GUIMouseEventType::MouseWheelScroll;
		mPosition = Int2();
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = scrollAmount;
	}

	void GUIMouseEvent::setMouseUpData(GUIElement* mouseOverElement, const Int2& position, GUIMouseButton button)
	{
		mType = GUIMouseEventType::MouseUp;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = button;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseDownData(GUIElement* mouseOverElement, const Int2& position, GUIMouseButton button)
	{
		mType = GUIMouseEventType::MouseDown;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = button;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseDragData(GUIElement* mouseOverElement, const Int2& position, const Int2& dragAmount)
	{
		mType = GUIMouseEventType::MouseDrag;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = dragAmount;
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseDragStartData(GUIElement* mouseOverElement, const Int2& position)
	{
		mType = GUIMouseEventType::MouseDragStart;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setMouseDragEndData(GUIElement* mouseOverElement, const Int2& position)
	{
		mType = GUIMouseEventType::MouseDragEnd;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
	}

	void GUIMouseEvent::setDragAndDropDroppedData(GUIElement* mouseOverElement, const Int2& position, CM::UINT32 dragTypeId, void* dragData)
	{
		mType = GUIMouseEventType::MouseDragAndDropDropped;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
		mDragTypeId = dragTypeId;
		mDragData = dragData;
	}

	void GUIMouseEvent::setDragAndDropDraggedData(GUIElement* mouseOverElement, const Int2& position, CM::UINT32 dragTypeId, void* dragData)
	{
		mType = GUIMouseEventType::MouseDragAndDropDragged;
		mPosition = position;
		mMouseOverElement = mouseOverElement;
		mButton = GUIMouseButton::Left;
		mDragAmount = Int2();
		mWheelScrollAmount = 0.0f;
		mDragTypeId = dragTypeId;
		mDragData = dragData;
	}
}