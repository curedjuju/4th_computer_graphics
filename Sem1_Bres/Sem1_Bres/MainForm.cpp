#include "MainForm.h"
#include <Windows.h>

/**
 * Главное окно приложения
 * Автор: Ярных Роман, студент БПИ141 (2), 2017
 */
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
	Color col = lineColor;
	int x;
	int y;
	int x1;
	int y1;
	try {
		x = Int32::Parse(x1Input->Text); //x1
		y = Int32::Parse(y1Input->Text); //y1
		x1 = Int32::Parse(x2Input->Text); //x2
		y1 = Int32::Parse(y2Input->Text); //y2
	}
	catch (FormatException ^e) {
		MessageBox::Show("Неправильный ввод чисел!");
		return;
	}
	int dx = Math::Abs(x1 - x);
	int dy = Math::Abs(y1 - y);
	int s1 = Math::Sign(x1 - x);
	int s2 = Math::Sign(y1 - y);
	int pixelSize = 3;
	int err = 0;
	int wasSwap = false;
	Brush ^brush = gcnew SolidBrush(lineColor);
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
	try {
		xc = Int32::Parse(circleXCenterInput->Text);
		yc = Int32::Parse(circleYCenterInput->Text);
		r = Int32::Parse(circleRadiusInput->Text);
	}
	catch (FormatException ^e) {
		MessageBox::Show("Неправильный ввод числа!");
		return;
	}
	int x = 0;
	int y = r;
	int d = 2 - 2 * r;
	int err = 0;
	Brush ^brush = gcnew SolidBrush(circleColor);
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

void DrawEllipsePart(Graphics ^g, Brush^ brush, int xc, int yc, int x, int y, int pixelSize){
	//1 четверть
	g->FillRectangle(brush, xc + x, yc + y, pixelSize, pixelSize);
	//2 четверть
	g->FillRectangle(brush, xc + x, yc - y, pixelSize, pixelSize);
	//3 четверть
	g->FillRectangle(brush, xc - x, y + yc, pixelSize, pixelSize);
	//4 четверть
	g->FillRectangle(brush, xc - x, yc - y, pixelSize, pixelSize);
}

/*
Рисование эллипса с помощью алгоритма Брезенхема
*/
System::Void MainForm::paintEllipseBtn_Click(System::Object^  sender, System::EventArgs^  e){
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	Brush ^brush = gcnew SolidBrush(ellipseColor);
	int pixelSize = 2;
	int xc;
	int yc;
	int a;
	int b;
	try {
		xc = Int32::Parse(ellipseXCenterInput->Text);
		yc = Int32::Parse(ellipseXCenterInput->Text);
		a = Int32::Parse(aInput->Text);
		b = Int32::Parse(bInput->Text);
	}
	catch (FormatException ^e) {
		MessageBox::Show("Неправильный формат чисел!");
	}
	int x = 0; 
	int y = b; 
	int a_sqr = a * a; // a^2, a - большая полуось
	int b_sqr = b * b; // b^2, b - малая полуось
	int d = 4 * b_sqr * ((x + 1) * (x + 1)) + a_sqr * ((2 * y - 1) * (2 * y - 1)) - 4 * a_sqr * b_sqr; // Функция координат точки (x+1, y-1/2)
	while (a_sqr * (2 * y - 1) > 2 * b_sqr * (x + 1))
	{
		DrawEllipsePart(g, brush, xc, yc, x, y, pixelSize);
		if (d < 0) 
		{
			x++;
			d += 4 * b_sqr * (2 * x + 3);
		}
		else 
		{
			x++;
			d = d - 8 * a_sqr * (y - 1) + 4 * b_sqr * (2 * x + 3);
			y--;
		}
	}
	d = b_sqr * ((2 * x + 1) * (2 * x + 1)) + 4 * a_sqr * ((y + 1) * (y + 1)) - 4 * a_sqr * b_sqr; 
	while (y + 1 != 0) 
	{
		DrawEllipsePart(g, brush, xc, yc, x, y, pixelSize);
		if (d < 0) 
		{
			y--;
			d += 4 * a_sqr * (2 * y + 3);
		}
		else
		{
			y--;
			d = d - 8 * b_sqr * (x + 1) + 4 * a_sqr * (2 * y + 3);
			x++;
		}
	}
}

/*
Информация о программе
*/
System::Void MainForm::aboutProgramMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"Реализация алгоритма Брезенхема для отрезка, окружности и эллипса\n" +
		"© Разработка: Ярных Роман, студент БПИ141(2), 2017"
		);
}

/*
 * Выбор цвета линии 
 */
System::Void MainForm::selectLineColorBtn_Click(System::Object^ sender, System::EventArgs^ e){
	lineColor = Color::Black;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		lineColor = colorDialog->Color;
		lineColorInput->Text = lineColor.ToString();
	}
}

/*
* Выбор цвета линии окружности
*/
System::Void MainForm::selectCircleColorBtn_Click(System::Object^ sender, System::EventArgs^ e){
	circleColor = Color::Black;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		circleColor = colorDialog->Color;
		circleColorInput->Text = lineColor.ToString();
	}
}

/*
* Выбор цвета линии эллипса
*/
System::Void MainForm::selectEllipseColorBtn_Click(System::Object^ sender, System::EventArgs^ e){
	ellipseColor = Color::Black;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		ellipseColor = colorDialog->Color;
		ellipseColorInput->Text = lineColor.ToString();
	}
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
