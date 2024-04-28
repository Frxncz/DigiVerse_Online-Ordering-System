#include "LoginForm.h"

using namespace PointofSaleSystem;

[STAThreadAttribute]

int main()
{
	Application::Run(gcnew LoginForm());

	return 0;
}