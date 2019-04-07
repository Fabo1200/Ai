//
// MainPage.xaml.h
// Deklaration der MainPage-Klasse
//

#pragma once

#include "MainPage.g.h"
#include "../Math/Math.h"

namespace Ai
{
	/// <summary>
	/// Eine leere Seite, die eigenständig verwendet oder zu der innerhalb eines Rahmens navigiert werden kann.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void TextBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
	};
}
