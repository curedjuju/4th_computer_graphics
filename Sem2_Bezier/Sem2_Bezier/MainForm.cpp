#include "MainForm.h"
#include <Windows.h>

using namespace Sem2_Bezier;
using namespace System::Collections::Generic;

const int RADIUS = 15;
const float DELTA = 0.02;
System::Void drawBezierCurve(Pen^ pen, Graphics ^g, List<Point>^ points);
int bezierOrder(int pointsCount);
void drawLinear(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawQuadratic(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawQubic(Pen^ pen, Graphics ^g, List<Point>^ points);
void drawHigherOrder(Pen^ pen, Graphics ^g, List<Point>^ points);
Point calculateDeCasteljau(float t, List<Point>^ points);
int chosenPointIndex;
bool colorSelected = true;
Point pPrev;

bool draggedEnabled = false;
bool mousePressed = false;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}

System::Void MainForm::aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Program for drawing Bezier curves n-order\n" +
		"Following tasks completed:\n" +
		"1. Drawing the simple Bezier curves until 3 order\n" + 
		"2. Drawing the simple Bezier curves of higher orders by implementing De Casteljau algorithm" + 
		"3. Choosing the color\n" +
		"Developer: Yarnykh Roman, SE141 (rvyarnykh@edu.hse.ru), 2017", 
		"Bezier curves, 2017");
}

System::Void MainForm::drawBtn_Click(System::Object^  sender, System::EventArgs^  e)
{
	draggedEnabled = false;
}

System::Void MainForm::dragBtn_Click(System::Object^  sender, System::EventArgs^  e)
{
	draggedEnabled = true;
}

System::Void MainForm::clearBtn_Click(System::Object^  sender, System::EventArgs^  e)
{
	Graphics ^g = pictureBox->CreateGraphics();
	Color ^col = gcnew Color;
	g->Clear(col->White);
	points->Clear();
}

System::Void MainForm::selectColorBtn_Click(System::Object^ sender, System::EventArgs^ e){
	color = Color::Black;
	if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		color = colorDialog->Color;
		colorSelected = true;
	}
}

System::Void MainForm::pictureBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (draggedEnabled)
		return;
	points->Add(e->Location);
	Graphics ^g = pictureBox->CreateGraphics();
	Color ^col = gcnew Color;
	Brush ^brush = gcnew SolidBrush(col->Red);
	Brush ^curveBrush = gcnew SolidBrush(color);
	Pen ^pen = gcnew Pen(brush);
	Pen ^curvePen = gcnew Pen(curveBrush, widthSlider->Value);
	g->Clear(col->White);
	int i = -1;
	pPrev = Point(0, 0);
	for each (Point p in points)
	{
		g->FillEllipse(brush, p.X - RADIUS / 2, p.Y - RADIUS / 2, RADIUS, RADIUS);
		if (++i == 0){
			pPrev = p;
			continue;
		}
		g->DrawLine(pen, pPrev, p);
		pPrev = p;
	}
	drawBezierCurve(curvePen, g, points);
}

System::Void MainForm::pictureBox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (!draggedEnabled || points == nullptr || points->Count == 0)
		return;
	Point currentPoint = e->Location;
	for (int i = 0; i < points->Count; i++)
	{
		if (Math::Abs(currentPoint.X - points[i].X) <= RADIUS && Math::Abs(currentPoint.Y - points[i].Y) <= RADIUS)
		{
			chosenPointIndex = i;
			mousePressed = true;
			return;
		}
	}
}

System::Void MainForm::pictureBox_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	if (!draggedEnabled || !mousePressed || points == nullptr || points->Count == 0)
		return;
	Graphics ^g = pictureBox->CreateGraphics();
	Color ^col = gcnew Color;
	Brush ^brush = gcnew SolidBrush(col->Red);
	Brush ^curveBrush = gcnew SolidBrush(color);
	Pen ^pen = gcnew Pen(brush);
	Pen ^curvePen = gcnew Pen(curveBrush, widthSlider->Value);
	g->Clear(col->White);
	Point pPrev = Point(0, 0);
	points[chosenPointIndex] = e->Location;
	int i = -1;
	for each (Point p in points)
	{
		g->FillEllipse(brush, p.X - RADIUS / 2, p.Y - RADIUS / 2, RADIUS, RADIUS);
		if (++i == 0){
			pPrev = p;
			continue;
		}
		g->DrawLine(pen, pPrev, p);
		pPrev = p;
	}
	drawBezierCurve(curvePen, g, points);
}

System::Void MainForm::pictureBox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	mousePressed = false;
}


System::Void drawBezierCurve(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	//If order belongs range 1..3
	switch (bezierOrder(points->Count))
	{
	case 1:
		drawLinear(pen, g, points);
		break;
	case 2:
		drawQuadratic(pen, g, points);
		break;
	case 3:
		drawQubic(pen, g, points);
		break;
	default:
		drawHigherOrder(pen, g, points);
	}

}

int bezierOrder(int pointsCount)
{
	return pointsCount - 1;
}

void drawLinear(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		curvePoints->Add(Point((1 - t) * points[0].X + t * points[1].X, (1 - t) * points[0].Y + t * points[1].Y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawQuadratic(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		float x = (1 - t) * (1 - t) * points[2].X + 2 * (1 - t) * t * points[1].X + t * t * points[0].X;
		float y = (1 - t) * (1 - t) * points[2].Y + 2 * (1 - t) * t * points[1].Y + t * t * points[0].Y;
		curvePoints->Add(Point(x, y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawQubic(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		int x = (1 - t) * (1 - t) * (1 - t) * points[0].X +
			3 * (1 - t) * (1 - t) *  t * points[1].X +
			3 * (1 - t) * t * t * points[2].X +
			t * t * t * points[3].X;
		int y = (1 - t) * (1 - t) * (1 - t) * points[0].Y +
			3 * (1 - t) * (1 - t) *  t * points[1].Y +
			3 * (1 - t) * t * t * points[2].Y +
			t * t * t * points[3].Y;
		curvePoints->Add(Point(x, y));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

void drawHigherOrder(Pen^ pen, Graphics ^g, List<Point>^ points)
{
	List<Point>^ curvePoints = gcnew List<Point>;
	for (float t = 0; t <= 1; t += DELTA)
	{
		curvePoints->Add(calculateDeCasteljau(t, points));
	}
	g->DrawLines(pen, curvePoints->ToArray());
}

Point calculateDeCasteljau(float t, List<Point>^ points)
{
	array<array<Point>^> ^b = gcnew array<array<Point>^>(points->Count);
	int n = points->Count;
	for (int i = 0; i < n; i++)
	{
		b[i] = gcnew array<Point>(n);
	}
	for (int i = 0; i < n; i++)
	{
		b[0][i] = points[i];
	}
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n - j; i++) {
			b[j][i].X = (1 - t) * b[j - 1][i].X + t * b[j - 1][i + 1].X;
			b[j][i].Y = (1 - t) * b[j - 1][i].Y + t * b[j - 1][i + 1].Y;
		}
	}
	return b[n - 1][0];
}

