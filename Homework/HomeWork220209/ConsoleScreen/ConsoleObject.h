#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// ���� :
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
	// Has a �����̶�� �մϴ�.
	// �÷��̾�� ������ �ʹ����� ���� 
	// ���� �� ������ ������ ���� ������ �Ѵٸ�
	// ���̳� �����Ҵ�� �ڽŸ��� �޸𸮸� ������ �Ѵ�.
	TextScreen* Screen_;

	ConsoleVector Pos_;
	// ���� ���̴�.
	char Text_[3];
};

