#include "GameEngineCore.h"
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngineBase/GameEngineTime.h>
#include "GameEngineLevel.h"

// Resources Header
#include "GameEngineVertexBuffer.h"
#include "GameEngineIndexBuffer.h"

void GameEngineCore::EngineResourcesInitialize()
{
	// �簢�� �ڽ� ������ �ؽ�ó ���
	// �������ؿ��� �⺻������ ������� �Ѵٰ� �����ϴ�
	// ���ҽ����� �̴ϼȶ������ϴ� �ܰ�


	{
		// 0       1

		//    ����
		
		// 3       2
		float Root = static_cast<float>(sqrt(3));

		std::vector<float4> Vertex;
		Vertex.push_back(float4(0.0f, -0.33 * Root));
		Vertex.push_back(float4(-0.5f, 0.33 * 0.5f * Root));
		Vertex.push_back(float4(+0.5f, 0.33 * 0.5f * Root));
		Vertex.push_back(float4(-0.5f, -0.33 * 0.5f * Root));
		Vertex.push_back(float4(+0.5f, -0.33 * 0.5f * Root));
		Vertex.push_back(float4(+0.0f, 0.33 * Root));


		GameEngineVertexBuffer::Create("Rect", Vertex);
	}

	{
		// 0       1

		//    ����

		// 3       2

		std::vector<int> Index;

		// ù��° �ﰢ��
		// ����Ʈ �����ڷ� ���ڸ� �ڿ� �߰����ִ� ��� �߰� �Լ�.
		Index.resize(6);

		// ù��°
		Index[0] = 0;
		Index[1] = 1;
		Index[2] = 2;

		// �ι�°
		Index[3] = 3;
		Index[4] = 4;
		Index[5] = 5;

		GameEngineIndexBuffer::Create("Rect", Index);
	}
	

}


void GameEngineCore::EngineResourcesDestroy()
{
	GameEngineVertexBuffer::ResourcesDestroy();
	GameEngineIndexBuffer::ResourcesDestroy();
}