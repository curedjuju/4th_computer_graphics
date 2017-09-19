#include "MainForm.h"
#include <Windows.h>

using namespace Sem1_Bres;

/*
Обмен целочисленных значений
*/
void Swap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp;
}

/*
Очистка области рисования
*/
System::Void MainForm::clearBtn_Click(System::Object^ sender, System::EventArgs^ e){
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	g->Clear(col->White);
}

/*
Рисование отрезка с помощью алгоритма Брезенхема
*/
System::Void MainForm::paintLineBtn_Click(System::Object^ sender, System::EventArgs^ e){
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	int x = 10;
	int y = 50;
	int x1 = 60;
	int y1 = 120;
	int dx = Math::Abs(x1 - x);
	int dy = Math::Abs(y1 - y);
	int s1 = Math::Sign(x1 - x);
	int s2 = Math::Sign(y1 - y);
	int pixelSize = 3;
	int err = 0;
	int wasSwap = false;
	Brush ^brush = gcnew SolidBrush(col->Black);
	if (dy < dx){
		Swap(dx, dy);
		wasSwap = true;
	}
	err = 2 * dy - dx;
	for (int i = 1; i <= dx; i++){
		g->FillRectangle(brush, x, y, pixelSize, pixelSize);
		if (x == x1 && y == y1)
			break;
		while (err >= 0){
			if (wasSwap)
				x += s1;
			else
				y += s2;
			err = err - (dx << 1);
		}
		if (wasSwap)
			y += s2;
		else
			x += s1;
		err = err + (dy << 1);
	}
}

/*
Рисование окружности с помощью алгоритма Брезенхема
*/
System::Void MainForm::paintCircleBtn_Click(System::Object^ sender, System::EventArgs^ e){
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	int xc = 200;
	int yc = 100;
	int r = 80;
	int x = 0;
	int y = r;
	int d = 2 - 2 * r;
	int err = 0;
	Brush ^brush = gcnew SolidBrush(col->Black);
	int pixelSize = 2;
	while (y >= 0){
		//1 четверть
		g->FillRectangle(brush, xc + x, yc + y, pixelSize, pixelSize);
		//2 четверть
		g->FillRectangle(brush, xc + x, yc - y, pixelSize, pixelSize);
		//3 четверть
		g->FillRectangle(brush, xc - x, y + yc, pixelSize, pixelSize);
		//4 четверть
		g->FillRectangle(brush, xc - x, yc - y, pixelSize, pixelSize);
		err = 2 * (d + y) - 1;
		if (d < 0 && err <= 0){
			x++;
			d += 2 * x + 1;
			continue;
		}
		if (d > 0 && err > 0){
			y--;
			d -= 2 * y + 1;
			continue;
		}
		x++;
		d += 2 * (x - y);
		y--;
	}
}

/*
Информация о программе
*/
System::Void MainForm::aboutProgramMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"Реализация алгоритма Брезенхема для отрезка\n" +
		"© Разработка: Ярных Роман, студент БПИ141(2), 2017"
		);
}

/*
Точка входа
*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR str, int code){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}
