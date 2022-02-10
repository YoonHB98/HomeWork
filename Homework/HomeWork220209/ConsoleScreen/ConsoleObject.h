#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// 설명 :
class ConsoleObject
{
public:
	// constrcuter destructer
	ConsoleObject(
		TextScreen* _Screen,
		const char* _Text,
		const ConsoleVector& _Pos);
	

	~ConsoleObject();

	// delete Function
	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

	ConsoleVector GetPos()
	{
		return Pos_;
	
	}
	void Exit(ConsoleVector _Value)
	{
		return;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;

	}

	void SetMove(ConsoleVector _Value)
	{
		
		Pos_ += _Value;
		if (Pos_.x_ < 0)
		{
			Pos_ -= _Value;
		}
		if (Pos_.y_ < 0)
		{
			Pos_ -= _Value;
		}
		if (Pos_.x_ > Screen_->GetSize().x_ -1)
		{
			Pos_ -= _Value;
		}
		if (Pos_.y_ > Screen_->GetSize().y_ -1)
		{
			Pos_ -= _Value;
		}

	}

	void NotMove()
	{

	}
	void Render();

protected:

private:
	// Has a 개념이라고 합니다.
	// 플레이어는 어차피 너무나도 많이 
	// 만약 이 개념이 각자의 것을 가져야 한다면
	// 값이나 동적할당된 자신만의 메모리를 가져야 한다.
	TextScreen* Screen_;

	ConsoleVector Pos_;
	// 내가 별이다.
	char Text_[3];
};

