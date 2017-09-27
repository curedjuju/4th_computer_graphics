#include "MainForm.h"
#include <Windows.h>

/**
 * Главное окно приложения
 * Автор: Ярных Роман, студент БПИ141 (2), 2017
 */
using namespace Sem1_Bres;

enum Figure { LINE, CIRCLE, ELLIPSE };
boolean mousePressed = false;
Figure figure;
int xDown;
int yDown;

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
	figure = LINE;
}

/*
Рисование окружности с помощью алгоритма Брезенхема
*/
System::Void MainForm::paintCircleBtn_Click(System::Object^ sender, System::EventArgs^ e){
	figure = CIRCLE;
}

/*
Рисование эллипса с помощью алгоритма Брезенхема
*/
System::Void MainForm::paintEllipseBtn_Click(System::Object^  sender, System::EventArgs^  e){
	figure = ELLIPSE;
}

/**
 * Обрабатываем случай, когда мышь нажата
 */
System::Void MainForm::graphBox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	mousePressed = true;
	xDown = e->X;
	yDown = e->Y;
}

/**
* Обрабатываем случай, когда мышь отпущена
*/
System::Void MainForm::graphBox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (mousePressed)
	{
		int xUp = e->X;
		int yUp = e->Y;
		switch (figure)
		{
		case LINE:
			drawLine(xUp, yUp);
			break;
		case CIRCLE:
			drawCircle(xUp, yUp);
			break;
		case ELLIPSE:
			drawEllipse(xUp, yUp);
			break;
		default:
			break;
		}
	}
	mousePressed = false;
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
System::Void MainForm::selectColorBtn_Click(System::Object^ sender, System::EventArgs^ e){
	color = Color::Black;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		color = colorDialog->Color;
	}
}

/*
 * Рисование линии
 */
System::Void MainForm::drawLine(int xUp, int yUp)
{
	Graphics ^g = graphBox->CreateGraphics();
	int x = xDown;
	int y = yDown;
	int x1 = xUp;
	int y1 = yUp;
	int dx = Math::Abs(x1 - x);
	int dy = Math::Abs(y1 - y);
	int s1 = Math::Sign(x1 - x);
	int s2 = Math::Sign(y1 - y);
	int pixelSize = 2;
	int err = 0;
	int wasSwap = false;
	Brush ^brush = gcnew SolidBrush(color);
	//если прирост по y больше, чем по x, то меняем прирост местами
	if (dy > dx){
		Swap(dx, dy);
		wasSwap = true;
	}
	err = 2 * dy - dx;
	//идем по горизонтали до конца отрезка
	for (int i = 1; i <= dx; i++){
		g->FillRectangle(brush, x, y, pixelSize, pixelSize);
		//если начало и конец совпадают, то остановка
		if (x == x1 && y == y1)
			break;
		//
		while (err >= 0){
			//если прирост по x был больше, то идем по x
			if (wasSwap)
				x += s1;
			//идем по y
			else
				y += s2;
			//считаем ошибку
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
* Рисование окружности
*/
System::Void MainForm::drawCircle(int xUp, int yUp)
{
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	int xc = xDown;
	int yc = yDown;
	int dx = Math::Abs(xUp - xc);
	int dy = Math::Abs(yUp - yc);
	int r = (int) Math::Floor(Math::Sqrt(dx * dx + dy * dy));
	int x = 0;
	int y = r;
	int d = 2 - 2 * r;
	int err = 0;
	Brush ^brush = gcnew SolidBrush(color);
	int pixelSize = 1;
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
		//горизонтальный шаг
		if (d < 0 && err <= 0){
			x++;
			d += 2 * x + 1;
			continue;
		}
		//вертикальный шаг
		if (d > 0 && err > 0){
			y--;
			d -= 2 * y + 1;
			continue;
		}
		//диагональный шаг
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
* Рисование эллипса
*/
System::Void MainForm::drawEllipse(int xUp, int yUp)
{
	Graphics ^g = graphBox->CreateGraphics();
	Color ^col = gcnew Color();
	Brush ^brush = gcnew SolidBrush(color);
	int pixelSize = 1;
	int xc = xDown;
	int yc = yDown;
	int a = Math::Abs(xUp - xc);
	int b = Math::Abs(yUp - yc);
	int x = 0;
	int y = b;
	int a_sqr = a * a; // a^2, a - большая полуось
	int b_sqr = b * b; // b^2, b - малая полуось
	int d = 4 * b_sqr * ((x + 1) * (x + 1)) + a_sqr * ((2 * y - 1) * (2 * y - 1)) - 4 * a_sqr * b_sqr; // Функция координат точки (x+1, y-1/2)
	//первая дуга (длинная)
	while (a_sqr * (2 * y - 1) > 2 * b_sqr * (x + 1))
	{
		DrawEllipsePart(g, brush, xc, yc, x, y, pixelSize);
		//(x+1, y) горизонтальный шаг
		if (d < 0)
		{
			x++;
			d += 4 * b_sqr * (2 * x + 3);
		}
		//(x+1, y-1) диагональный шаг
		else
		{
			x++;
			d = d - 8 * a_sqr * (y - 1) + 4 * b_sqr * (2 * x + 3);
			y--;
		}
	}
	d = b_sqr * ((2 * x + 1) * (2 * x + 1)) + 4 * a_sqr * ((y + 1) * (y + 1)) - 4 * a_sqr * b_sqr;
	//вторая дуга (короткая)
	while (y + 1 != 0)
	{
		DrawEllipsePart(g, brush, xc, yc, x, y, pixelSize);
		//(x, y--) вертикальный шаг
		if (d < 0)
		{
			y--;
			d += 4 * a_sqr * (2 * y + 3);
		}
		//(x++, y--) диагональный шаг
		else
		{
			y--;
			d = d - 8 * b_sqr * (x + 1) + 4 * a_sqr * (2 * y + 3);
			x++;
		}
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
