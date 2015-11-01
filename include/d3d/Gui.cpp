#include "Gui.h"

namespace byhj
{
	namespace d3d
	{
		void Gui::Init(ID3D11Device *pD3D11Device)
		{
			TwInit(TW_DIRECT3D11, pD3D11Device);
			TwBar *bar = TwNewBar("Test");

		}

		void Gui::Update()
		{

		}

		void  Gui::Render()
		{
			// Draw tweak bars
			TwDraw();
		}

		void Gui::Shutdown()
		{
			TwTerminate();
		}
	}
}